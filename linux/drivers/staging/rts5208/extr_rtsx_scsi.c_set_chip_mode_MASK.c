
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scsi_cmnd {scalar_t__* cmnd; } ;
struct rtsx_chip {int phy_debug_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtsx_chip*,int) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int*) ;
 int FUNC_5 (struct rtsx_chip*,int,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_5, struct rtsx_chip *VAR_6)
{
 int VAR_7;
 int VAR_8;
 u16 VAR_9;

 if (!FUNC_0(VAR_6, 0x5208)) {
  FUNC_7(VAR_6, FUNC_1(VAR_5),
          VAR_1);
  return VAR_3;
 }

 VAR_7 = (int)(VAR_5->cmnd[3]);

 if (VAR_7) {
  VAR_6->phy_debug_mode = 1;
  VAR_8 = FUNC_6(VAR_6, VAR_0, 0x77, 0);
  if (VAR_8 != VAR_2)
   return VAR_3;

  FUNC_2(VAR_6);

  VAR_8 = FUNC_4(VAR_6, 0x1C, &VAR_9);
  if (VAR_8 != VAR_2)
   return VAR_3;

  VAR_9 |= 0x0001;
  VAR_8 = FUNC_5(VAR_6, 0x1C, VAR_9);
  if (VAR_8 != VAR_2)
   return VAR_3;
 } else {
  VAR_6->phy_debug_mode = 0;
  VAR_8 = FUNC_6(VAR_6, VAR_0, 0x77, 0x77);
  if (VAR_8 != VAR_2)
   return VAR_3;

  FUNC_3(VAR_6);

  VAR_8 = FUNC_4(VAR_6, 0x1C, &VAR_9);
  if (VAR_8 != VAR_2)
   return VAR_3;

  VAR_9 &= 0xFFFE;
  VAR_8 = FUNC_5(VAR_6, 0x1C, VAR_9);
  if (VAR_8 != VAR_2)
   return VAR_3;
 }

 return VAR_4;
}
