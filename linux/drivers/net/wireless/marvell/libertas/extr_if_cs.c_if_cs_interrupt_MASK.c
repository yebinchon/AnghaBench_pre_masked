
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct lbs_private {int surpriseremoved; scalar_t__ resp_idx; struct if_cs_card* card; int driver_lock; int * resp_len; int * resp_buf; } ;
struct if_cs_card {struct lbs_private* priv; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct if_cs_card*,int ) ;
 int FUNC_2 (struct lbs_private*,int ,int *) ;
 struct sk_buff* FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (struct if_cs_card*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct lbs_private*) ;
 int FUNC_7 (struct lbs_private*,size_t) ;
 int FUNC_8 (struct lbs_private*,struct sk_buff*) ;
 int FUNC_9 (struct lbs_private*,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_11, void *VAR_12)
{
 struct if_cs_card *VAR_13 = VAR_12;
 struct lbs_private *VAR_14 = VAR_13->priv;
 u16 VAR_15;


 VAR_15 = FUNC_1(VAR_13, VAR_5);
 FUNC_5("cause 0x%04x\n", VAR_15);

 if (VAR_15 == 0) {

  return VAR_10;
 }

 if (VAR_15 == 0xffff) {

  VAR_13->priv->surpriseremoved = 1;
  return VAR_9;
 }

 if (VAR_15 & VAR_3) {
  struct sk_buff *VAR_16;
  FUNC_5("rx packet\n");
  VAR_16 = FUNC_3(VAR_14);
  if (VAR_16)
   FUNC_8(VAR_14, VAR_16);
 }

 if (VAR_15 & VAR_4) {
  FUNC_5("tx done\n");
  FUNC_6(VAR_14);
 }

 if (VAR_15 & VAR_2) {
  unsigned long VAR_17;
  u8 VAR_18;

  FUNC_5("cmd resp\n");
  FUNC_10(&VAR_14->driver_lock, VAR_17);
  VAR_18 = (VAR_14->resp_idx == 0) ? 1 : 0;
  FUNC_11(&VAR_14->driver_lock, VAR_17);

  FUNC_0(VAR_14->resp_len[VAR_18]);
  FUNC_2(VAR_14, VAR_14->resp_buf[VAR_18],
   &VAR_14->resp_len[VAR_18]);

  FUNC_10(&VAR_14->driver_lock, VAR_17);
  FUNC_7(VAR_14, VAR_18);
  FUNC_11(&VAR_14->driver_lock, VAR_17);
 }

 if (VAR_15 & VAR_0) {
  u16 VAR_19 = FUNC_1(VAR_14->card, VAR_6);
  FUNC_4(VAR_14->card, VAR_8,
   VAR_0);
  FUNC_9(VAR_14, (VAR_19 & VAR_7) >> 8);
 }


 FUNC_4(VAR_13, VAR_5, VAR_15 & VAR_1);

 return VAR_9;
}
