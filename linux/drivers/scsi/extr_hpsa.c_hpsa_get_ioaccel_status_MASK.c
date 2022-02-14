
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hpsa_scsi_dev_t {int offload_config; int offload_to_be_enabled; scalar_t__ offload_enabled; } ;
struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ctlr_info*,unsigned char*,struct hpsa_scsi_dev_t*) ;
 int FUNC_1 (struct ctlr_info*,unsigned char*,int,unsigned char*,int) ;
 int FUNC_2 (struct ctlr_info*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct ctlr_info *VAR_6,
 unsigned char *VAR_7, struct hpsa_scsi_dev_t *VAR_8)
{
 int VAR_9;
 unsigned char *VAR_10;
 u8 VAR_11;

 VAR_8->offload_config = 0;
 VAR_8->offload_enabled = 0;
 VAR_8->offload_to_be_enabled = 0;

 VAR_10 = FUNC_4(64, VAR_0);
 if (!VAR_10)
  return;
 if (!FUNC_2(VAR_6, VAR_7, VAR_1))
  goto out;
 VAR_9 = FUNC_1(VAR_6, VAR_7,
   VAR_5 | VAR_1, VAR_10, 64);
 if (VAR_9 != 0)
  goto out;




 VAR_11 = VAR_10[4];
 VAR_8->offload_config =
  !!(VAR_11 & 0x01);
 if (VAR_8->offload_config) {
  VAR_8->offload_to_be_enabled =
   !!(VAR_11 & 0x02);
  if (FUNC_0(VAR_6, VAR_7, VAR_8))
   VAR_8->offload_to_be_enabled = 0;
 }

out:
 FUNC_3(VAR_10);
 return;
}
