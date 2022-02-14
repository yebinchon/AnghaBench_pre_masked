
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int regmap; } ;
struct encx24j600_priv {TYPE_1__ ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct encx24j600_priv*,int ) ;
 scalar_t__ FUNC_1 (struct encx24j600_priv*,int ) ;
 int FUNC_2 (struct encx24j600_priv*,int ,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct encx24j600_priv *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;
 u16 VAR_10;


 FUNC_3(VAR_7->ctx.regmap, 1);
 VAR_9 = 10;
 do {
  FUNC_2(VAR_7, VAR_4, VAR_5);
  VAR_10 = FUNC_1(VAR_7, VAR_4);
  FUNC_4(25, 100);
 } while ((VAR_10 != VAR_5) && --VAR_9);
 FUNC_3(VAR_7->ctx.regmap, 0);

 if (VAR_9 == 0) {
  VAR_8 = -VAR_3;
  goto err_out;
 }


 VAR_9 = 10;
 while (!(FUNC_1(VAR_7, VAR_2) & VAR_0) && --VAR_9)
  FUNC_4(25, 100);

 if (VAR_9 == 0) {
  VAR_8 = -VAR_3;
  goto err_out;
 }


 FUNC_0(VAR_7, VAR_6);
 FUNC_4(25, 100);


 if (FUNC_1(VAR_7, VAR_4) != 0) {
  VAR_8 = -VAR_1;
  goto err_out;
 }


 FUNC_4(256, 1000);

err_out:
 return VAR_8;
}
