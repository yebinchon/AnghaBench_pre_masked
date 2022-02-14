
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_hw {int link_speed; } ;
struct alx_priv {int dev; int irq_lock; int int_mask; struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alx_hw*) ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (struct alx_hw*,int,int) ;
 int FUNC_3 (struct alx_priv*) ;
 int FUNC_4 (struct alx_priv*) ;
 int FUNC_5 (struct alx_priv*) ;
 int FUNC_6 (struct alx_priv*) ;
 int FUNC_7 (struct alx_hw*) ;
 int FUNC_8 (struct alx_hw*) ;
 int FUNC_9 (struct alx_priv*) ;
 int FUNC_10 (struct alx_hw*) ;
 int FUNC_11 (struct alx_priv*) ;
 int FUNC_12 (struct alx_hw*) ;
 int FUNC_13 (struct alx_hw*) ;
 int FUNC_14 (struct alx_hw*,int ,int ) ;
 int VAR_3 ;
 int FUNC_15 (struct alx_priv*,int ,int ,char*,...) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_18(struct alx_priv *VAR_4)
{
 struct alx_hw *VAR_5 = &VAR_4->hw;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;




 FUNC_0(VAR_5);

 VAR_7 = VAR_5->link_speed;
 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8 < 0)
  goto reset;

 FUNC_16(&VAR_4->irq_lock, VAR_6);
 VAR_4->int_mask |= VAR_1;
 FUNC_14(VAR_5, VAR_0, VAR_4->int_mask);
 FUNC_17(&VAR_4->irq_lock, VAR_6);

 if (VAR_7 == VAR_5->link_speed)
  return;

 if (VAR_5->link_speed != VAR_2) {
  FUNC_15(VAR_4, VAR_3, VAR_4->dev,
      "NIC Up: %s\n", FUNC_12(VAR_5));
  FUNC_7(VAR_5);
  FUNC_2(VAR_5, 1, 1);
  FUNC_13(VAR_5);

  if (VAR_7 == VAR_2)
   FUNC_5(VAR_4);
 } else {

  FUNC_6(VAR_4);
  FUNC_15(VAR_4, VAR_3, VAR_4->dev, "Link Down\n");
  VAR_8 = FUNC_10(VAR_5);
  if (VAR_8)
   goto reset;
  FUNC_3(VAR_4);


  VAR_8 = FUNC_9(VAR_4);
  if (VAR_8)
   goto reset;
  FUNC_1(VAR_4);
  FUNC_2(VAR_5, 0, 1);
  FUNC_7(VAR_5);
  FUNC_4(VAR_4);
 }

 return;

reset:
 FUNC_11(VAR_4);
}
