
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct scsi_cmnd*,int const) ;

__attribute__((used)) static blk_status_t FUNC_3(struct scsi_cmnd *VAR_7, int VAR_8)
{
 switch (FUNC_0(VAR_8)) {
 case 130:





  if (FUNC_1(VAR_8) && (VAR_8 & ~0xff) == 0)
   return VAR_4;
  return VAR_0;
 case 128:
  return VAR_6;
 case 129:
  FUNC_2(VAR_7, 130);
  return VAR_5;
 case 131:
  FUNC_2(VAR_7, 130);
  return VAR_2;
 case 133:
  FUNC_2(VAR_7, 130);
  return VAR_3;
 case 132:
  FUNC_2(VAR_7, 130);
  return VAR_1;
 default:
  return VAR_0;
 }
}
