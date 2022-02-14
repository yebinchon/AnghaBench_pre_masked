
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct if_sdio_card {TYPE_1__* priv; int pwron_waitq; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int fw_ready; scalar_t__ power_up_on_resume; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 struct sdio_func* FUNC_1 (struct device*) ;
 int FUNC_2 (struct if_sdio_card*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sdio_func*) ;
 struct if_sdio_card* FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct sdio_func *VAR_1 = FUNC_1(VAR_0);
 struct if_sdio_card *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 FUNC_0(VAR_0, "%s: resume: we're back\n", FUNC_4(VAR_1));

 if (VAR_2->priv->power_up_on_resume) {
  FUNC_2(VAR_2);
  FUNC_6(VAR_2->pwron_waitq, VAR_2->priv->fw_ready);
 }

 VAR_3 = FUNC_3(VAR_2->priv);

 return VAR_3;
}
