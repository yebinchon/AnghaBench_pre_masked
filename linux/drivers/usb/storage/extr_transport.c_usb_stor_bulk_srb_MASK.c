
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;
struct scsi_cmnd {int dummy; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct us_data*,unsigned int,int ,int ,scalar_t__,unsigned int*) ;

int FUNC_5(struct us_data* VAR_0, unsigned int VAR_1,
        struct scsi_cmnd* VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_2),
          FUNC_2(VAR_2), FUNC_0(VAR_2),
          &VAR_3);

 FUNC_1(VAR_2, FUNC_0(VAR_2) - VAR_3);
 return VAR_4;
}
