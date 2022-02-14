
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct dcon_priv {int switch_source; int bl_dev; int reboot_nb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,struct dcon_priv*) ;
 struct dcon_priv* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct dcon_priv*) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4)
{
 struct dcon_priv *VAR_5 = FUNC_4(VAR_4);

 FUNC_7(&VAR_5->reboot_nb);
 FUNC_0(&VAR_3, &VAR_2);

 FUNC_3(VAR_0, VAR_5);

 FUNC_1(VAR_5->bl_dev);

 if (VAR_1)
  FUNC_6(VAR_1);
 FUNC_2(&VAR_5->switch_source);

 FUNC_5(VAR_5);

 return 0;
}
