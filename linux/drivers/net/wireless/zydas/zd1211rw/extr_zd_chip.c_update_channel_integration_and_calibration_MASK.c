
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_ioreq16 {int member_1; int const member_0; } ;
struct zd_chip {int rf; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;

 int FUNC_1 (struct zd_chip*,int ) ;
 int FUNC_2 (struct zd_chip*,int ) ;
 int FUNC_3 (struct zd_chip*,int ) ;
 scalar_t__ FUNC_4 (struct zd_chip*) ;
 int FUNC_5 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct zd_chip *VAR_0,
                                               u8 VAR_1)
{
 int VAR_2;

 if (!FUNC_6(&VAR_0->rf))
  return 0;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 if (FUNC_4(VAR_0)) {
  static const struct zd_ioreq16 VAR_3[] = {
   { 128, 0x28 },
   {},
   { 128, 0x2a },
  };

  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_5(VAR_0, VAR_3, FUNC_0(VAR_3));
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
