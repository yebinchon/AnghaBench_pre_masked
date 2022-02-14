
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_info {int sd_lock_status; int sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_5)
{
 struct sd_info *VAR_6 = &VAR_5->sd_card;
 int VAR_7;
 u8 VAR_8[5];

 VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_6->sd_addr,
         VAR_1, VAR_8, 5);
 if (VAR_7 != VAR_4)
  return VAR_3;

 if (VAR_8[1] & 0x02)
  VAR_6->sd_lock_status |= VAR_0;
 else
  VAR_6->sd_lock_status &= ~VAR_0;

 FUNC_0(FUNC_1(VAR_5), "sd_card->sd_lock_status = 0x%x\n",
  VAR_6->sd_lock_status);

 if (VAR_8[1] & 0x01)
  return VAR_3;

 return VAR_4;
}
