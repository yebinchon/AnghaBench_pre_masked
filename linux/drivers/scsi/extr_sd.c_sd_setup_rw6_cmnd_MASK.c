
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int cmd_len; int* cmnd; } ;
typedef int sector_t ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,struct scsi_cmnd*,char*) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static blk_status_t FUNC_3(struct scsi_cmnd *VAR_5, bool VAR_6,
          sector_t VAR_7, unsigned int VAR_8,
          unsigned char VAR_9)
{

 if (FUNC_0(VAR_8 == 0))
  return VAR_0;

 if (FUNC_2(VAR_9 & 0x8)) {





  FUNC_1(VAR_2, VAR_5, "FUA write on READ/WRITE(6) drive\n");
  return VAR_0;
 }

 VAR_5->cmd_len = 6;
 VAR_5->cmnd[0] = VAR_6 ? VAR_4 : VAR_3;
 VAR_5->cmnd[1] = (VAR_7 >> 16) & 0x1f;
 VAR_5->cmnd[2] = (VAR_7 >> 8) & 0xff;
 VAR_5->cmnd[3] = VAR_7 & 0xff;
 VAR_5->cmnd[4] = VAR_8;
 VAR_5->cmnd[5] = 0;

 return VAR_1;
}
