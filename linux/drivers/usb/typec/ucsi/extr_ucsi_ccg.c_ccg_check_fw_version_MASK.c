
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct version_format {int ver; int patch; int build; } ;
struct ucsi_ccg {struct device* dev; } ;
struct TYPE_2__ {int ver; int patch; int build; } ;
struct fw_config_table {float identity; TYPE_1__ app; } ;
struct firmware {int size; int data; } ;
struct device {int dummy; } ;
typedef int fw_cfg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ucsi_ccg*,struct version_format*,struct fw_config_table*) ;
 int FUNC_3 (struct device*,char*,char const*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (struct firmware const*) ;
 scalar_t__ FUNC_8 (struct firmware const**,char const*,struct device*) ;

__attribute__((used)) static bool FUNC_9(struct ucsi_ccg *VAR_1, const char *VAR_2,
     struct version_format *VAR_3)
{
 const struct firmware *VAR_4 = ((void*)0);
 struct device *VAR_5 = VAR_1->dev;
 struct fw_config_table VAR_6;
 u32 VAR_7, VAR_8;
 bool VAR_9 = 0;

 if (FUNC_8(&VAR_4, VAR_2, VAR_5) != 0) {
  FUNC_3(VAR_5, "error: Failed to open cyacd file %s\n", VAR_2);
  return 0;
 }





 if (VAR_4->size < sizeof(VAR_6) + VAR_0)
  goto out_release_firmware;

 FUNC_6((uint8_t *)&VAR_6, VAR_4->data + VAR_4->size -
        sizeof(VAR_6) - VAR_0, sizeof(VAR_6));

 if (VAR_6.identity != ('F' | 'W' << 8 | 'C' << 16 | 'T' << 24)) {
  FUNC_4(VAR_5, "not a signed image\n");
  goto out_release_firmware;
 }


 VAR_7 = FUNC_5(VAR_3->build) | FUNC_1(VAR_3->patch) |
   FUNC_0(VAR_3->ver);

 VAR_8 = FUNC_5(VAR_6.app.build) |
   FUNC_1(VAR_6.app.patch) |
   FUNC_0(VAR_6.app.ver);

 if (!FUNC_2(VAR_1, VAR_3, &VAR_6))
  goto out_release_firmware;

 if (VAR_8 > VAR_7)
  VAR_9 = 1;

out_release_firmware:
 FUNC_7(VAR_4);
 return VAR_9;
}
