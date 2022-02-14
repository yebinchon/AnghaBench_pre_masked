
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int raw_csd; } ;
struct scsi_cmnd {int dummy; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_2 (struct rtsx_chip*,unsigned int) ;
 int FUNC_3 (int ,int ,struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;
 int FUNC_6 (struct rtsx_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_5, struct rtsx_chip *VAR_6)
{
 struct sd_info *VAR_7 = &VAR_6->sd_card;
 unsigned int VAR_8 = FUNC_0(VAR_5);

 if (!FUNC_1(VAR_6, VAR_8)) {
  FUNC_6(VAR_6, VAR_8, VAR_1);
  return VAR_3;
 }

 if (FUNC_2(VAR_6, VAR_8) != VAR_0) {
  FUNC_6(VAR_6, VAR_8, VAR_2);
  return VAR_3;
 }

 FUNC_5(VAR_5, 0);
 FUNC_3(VAR_7->raw_csd, FUNC_4(VAR_5), VAR_5);

 return VAR_4;
}
