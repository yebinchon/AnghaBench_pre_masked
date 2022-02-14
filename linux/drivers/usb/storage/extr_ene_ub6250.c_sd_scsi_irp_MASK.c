
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ extra; } ;
struct scsi_cmnd {int* cmnd; } ;
struct ene_ub6250_info {int SrbStatus; } ;







 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_1 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_2 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_3 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_4 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_5 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_6 (struct us_data*,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_7(struct us_data *VAR_4, struct scsi_cmnd *VAR_5)
{
 int VAR_6;
 struct ene_ub6250_info *VAR_7 = (struct ene_ub6250_info *)VAR_4->extra;

 switch (VAR_5->cmnd[0]) {
 case 129:
  VAR_6 = FUNC_5(VAR_4, VAR_5);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_4, VAR_5);
  break;
 case 134:
  VAR_6 = FUNC_0(VAR_4, VAR_5);
  break;
 case 133:
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  break;





 case 131:
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  break;
 case 132:
  VAR_6 = FUNC_3(VAR_4, VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_6(VAR_4, VAR_5);
  break;
 default:
  VAR_7->SrbStatus = VAR_0;
  VAR_6 = VAR_2;
  break;
 }
 if (VAR_6 == VAR_3)
  VAR_7->SrbStatus = VAR_1;
 return VAR_6;
}
