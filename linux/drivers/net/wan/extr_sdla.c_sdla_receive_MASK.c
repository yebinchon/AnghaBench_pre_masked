
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sdla_cmd {int opp_flag; short dlci; short length; } ;
struct TYPE_2__ {int rx_packets; int rx_dropped; int rx_errors; } ;
struct net_device {int mem_start; TYPE_1__ stats; } ;
struct frhdr {int dummy; } ;
struct frad_local {int type; int buffer; short* dlci; struct net_device** master; } ;
struct dlci_local {int (* receive ) (struct sk_buff*,struct net_device*) ;} ;
struct buf_info {int buf_top; int buf_base; int rse_num; int rse_base; } ;
struct buf_entry {int opp_flag; short dlci; short length; int buf_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int,int ,short) ;
 struct sk_buff* FUNC_2 (short) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 void* FUNC_4 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*,short) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_6)
{
 struct net_device *VAR_7;
 struct frad_local *VAR_8;
 struct dlci_local *VAR_9;
 struct sk_buff *VAR_10;

 struct sdla_cmd *VAR_11;
 struct buf_info *VAR_12;
 struct buf_entry *VAR_13;

 unsigned long VAR_14;
 int VAR_15=0, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 short VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_8 = FUNC_4(VAR_6);
 VAR_17 = 1;
 VAR_16 = VAR_18 = VAR_20 = VAR_19 = 0;
 VAR_22 = VAR_21 = 0;
 VAR_10 = ((void*)0);
 VAR_7 = ((void*)0);
 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);
 VAR_13 = ((void*)0);

 FUNC_7(&VAR_5, VAR_14);

 switch (VAR_8->type)
 {
  case 130:
  case 129:
   VAR_11 = (void *) (VAR_6->mem_start + (VAR_2 & VAR_4));
   FUNC_0(VAR_6, VAR_2);
   VAR_17 = VAR_11->opp_flag;
   if (!VAR_17)
    break;

   VAR_21 = VAR_11->dlci;
   VAR_22 = VAR_11->length;
   break;

  case 128:
   VAR_12 = (void *) (VAR_6->mem_start + (VAR_3 & VAR_4));
   FUNC_0(VAR_6, VAR_3);
   VAR_13 = (void *) (VAR_6->mem_start + ((VAR_12->rse_base + VAR_8->buffer * sizeof(struct buf_entry)) & VAR_4));
   VAR_17 = VAR_13->opp_flag;
   if (!VAR_17)
    break;

   VAR_20 = VAR_12->buf_top;
   VAR_19 = VAR_12->buf_base;
   VAR_21 = VAR_13->dlci;
   VAR_22 = VAR_13->length;
   VAR_18 = VAR_13->buf_addr;
   break;
 }


 if (VAR_17)
 {
  for (VAR_15=0;VAR_15<VAR_0;VAR_15++)
   if (VAR_8->dlci[VAR_15] == VAR_21)
    break;

  if (VAR_15 == VAR_0)
  {
   FUNC_3(VAR_6, "Received packet from invalid DLCI %i, ignoring\n",
          VAR_21);
   VAR_6->stats.rx_errors++;
   VAR_17 = 0;
  }
 }

 if (VAR_17)
 {
  VAR_7 = VAR_8->master[VAR_15];
  VAR_10 = FUNC_2(VAR_22 + sizeof(struct frhdr));
  if (VAR_10 == ((void*)0))
  {
   FUNC_3(VAR_6, "Memory squeeze, dropping packet\n");
   VAR_6->stats.rx_dropped++;
   VAR_17 = 0;
  }
  else
   FUNC_6(VAR_10, sizeof(struct frhdr));
 }


 switch (VAR_8->type)
 {
  case 130:
  case 129:
   if (VAR_17)
    FUNC_1(VAR_6, VAR_2 + VAR_1, FUNC_5(VAR_10,VAR_22), VAR_22);

   FUNC_0(VAR_6, VAR_2);
   VAR_11->opp_flag = 0;
   break;

  case 128:
   if (VAR_17)
   {

    VAR_24 = VAR_18 + VAR_22 > VAR_20 + 1 ? VAR_22 - (VAR_20 - VAR_18 + 1) : 0;
    VAR_23 = VAR_22 - VAR_24;

    FUNC_1(VAR_6, VAR_18, FUNC_5(VAR_10, VAR_23), VAR_23);
    if (VAR_24)
     FUNC_1(VAR_6, VAR_19, FUNC_5(VAR_10, VAR_24), VAR_24);
   }


   FUNC_0(VAR_6, VAR_3);
   VAR_8->buffer = (VAR_8->buffer + 1) % VAR_12->rse_num;
   VAR_13->opp_flag = 0;
   break;
 }

 if (VAR_17)
 {
  VAR_6->stats.rx_packets++;
  VAR_9 = FUNC_4(VAR_7);
  (*VAR_9->receive)(VAR_10, VAR_7);
 }

 FUNC_8(&VAR_5, VAR_14);
}
