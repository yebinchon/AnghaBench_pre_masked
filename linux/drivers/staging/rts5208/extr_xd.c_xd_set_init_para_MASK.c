
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xd_info {int xd_clock; } ;
struct rtsx_chip {scalar_t__ asic_code; struct xd_info xd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_3)
{
 struct xd_info *VAR_4 = &VAR_3->xd_card;
 int VAR_5;

 if (VAR_3->asic_code)
  VAR_4->xd_clock = 47;
 else
  VAR_4->xd_clock = VAR_0;

 VAR_5 = FUNC_0(VAR_3, VAR_4->xd_clock);
 if (VAR_5 != VAR_2)
  return VAR_1;

 return VAR_2;
}
