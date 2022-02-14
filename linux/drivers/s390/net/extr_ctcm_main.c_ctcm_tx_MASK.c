
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct TYPE_2__ {int tx_carrier_errors; int tx_errors; int tx_dropped; } ;
struct ctcm_priv {int * channel; TYPE_1__ stats; int fsm; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct ctcm_priv *VAR_11 = VAR_10->ml_priv;

 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_2,
    "%s(%s): NULL sk_buff passed",
     VAR_0, VAR_10->name);
  VAR_11->stats.tx_dropped++;
  return VAR_8;
 }
 if (FUNC_7(VAR_9) < (VAR_6 + 2)) {
  FUNC_0(VAR_5, VAR_2,
   "%s(%s): Got sk_buff with head room < %ld bytes",
   VAR_0, VAR_10->name, VAR_6 + 2);
  FUNC_3(VAR_9);
  VAR_11->stats.tx_dropped++;
  return VAR_8;
 }





 if (FUNC_5(VAR_11->fsm) != VAR_4) {
  FUNC_4(VAR_11->fsm, VAR_3, VAR_10);
  FUNC_3(VAR_9);
  VAR_11->stats.tx_dropped++;
  VAR_11->stats.tx_errors++;
  VAR_11->stats.tx_carrier_errors++;
  return VAR_8;
 }

 if (FUNC_1(VAR_10))
  return VAR_7;

 FUNC_6(VAR_10);
 if (FUNC_2(VAR_11->channel[VAR_1], VAR_9) != 0)
  return VAR_7;
 return VAR_8;
}
