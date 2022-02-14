
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int rv2p; } ;
struct TYPE_9__ {int rv2p; } ;
struct bnx2_rv2p_fw_file {TYPE_3__ proc2; TYPE_2__ proc1; } ;
struct bnx2_mips_fw_file {int txp; int tpat; int rxp; int cp; int com; } ;
struct bnx2 {TYPE_4__* mips_firmware; TYPE_4__* rv2p_firmware; TYPE_1__* pdev; } ;
struct TYPE_11__ {int size; scalar_t__ data; } ;
struct TYPE_8__ {int dev; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *,int,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__**,char const*,int *) ;

__attribute__((used)) static int FUNC_7(struct bnx2 *VAR_9)
{
 const char *VAR_10, *VAR_11;
 const struct bnx2_mips_fw_file *VAR_12;
 const struct bnx2_rv2p_fw_file *VAR_13;
 int VAR_14;

 if (FUNC_0(VAR_9) == VAR_0) {
  VAR_10 = VAR_5;
  if ((FUNC_1(VAR_9) == VAR_1) ||
      (FUNC_1(VAR_9) == VAR_2))
   VAR_11 = VAR_8;
  else
   VAR_11 = VAR_7;
 } else {
  VAR_10 = VAR_4;
  VAR_11 = VAR_6;
 }

 VAR_14 = FUNC_6(&VAR_9->mips_firmware, VAR_10, &VAR_9->pdev->dev);
 if (VAR_14) {
  FUNC_4("Can't load firmware file \"%s\"\n", VAR_10);
  goto out;
 }

 VAR_14 = FUNC_6(&VAR_9->rv2p_firmware, VAR_11, &VAR_9->pdev->dev);
 if (VAR_14) {
  FUNC_4("Can't load firmware file \"%s\"\n", VAR_11);
  goto err_release_mips_firmware;
 }
 VAR_12 = (const struct bnx2_mips_fw_file *) VAR_9->mips_firmware->data;
 VAR_13 = (const struct bnx2_rv2p_fw_file *) VAR_9->rv2p_firmware->data;
 if (VAR_9->mips_firmware->size < sizeof(*VAR_12) ||
     FUNC_3(VAR_9->mips_firmware, &VAR_12->com) ||
     FUNC_3(VAR_9->mips_firmware, &VAR_12->cp) ||
     FUNC_3(VAR_9->mips_firmware, &VAR_12->rxp) ||
     FUNC_3(VAR_9->mips_firmware, &VAR_12->tpat) ||
     FUNC_3(VAR_9->mips_firmware, &VAR_12->txp)) {
  FUNC_4("Firmware file \"%s\" is invalid\n", VAR_10);
  VAR_14 = -VAR_3;
  goto err_release_firmware;
 }
 if (VAR_9->rv2p_firmware->size < sizeof(*VAR_13) ||
     FUNC_2(VAR_9->rv2p_firmware, &VAR_13->proc1.rv2p, 8, 1) ||
     FUNC_2(VAR_9->rv2p_firmware, &VAR_13->proc2.rv2p, 8, 1)) {
  FUNC_4("Firmware file \"%s\" is invalid\n", VAR_11);
  VAR_14 = -VAR_3;
  goto err_release_firmware;
 }
out:
 return VAR_14;

err_release_firmware:
 FUNC_5(VAR_9->rv2p_firmware);
 VAR_9->rv2p_firmware = ((void*)0);
err_release_mips_firmware:
 FUNC_5(VAR_9->mips_firmware);
 goto out;
}
