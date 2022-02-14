
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int * data; TYPE_1__* dev; } ;
struct TYPE_4__ {int tx_errors; int tx_dropped; int tx_packets; } ;
struct net_device {int type; TYPE_2__ stats; scalar_t__ mem_start; } ;
struct frad_local {int type; struct net_device** master; } ;
struct buf_entry {int opp_flag; int buf_addr; } ;
typedef int netdev_tx_t ;
typedef int addr ;
struct TYPE_3__ {int type; scalar_t__ dev_addr; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int ,int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct frad_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ,short,int ,int *,int ,int*,short*) ;
 int VAR_5 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_6,
     struct net_device *VAR_7)
{
 struct frad_local *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 short VAR_13;
 unsigned long VAR_14;
 struct buf_entry *VAR_15;

 VAR_8 = FUNC_3(VAR_7);
 VAR_9 = 0;
 VAR_11 = 1;

 FUNC_5(VAR_7);







 VAR_11 = 1;
 switch (VAR_7->type)
 {
  case 135:
   if (VAR_6->dev->type != VAR_0)
   {
    FUNC_4(VAR_7, "Non DLCI device, type %i, tried to send on FRAD module\n",
         VAR_6->dev->type);
    VAR_11 = 0;
   }
   break;
  default:
   FUNC_4(VAR_7, "unknown firmware type 0x%04X\n",
        VAR_7->type);
   VAR_11 = 0;
   break;
 }
 if (VAR_11)
 {

  switch (VAR_8->type)
  {
   case 130:
   case 129:
    VAR_9 = FUNC_7(VAR_7, VAR_4, *(short *)(VAR_6->dev->dev_addr), 0, VAR_6->data, VAR_6->len, ((void*)0), ((void*)0));
    break;
    case 128:
    VAR_13 = sizeof(VAR_10);
    VAR_9 = FUNC_7(VAR_7, VAR_4, *(short *)(VAR_6->dev->dev_addr), 0, ((void*)0), VAR_6->len, &VAR_10, &VAR_13);
    if (VAR_9 == 131)
    {

     FUNC_8(&VAR_5, VAR_14);
     FUNC_0(VAR_7, VAR_10);
     VAR_15 = (void *)(((int) VAR_7->mem_start) + (VAR_10 & VAR_3));
     FUNC_1(VAR_7, VAR_15->buf_addr, VAR_6->data, VAR_6->len);
     FUNC_0(VAR_7, VAR_10);
     VAR_15->opp_flag = 1;
     FUNC_9(&VAR_5, VAR_14);
    }
    break;
  }

  switch (VAR_9)
  {
   case 131:
    VAR_7->stats.tx_packets++;
    break;

   case 133:
   case 134:
   case 132:
    VAR_7->stats.tx_dropped++;
    break;

   default:
    VAR_7->stats.tx_errors++;
    break;
  }
 }
 FUNC_6(VAR_7);
 for(VAR_12=0;VAR_12<VAR_1;VAR_12++)
 {
  if(VAR_8->master[VAR_12]!=((void*)0))
   FUNC_6(VAR_8->master[VAR_12]);
 }

 FUNC_2(VAR_6);
 return VAR_2;
}
