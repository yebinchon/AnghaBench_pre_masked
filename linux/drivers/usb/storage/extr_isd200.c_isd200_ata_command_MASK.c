
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ata_cdb {int dummy; } ata_cdb ;
struct us_data {int * extra; } ;
struct scsi_cmnd {int result; } ;


 int VAR_0 ;
 int FUNC_0 (struct us_data*,struct scsi_cmnd*,union ata_cdb*) ;
 int FUNC_1 (struct scsi_cmnd*,struct us_data*,union ata_cdb*) ;
 int FUNC_2 (struct scsi_cmnd*,int) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (struct us_data*,char*) ;

__attribute__((used)) static void FUNC_6(struct scsi_cmnd *VAR_1, struct us_data *VAR_2)
{
 int VAR_3, VAR_4;
 union ata_cdb VAR_5;



 if (VAR_2->extra == ((void*)0)) {
  FUNC_5(VAR_2, "ERROR Driver not initialized\n");
  VAR_1->result = VAR_0 << 16;
  return;
 }

 FUNC_4(VAR_1, 0);

 VAR_4 = FUNC_3(VAR_1);
 VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_5);


 if (VAR_3)
  FUNC_0(VAR_2, VAR_1, &VAR_5);

 FUNC_2(VAR_1, VAR_4);
}
