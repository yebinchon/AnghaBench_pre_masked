
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath10k_fw_file {TYPE_3__* firmware; int firmware_len; int firmware_data; int htt_op_version; int wmi_op_version; } ;
struct TYPE_4__ {char* dir; } ;
struct TYPE_5__ {TYPE_1__ fw; } ;
struct ath10k {int dev; TYPE_2__ hw_params; } ;
typedef int filename ;
struct TYPE_6__ {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,int ,char*,char*,int) ;
 int FUNC_1 (struct ath10k*,char*,char*,int) ;
 int FUNC_2 (TYPE_3__**,char*,int ) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_4,
           struct ath10k_fw_file *VAR_5)
{
 char VAR_6[100];
 int VAR_7;

 FUNC_3(VAR_6, sizeof(VAR_6), "%s/%s",
   VAR_4->hw_params.fw.dir, VAR_2);


 VAR_7 = FUNC_2(&VAR_5->firmware, VAR_6, VAR_4->dev);
 FUNC_0(VAR_4, VAR_0, "testmode fw request '%s': %d\n",
     VAR_6, VAR_7);

 if (VAR_7) {
  FUNC_1(VAR_4, "failed to retrieve utf firmware '%s': %d\n",
       VAR_6, VAR_7);
  return VAR_7;
 }







 VAR_5->wmi_op_version = VAR_3;
 VAR_5->htt_op_version = VAR_1;
 VAR_5->firmware_data = VAR_5->firmware->data;
 VAR_5->firmware_len = VAR_5->firmware->size;

 return 0;
}
