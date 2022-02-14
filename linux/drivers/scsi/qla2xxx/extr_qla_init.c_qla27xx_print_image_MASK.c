
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct qla27xx_image_status {int signature; int checksum; int bitmap; int ver_minor; int ver_major; int generation; int image_status_mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,char*,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct scsi_qla_host *VAR_1, char *VAR_2,
    struct qla27xx_image_status *VAR_3)
{
 FUNC_2(VAR_0, VAR_1, 0x018b,
     "%s %s: mask=%#02x gen=%#04x ver=%u.%u map=%#01x sum=%#08x sig=%#08x\n",
     VAR_2, "status",
     VAR_3->image_status_mask,
     FUNC_0(VAR_3->generation),
     VAR_3->ver_major,
     VAR_3->ver_minor,
     VAR_3->bitmap,
     FUNC_1(VAR_3->checksum),
     FUNC_1(VAR_3->signature));
}
