
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int cmd_len; unsigned char* cmnd; } ;
typedef int sector_t ;
typedef int blk_status_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (unsigned int,unsigned char*) ;
 int FUNC_1 (int ,unsigned char*) ;

__attribute__((used)) static blk_status_t FUNC_2(struct scsi_cmnd *VAR_3, bool VAR_4,
           sector_t VAR_5, unsigned int VAR_6,
           unsigned char VAR_7)
{
 VAR_3->cmd_len = 10;
 VAR_3->cmnd[0] = VAR_4 ? VAR_2 : VAR_1;
 VAR_3->cmnd[1] = VAR_7;
 VAR_3->cmnd[6] = 0;
 VAR_3->cmnd[9] = 0;
 FUNC_1(VAR_5, &VAR_3->cmnd[2]);
 FUNC_0(VAR_6, &VAR_3->cmnd[7]);

 return VAR_0;
}
