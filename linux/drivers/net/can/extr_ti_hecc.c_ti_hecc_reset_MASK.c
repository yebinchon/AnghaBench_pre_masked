
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ti_hecc_priv {int dummy; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (struct ti_hecc_priv*,int ,int ) ;
 int FUNC_1 (struct ti_hecc_priv*,int ,int ) ;
 int FUNC_2 (struct ti_hecc_priv*,int ,int ) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct ti_hecc_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ti_hecc_priv*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_18)
{
 u32 VAR_19;
 struct ti_hecc_priv *VAR_20 = FUNC_4(VAR_18);

 FUNC_3(VAR_18, "resetting hecc ...\n");
 FUNC_1(VAR_20, VAR_4, VAR_7);


 FUNC_1(VAR_20, VAR_4, VAR_5);





 VAR_19 = VAR_16;
 while (!FUNC_0(VAR_20, VAR_0, VAR_1) && VAR_19 != 0) {
  --VAR_19;
  FUNC_6(10);
 }





 FUNC_5(VAR_20);


 FUNC_2(VAR_20, VAR_4, 0);
 VAR_19 = VAR_16;
 while (FUNC_0(VAR_20, VAR_0, VAR_1) && VAR_19 != 0) {
  --VAR_19;
  FUNC_6(10);
 }


 FUNC_2(VAR_20, VAR_14, VAR_15);
 FUNC_2(VAR_20, VAR_10, VAR_11);


 FUNC_2(VAR_20, VAR_13, VAR_17);
 FUNC_2(VAR_20, VAR_12, VAR_17);
 FUNC_2(VAR_20, VAR_2, VAR_17);
 FUNC_2(VAR_20, VAR_3, VAR_17);
 FUNC_2(VAR_20, VAR_9, 0);
 FUNC_2(VAR_20, VAR_8, 0);


 FUNC_1(VAR_20, VAR_4, VAR_6);
}
