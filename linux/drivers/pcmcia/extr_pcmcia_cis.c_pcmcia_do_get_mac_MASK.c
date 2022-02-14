
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* TupleData; scalar_t__ TupleDataLen; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_device {int dev; } ;
struct net_device {scalar_t__* dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3, tuple_t *VAR_4,
        void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 int VAR_7;

 if (VAR_4->TupleData[0] != VAR_0)
  return -VAR_1;
 if (VAR_4->TupleDataLen < VAR_2 + 2) {
  FUNC_0(&VAR_3->dev, "Invalid CIS tuple length for "
   "LAN_NODE_ID\n");
  return -VAR_1;
 }

 if (VAR_4->TupleData[1] != VAR_2) {
  FUNC_0(&VAR_3->dev, "Invalid header for LAN_NODE_ID\n");
  return -VAR_1;
 }
 for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
  VAR_6->dev_addr[VAR_7] = VAR_4->TupleData[VAR_7+2];
 return 0;
}
