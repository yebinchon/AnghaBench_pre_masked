
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {unsigned long base; int num; struct resource_map* next; } ;
struct socket_data {struct resource_map io_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pcmcia_socket *VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3)
{
 struct resource_map *VAR_4;
 struct socket_data *VAR_5 = VAR_1->resource_data;
 int VAR_6 = -VAR_0;

 for (VAR_4 = VAR_5->io_db.next; VAR_4 != &VAR_5->io_db; VAR_4 = VAR_4->next) {
  unsigned long VAR_7 = VAR_4->base;
  unsigned long VAR_8 = VAR_4->base + VAR_4->num - 1;

  if (VAR_7 > VAR_2 || VAR_3 > VAR_8)
   continue;

  VAR_6 = 0;
 }

 return VAR_6;
}
