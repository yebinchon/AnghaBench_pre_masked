
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TupleDataLen; int* TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_device {int dummy; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pcmcia_device *VAR_1,
     tuple_t *VAR_2,
     void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 int VAR_5;

 if (VAR_2->TupleDataLen < 8)
  return -VAR_0;
 if (VAR_2->TupleData[0] != 0x04)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
  VAR_4->dev_addr[VAR_5] = VAR_2->TupleData[VAR_5+2];
 return 0;
}
