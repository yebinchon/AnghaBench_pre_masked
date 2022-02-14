
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger_platform_data {int irq_gpio; } ;
struct smb347_charger {int regmap; struct smb347_charger_platform_data* pdata; } ;
struct i2c_client {int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct smb347_charger*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int,int *,int ,int,int ,struct smb347_charger*) ;
 int VAR_6 ;
 int FUNC_6 (struct smb347_charger*,int) ;

__attribute__((used)) static int FUNC_7(struct smb347_charger *VAR_7,
      struct i2c_client *VAR_8)
{
 const struct smb347_charger_platform_data *VAR_9 = VAR_7->pdata;
 int VAR_10, VAR_11 = FUNC_3(VAR_9->irq_gpio);

 VAR_10 = FUNC_2(VAR_9->irq_gpio, VAR_3, VAR_8->name);
 if (VAR_10 < 0)
  goto fail;

 VAR_10 = FUNC_5(VAR_11, ((void*)0), VAR_6,
       VAR_5 | VAR_4,
       VAR_8->name, VAR_7);
 if (VAR_10 < 0)
  goto fail_gpio;

 VAR_10 = FUNC_6(VAR_7, 1);
 if (VAR_10 < 0)
  goto fail_irq;





 VAR_10 = FUNC_4(VAR_7->regmap, VAR_0,
     VAR_1 | VAR_2,
     VAR_2);
 if (VAR_10 < 0)
  goto fail_readonly;

 FUNC_6(VAR_7, 0);
 VAR_8->irq = VAR_11;
 return 0;

fail_readonly:
 FUNC_6(VAR_7, 0);
fail_irq:
 FUNC_0(VAR_11, VAR_7);
fail_gpio:
 FUNC_1(VAR_9->irq_gpio);
fail:
 VAR_8->irq = 0;
 return VAR_10;
}
