
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_ioreq16 {int member_1; int member_0; } ;
typedef struct zd_ioreq16 u32 ;
struct zd_rf {int dummy; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;



 struct zd_ioreq16** VAR_0 ;
 struct zd_ioreq16 const* VAR_1 ;
 struct zd_ioreq16 const* VAR_2 ;
 int FUNC_1 (struct zd_chip*,int,int const) ;
 int FUNC_2 (struct zd_chip*,struct zd_ioreq16 const*,int) ;
 struct zd_chip* FUNC_3 (struct zd_rf*) ;
 int FUNC_4 (struct zd_chip*,int) ;
 int FUNC_5 (struct zd_chip*,struct zd_ioreq16 const*,int) ;

__attribute__((used)) static int FUNC_6(struct zd_rf *VAR_3, u8 VAR_4)
{
 int VAR_5;
 const u32 *VAR_6 = VAR_0[VAR_4-1];
 struct zd_chip *VAR_7 = FUNC_3(VAR_3);

 static const struct zd_ioreq16 VAR_8[] = {

  { 128, 0x3f },
  { 130, 0x06 }, { 129, 0x08 },
 };

 VAR_5 = FUNC_1(VAR_7, 0x57, 129);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_7, 0x2f, 128);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_7, VAR_2, FUNC_0(VAR_2));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_7, 0x3c9000);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_4(VAR_7, 0xf15d58);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_7, VAR_1, FUNC_0(VAR_1));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_7, VAR_6, 2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_7, 0x3c9000);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_7, VAR_8, FUNC_0(VAR_8));
}
