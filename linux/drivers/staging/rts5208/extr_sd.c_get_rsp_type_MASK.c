
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline int FUNC_0(struct scsi_cmnd *VAR_7, u8 *VAR_8,
          int *VAR_9)
{
 if (!VAR_8 || !VAR_9)
  return VAR_5;

 switch (VAR_7->cmnd[10]) {
 case 0x03:
  *VAR_8 = VAR_0;
  *VAR_9 = 0;
  break;

 case 0x04:
  *VAR_8 = VAR_1;
  *VAR_9 = 6;
  break;

 case 0x05:
  *VAR_8 = VAR_2;
  *VAR_9 = 6;
  break;

 case 0x06:
  *VAR_8 = VAR_3;
  *VAR_9 = 17;
  break;

 case 0x07:
  *VAR_8 = VAR_4;
  *VAR_9 = 6;
  break;

 default:
  return VAR_5;
 }

 return VAR_6;
}
