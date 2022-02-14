
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct dev_db_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_qla_host*,struct dev_db_entry*,int *) ;
 int FUNC_1 (struct scsi_qla_host*,struct dev_db_entry*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_qla_host *VAR_4,
    struct dev_db_entry *VAR_5,
    uint16_t VAR_6)
{
 int VAR_7 = VAR_1;

 VAR_7 = FUNC_0(VAR_4, VAR_5, ((void*)0));
 if (VAR_7 != VAR_2)
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_3,
           VAR_6);
 else
  VAR_7 = -VAR_0;

 return VAR_7;
}
