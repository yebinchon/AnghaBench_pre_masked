
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct at91_priv {int reg_sr; int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct at91_priv*,int ) ;
 int FUNC_3 (struct at91_priv*,int ,int) ;
 int FUNC_4 (struct at91_priv*) ;
 int FUNC_5 (struct at91_priv*) ;
 int FUNC_6 (int *) ;
 struct at91_priv* FUNC_7 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct at91_priv *VAR_9 = FUNC_7(VAR_8);
 irqreturn_t VAR_10 = VAR_5;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_2(VAR_9, VAR_3);
 VAR_12 = FUNC_2(VAR_9, VAR_1);


 VAR_11 &= VAR_12;
 if (!VAR_11)
  goto exit;

 VAR_10 = VAR_4;


 if (VAR_11 & (FUNC_4(VAR_9) | VAR_2)) {




  VAR_9->reg_sr = VAR_11;
  FUNC_3(VAR_9, VAR_0,
      FUNC_4(VAR_9) | VAR_2);
  FUNC_6(&VAR_9->napi);
 }


 if (VAR_11 & FUNC_5(VAR_9))
  FUNC_1(VAR_8, VAR_11);

 FUNC_0(VAR_8);

 exit:
 return VAR_10;
}
