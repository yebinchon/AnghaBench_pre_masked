
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ cantype; } ;
struct xcan_priv {int (* write_reg ) (struct xcan_priv*,int,int) ;TYPE_1__ devtype; } ;
struct sk_buff {scalar_t__ data; } ;
struct canfd_frame {int can_id; int len; int flags; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct xcan_priv*,int,int) ;
 int FUNC_9 (struct xcan_priv*,int,int) ;
 int FUNC_10 (struct xcan_priv*,int,int) ;
 int FUNC_11 (struct xcan_priv*,int,int) ;
 int FUNC_12 (struct xcan_priv*,int,int) ;

__attribute__((used)) static void FUNC_13(struct xcan_priv *VAR_20, struct sk_buff *VAR_21,
        int VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25[2] = {0, 0};
 struct canfd_frame *VAR_26 = (struct canfd_frame *)VAR_21->data;
 u32 VAR_27, VAR_28 = 0, VAR_29;


 if (VAR_26->can_id & VAR_1) {

  VAR_23 = ((VAR_26->can_id & VAR_3) << VAR_16) &
   VAR_15;
  VAR_23 |= (((VAR_26->can_id & VAR_3) >>
   (VAR_2 - VAR_5)) <<
   VAR_14) & VAR_13;




  VAR_23 |= VAR_17 | VAR_19;

  if (VAR_26->can_id & VAR_4)

   VAR_23 |= VAR_18;
 } else {

  VAR_23 = ((VAR_26->can_id & VAR_6) << VAR_14) &
   VAR_13;

  if (VAR_26->can_id & VAR_4)

   VAR_23 |= VAR_19;
 }

 VAR_24 = FUNC_7(VAR_26->len) << VAR_11;
 if (FUNC_6(VAR_21)) {
  if (VAR_26->flags & VAR_0)
   VAR_24 |= VAR_10;
  VAR_24 |= VAR_12;
 }

 VAR_20->write_reg(VAR_20, FUNC_4(VAR_22), VAR_23);



 VAR_20->write_reg(VAR_20, FUNC_1(VAR_22), VAR_24);
 if (VAR_20->devtype.cantype == VAR_7 ||
     VAR_20->devtype.cantype == VAR_8) {
  for (VAR_29 = 0; VAR_29 < VAR_26->len; VAR_29 += 4) {
   VAR_27 = FUNC_0(VAR_22) +
     (VAR_28 * VAR_9);
   VAR_20->write_reg(VAR_20, VAR_27,
     FUNC_5((__be32 *)(VAR_26->data + VAR_29)));
   VAR_28++;
  }
 } else {
  if (VAR_26->len > 0)
   VAR_25[0] = FUNC_5((__be32 *)(VAR_26->data + 0));
  if (VAR_26->len > 4)
   VAR_25[1] = FUNC_5((__be32 *)(VAR_26->data + 4));

  if (!(VAR_26->can_id & VAR_4)) {
   VAR_20->write_reg(VAR_20,
     FUNC_2(VAR_22),
     VAR_25[0]);



   VAR_20->write_reg(VAR_20,
     FUNC_3(VAR_22),
     VAR_25[1]);
  }
 }
}
