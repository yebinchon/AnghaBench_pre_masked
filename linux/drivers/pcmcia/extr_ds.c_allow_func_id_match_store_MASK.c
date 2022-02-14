
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int allow_func_id_match; TYPE_1__* socket; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int ops_mutex; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct pcmcia_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct pcmcia_device *VAR_6 = FUNC_3(VAR_2);

 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_6->socket->ops_mutex);
 VAR_6->allow_func_id_match = 1;
 FUNC_1(&VAR_6->socket->ops_mutex);
 FUNC_2(VAR_6->socket, VAR_1);

 return VAR_5;
}
