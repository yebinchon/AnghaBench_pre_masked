
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct scsi_cmnd {int dummy; } ;
struct ms_info {int dummy; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 scalar_t__ FUNC_0 (struct ms_info*) ;
 int FUNC_1 (struct scsi_cmnd*,struct rtsx_chip*,int ,int ) ;
 int FUNC_2 (struct scsi_cmnd*,struct rtsx_chip*,int ,int ) ;

int FUNC_3(struct scsi_cmnd *VAR_0, struct rtsx_chip *VAR_1,
   u32 VAR_2, u16 VAR_3)
{
 struct ms_info *VAR_4 = &VAR_1->ms_card;
 int VAR_5;

 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2,
            VAR_3);
 else
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2,
         VAR_3);

 return VAR_5;
}
