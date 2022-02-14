
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct scsi_cmnd {int dummy; } ;
struct rtsx_chip {scalar_t__* card_bus_width; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_2 (struct rtsx_chip*,unsigned int) ;
 int FUNC_3 (scalar_t__*,int ,struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;
 int FUNC_6 (struct rtsx_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_6, struct rtsx_chip *VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_6);
 u8 VAR_9, VAR_10;

 if (!FUNC_1(VAR_7, VAR_8)) {
  FUNC_6(VAR_7, VAR_8, VAR_2);
  return VAR_4;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_8);
 if ((VAR_9 == VAR_1) || (VAR_9 == VAR_0)) {
  VAR_10 = VAR_7->card_bus_width[VAR_8];
 } else {
  FUNC_6(VAR_7, VAR_8, VAR_3);
  return VAR_4;
 }

 FUNC_5(VAR_6, 0);
 FUNC_3(&VAR_10, FUNC_4(VAR_6), VAR_6);

 return VAR_5;
}
