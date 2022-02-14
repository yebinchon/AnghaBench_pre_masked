
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {scalar_t__ seq_mode; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int,int) ;

void FUNC_5(struct rtsx_chip *VAR_6)
{
 struct sd_info *VAR_7 = &VAR_6->sd_card;
 int VAR_8;

 if (VAR_7->seq_mode) {
  VAR_8 = FUNC_3(VAR_6);
  if (VAR_8 != VAR_4)
   return;

  VAR_8 = FUNC_1(VAR_6, VAR_5, 0,
          VAR_2, ((void*)0), 0);
  if (VAR_8 != VAR_4)
   FUNC_2(VAR_6, VAR_3);

  VAR_8 = FUNC_4(VAR_6, 0x08, 1, 1000);
  if (VAR_8 != VAR_4)
   FUNC_2(VAR_6, VAR_3);

  VAR_7->seq_mode = 0;

  FUNC_0(VAR_6, VAR_0, VAR_1, VAR_1);
 }
}
