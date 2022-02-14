
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int sense_buffer; } ;
struct myrb_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct scsi_cmnd*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct myrb_hba *VAR_2,
  struct scsi_cmnd *VAR_3)
{
 FUNC_0(0, VAR_3->sense_buffer,
    VAR_0, 0, 0);
 FUNC_1(VAR_3, VAR_3->sense_buffer,
     VAR_1);
}
