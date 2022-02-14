
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dir; } ;
struct TYPE_6__ {TYPE_2__ fw; } ;
struct TYPE_4__ {int fw_file; } ;
struct ath10k {int fw_api; TYPE_3__ hw_params; TYPE_1__ normal_mode_fw; } ;
typedef int fw_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,char*,int *) ;
 int FUNC_1 (struct ath10k*,char*,int,int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int) ;
 int FUNC_3 (struct ath10k*,char*,int,int,int ,int) ;
 int FUNC_4 (struct ath10k*) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_3)
{
 int VAR_4, VAR_5;
 char VAR_6[100];


 FUNC_4(VAR_3);

 for (VAR_5 = VAR_1; VAR_5 >= VAR_2; VAR_5--) {
  VAR_3->fw_api = VAR_5;
  FUNC_2(VAR_3, VAR_0, "trying fw api %d\n",
      VAR_3->fw_api);

  FUNC_1(VAR_3, VAR_6, sizeof(VAR_6), VAR_3->fw_api);
  VAR_4 = FUNC_0(VAR_3, VAR_6,
             &VAR_3->normal_mode_fw.fw_file);
  if (!VAR_4)
   goto success;
 }



 FUNC_3(VAR_3, "Failed to find firmware-N.bin (N between %d and %d) from %s: %d",
     VAR_2, VAR_1, VAR_3->hw_params.fw.dir,
     VAR_4);

 return VAR_4;

success:
 FUNC_2(VAR_3, VAR_0, "using fw api %d\n", VAR_3->fw_api);

 return 0;
}
