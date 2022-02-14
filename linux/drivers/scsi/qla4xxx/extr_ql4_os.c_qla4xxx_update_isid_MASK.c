
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_qla_host {int dummy; } ;
struct list_head {int dummy; } ;
struct dev_db_entry {int* isid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct list_head*,int*) ;

__attribute__((used)) static int FUNC_1(struct scsi_qla_host *VAR_2,
          struct list_head *VAR_3,
          struct dev_db_entry *VAR_4)
{
 uint8_t VAR_5, VAR_6;

 VAR_5 = VAR_4->isid[1] & 0x1f;
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_4->isid[1] = (VAR_5 | (VAR_6 << 5));
  if (FUNC_0(VAR_3, VAR_4->isid))
   break;
 }

 if (!FUNC_0(VAR_3, VAR_4->isid))
  return VAR_0;

 return VAR_1;
}
