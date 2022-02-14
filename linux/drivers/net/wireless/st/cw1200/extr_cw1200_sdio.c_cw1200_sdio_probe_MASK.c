
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {int num; int dev; TYPE_1__* card; } ;
struct sdio_device_id {int dummy; } ;
struct hwbus_priv {TYPE_2__* pdata; int core; struct sdio_func* func; } ;
struct TYPE_4__ {int have_5ghz; int sdd_file; int macaddr; int ref_clk; } ;
struct TYPE_3__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct hwbus_priv*,int *,int *,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct hwbus_priv*) ;
 int FUNC_2 (struct hwbus_priv*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (struct hwbus_priv*) ;
 struct hwbus_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct sdio_func*) ;
 int FUNC_11 (struct sdio_func*,struct hwbus_priv*) ;

__attribute__((used)) static int FUNC_12(struct sdio_func *VAR_6,
        const struct sdio_device_id *VAR_7)
{
 struct hwbus_priv *VAR_8;
 int VAR_9;

 FUNC_6("cw1200_wlan_sdio: Probe called\n");


 if (VAR_6->num != 0x01)
  return -VAR_0;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_5("Can't allocate SDIO hwbus_priv.\n");
  return -VAR_1;
 }

 VAR_6->card->quirks |= VAR_3;

 VAR_8->pdata = VAR_5;
 VAR_8->func = VAR_6;
 FUNC_11(VAR_6, VAR_8);
 FUNC_7(VAR_6);
 FUNC_9(VAR_6);
 FUNC_10(VAR_6);

 VAR_9 = FUNC_1(VAR_8);

 VAR_9 = FUNC_0(&VAR_4,
       VAR_8, &VAR_6->dev, &VAR_8->core,
       VAR_8->pdata->ref_clk,
       VAR_8->pdata->macaddr,
       VAR_8->pdata->sdd_file,
       VAR_8->pdata->have_5ghz);
 if (VAR_9) {
  FUNC_2(VAR_8);
  FUNC_7(VAR_6);
  FUNC_8(VAR_6);
  FUNC_10(VAR_6);
  FUNC_11(VAR_6, ((void*)0));
  FUNC_3(VAR_8);
 }

 return VAR_9;
}
