
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_chip*,int ,int*) ;
 int FUNC_1 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct rtsx_chip *VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (!(VAR_7 & VAR_2)) {
  FUNC_1(VAR_5, VAR_1);
  return VAR_3;
 }

 return VAR_4;
}
