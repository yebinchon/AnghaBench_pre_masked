
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; int device; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;





inline int FUNC_1(struct scsi_cmnd *VAR_4)
{
 int VAR_5;

 switch (VAR_4->cmnd[0]) {
 case 135:
 case 131:
 case 134:
 case 130:
 case 132:
 case 128:
 case 133:
 case 129:
  VAR_5 = (FUNC_0(VAR_4->device)) ?
   VAR_2 : VAR_3;
  break;
 default:
  VAR_5 = (FUNC_0(VAR_4->device)) ?
   VAR_0 : VAR_1;
 }
 return VAR_5;
}
