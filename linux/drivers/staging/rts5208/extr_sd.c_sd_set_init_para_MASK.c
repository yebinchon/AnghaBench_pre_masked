
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_clock; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_2)
{
 struct sd_info *VAR_3 = &VAR_2->sd_card;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 != VAR_1)
  return VAR_0;

 FUNC_0(VAR_2);

 VAR_4 = FUNC_2(VAR_2, VAR_3->sd_clock);
 if (VAR_4 != VAR_1)
  return VAR_0;

 return VAR_1;
}
