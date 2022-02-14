
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xd_info {int xd_clock; } ;
struct rtsx_chip {struct xd_info xd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct rtsx_chip *VAR_3)
{
 struct xd_info *VAR_4 = &VAR_3->xd_card;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_5 != VAR_1)
  return VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_4->xd_clock);
 if (VAR_5 != VAR_1)
  return VAR_0;

 return VAR_1;
}
