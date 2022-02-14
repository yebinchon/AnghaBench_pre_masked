
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_2, u16 VAR_3, u16 VAR_4,
       u16 VAR_5, u8 VAR_6)
{
 int VAR_7;

 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
          0, VAR_6);
  if (VAR_7 != VAR_1)
   return VAR_0;
 }

 return VAR_1;
}
