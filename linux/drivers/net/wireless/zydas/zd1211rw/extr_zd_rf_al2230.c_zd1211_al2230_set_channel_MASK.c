
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zd_rf {int dummy; } ;
struct zd_ioreq16 {int member_1; int member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;
 int VAR_0 ;


 int ** VAR_1 ;
 int FUNC_1 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;
 struct zd_chip* FUNC_2 (struct zd_rf*) ;
 int FUNC_3 (struct zd_chip*,int const*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct zd_rf *VAR_2, u8 VAR_3)
{
 int VAR_4;
 const u32 *VAR_5 = VAR_1[VAR_3-1];
 struct zd_chip *VAR_6 = FUNC_2(VAR_2);
 static const struct zd_ioreq16 VAR_7[] = {
  { 129, 0x28 },
  { 128, 0x06 },
 };

 VAR_4 = FUNC_3(VAR_6, VAR_5, 3, VAR_0);
 if (VAR_4)
  return VAR_4;
 return FUNC_1(VAR_6, VAR_7, FUNC_0(VAR_7));
}
