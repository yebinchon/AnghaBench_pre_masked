
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {scalar_t__ num; scalar_t__ base; struct resource_map* next; } ;
struct socket_data {struct resource_map io_db; } ;
struct pcmcia_socket {int ops_mutex; struct socket_data* resource_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pcmcia_socket* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,char*,unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct pcmcia_socket *VAR_4 = FUNC_0(VAR_1);
 struct socket_data *VAR_5;
 struct resource_map *VAR_6;
 ssize_t VAR_7 = 0;

 FUNC_1(&VAR_4->ops_mutex);
 VAR_5 = VAR_4->resource_data;

 for (VAR_6 = VAR_5->io_db.next; VAR_6 != &VAR_5->io_db; VAR_6 = VAR_6->next) {
  if (VAR_7 > (VAR_0 - 10))
   continue;
  VAR_7 += FUNC_3(&VAR_3[VAR_7], (VAR_0 - VAR_7 - 1),
    "0x%08lx - 0x%08lx\n",
    ((unsigned long) VAR_6->base),
    ((unsigned long) VAR_6->base + VAR_6->num - 1));
 }

 FUNC_2(&VAR_4->ops_mutex);
 return VAR_7;
}
