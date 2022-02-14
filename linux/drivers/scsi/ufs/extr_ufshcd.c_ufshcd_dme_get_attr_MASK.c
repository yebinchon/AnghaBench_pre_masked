
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct uic_command {int argument3; int argument1; int command; int member_0; } ;
struct ufs_pa_layer_attr {scalar_t__ pwr_tx; scalar_t__ pwr_rx; } ;
struct ufs_hba {int quirks; int dev; struct ufs_pa_layer_attr pwr_info; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,int ,int) ;
 int FUNC_2 (int ,char*,char const*,int ,int) ;
 int FUNC_3 (struct ufs_hba*,struct ufs_pa_layer_attr*) ;
 int FUNC_4 (struct ufs_hba*,struct uic_command*) ;

int FUNC_5(struct ufs_hba *VAR_8, u32 VAR_9,
   u32 *VAR_10, u8 VAR_11)
{
 struct uic_command VAR_12 = {0};
 static const char *const VAR_13[] = {
  "dme-get",
  "dme-peer-get"
 };
 const char *VAR_14 = VAR_13[!!VAR_11];
 int VAR_15;
 int VAR_16 = VAR_5;
 struct ufs_pa_layer_attr VAR_17;
 struct ufs_pa_layer_attr VAR_18;
 bool VAR_19 = 0;

 if (VAR_11 && (VAR_8->quirks & VAR_4)) {
  VAR_17 = VAR_8->pwr_info;
  VAR_18 = VAR_17;

  if (VAR_17.pwr_tx == VAR_1 ||
      VAR_17.pwr_rx == VAR_1) {
   VAR_18.pwr_tx = VAR_0;
   VAR_18.pwr_rx = VAR_0;
   VAR_19 = 1;
  } else if (VAR_17.pwr_tx == VAR_3 ||
      VAR_17.pwr_rx == VAR_3) {
   VAR_18.pwr_tx = VAR_2;
   VAR_18.pwr_rx = VAR_2;
   VAR_19 = 1;
  }
  if (VAR_19) {
   VAR_15 = FUNC_3(VAR_8, &VAR_18);
   if (VAR_15)
    goto out;
  }
 }

 VAR_12.command = VAR_11 ?
  VAR_7 : VAR_6;
 VAR_12.argument1 = VAR_9;

 do {

  VAR_15 = FUNC_4(VAR_8, &VAR_12);
  if (VAR_15)
   FUNC_1(VAR_8->dev, "%s: attr-id 0x%x error code %d\n",
    VAR_14, FUNC_0(VAR_9), VAR_15);
 } while (VAR_15 && VAR_11 && --VAR_16);

 if (VAR_15)
  FUNC_2(VAR_8->dev, "%s: attr-id 0x%x failed %d retries\n",
   VAR_14, FUNC_0(VAR_9),
   VAR_5 - VAR_16);

 if (VAR_10 && !VAR_15)
  *VAR_10 = VAR_12.argument3;

 if (VAR_11 && (VAR_8->quirks & VAR_4)
     && VAR_19)
  FUNC_3(VAR_8, &VAR_17);
out:
 return VAR_15;
}
