
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {scalar_t__ chip_id; } ;
struct net_device {int dummy; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_32)
{
 struct ravb_private *VAR_33 = FUNC_0(VAR_32);
 int VAR_34;


 VAR_34 = FUNC_1(VAR_32);
 if (VAR_34)
  return VAR_34;

 VAR_34 = FUNC_5(VAR_32, VAR_8);
 if (VAR_34)
  return VAR_34;
 VAR_34 = FUNC_5(VAR_32, VAR_9);
 if (VAR_34) {
  FUNC_4(VAR_32, VAR_8);
  return VAR_34;
 }


 FUNC_3(VAR_32, VAR_8);
 FUNC_3(VAR_32, VAR_9);


 FUNC_6(VAR_32,
     VAR_12 | VAR_13 | VAR_15 | VAR_14 | 0x18000000, VAR_11);


 FUNC_6(VAR_32, VAR_27 | 0x00112200, VAR_26);


 FUNC_6(VAR_32, VAR_25, VAR_24);


 if (VAR_33->chip_id == VAR_10) {

  FUNC_6(VAR_32, 0, VAR_7);

  FUNC_6(VAR_32, VAR_5 | VAR_6 | VAR_4, VAR_3);
 }

 FUNC_6(VAR_32, VAR_17 | VAR_18, VAR_16);

 FUNC_6(VAR_32, 0, VAR_19);

 FUNC_6(VAR_32, VAR_21 | VAR_22 | VAR_23, VAR_20);

 FUNC_6(VAR_32, VAR_29 | VAR_30 | VAR_31, VAR_28);


 FUNC_2(VAR_32, VAR_0, VAR_1, VAR_2);

 return 0;
}
