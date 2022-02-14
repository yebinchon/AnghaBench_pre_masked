
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; int cmd_len; } ;
typedef unsigned int sector_t ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (unsigned int,unsigned char*) ;
 int FUNC_3 (unsigned int,unsigned char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static blk_status_t FUNC_5(struct scsi_cmnd *VAR_8, bool VAR_9,
           sector_t VAR_10, unsigned int VAR_11,
           unsigned char VAR_12)
{
 VAR_8->cmnd = FUNC_0(VAR_7, VAR_2);
 if (FUNC_4(VAR_8->cmnd == ((void*)0)))
  return VAR_1;

 VAR_8->cmd_len = VAR_4;
 FUNC_1(VAR_8->cmnd, 0, VAR_8->cmd_len);

 VAR_8->cmnd[0] = VAR_5;
 VAR_8->cmnd[7] = 0x18;
 VAR_8->cmnd[9] = VAR_9 ? VAR_6 : VAR_3;
 VAR_8->cmnd[10] = VAR_12;
 FUNC_3(VAR_10, &VAR_8->cmnd[12]);
 FUNC_2(VAR_10, &VAR_8->cmnd[20]);
 FUNC_2(VAR_11, &VAR_8->cmnd[28]);

 return VAR_0;
}
