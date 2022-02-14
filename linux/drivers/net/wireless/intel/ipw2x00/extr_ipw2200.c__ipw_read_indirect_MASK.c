
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipw_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (struct ipw_priv*,scalar_t__) ;
 int FUNC_3 (struct ipw_priv*,int ,int) ;
 int FUNC_4 (struct ipw_priv*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_5, u32 VAR_6, u8 * VAR_7,
          int VAR_8)
{
 u32 VAR_9 = VAR_6 & VAR_3;
 u32 VAR_10 = VAR_6 - VAR_9;
 u32 VAR_11;

 FUNC_0("addr = %i, buf = %p, num = %i\n", VAR_6, VAR_7, VAR_8);

 if (VAR_8 <= 0) {
  return;
 }


 if (FUNC_5(VAR_10)) {
  FUNC_3(VAR_5, VAR_2, VAR_9);

  for (VAR_11 = VAR_10; ((VAR_11 < 4) && (VAR_8 > 0)); VAR_11++, VAR_8--)
   *VAR_7++ = FUNC_2(VAR_5, VAR_4 + VAR_11);
  VAR_9 += 4;
 }


 FUNC_3(VAR_5, VAR_0, VAR_9);
 for (; VAR_8 >= 4; VAR_7 += 4, VAR_9 += 4, VAR_8 -= 4)
  *(u32 *) VAR_7 = FUNC_1(VAR_5, VAR_1);


 if (FUNC_5(VAR_8)) {
  FUNC_3(VAR_5, VAR_2, VAR_9);
  for (VAR_11 = 0; VAR_8 > 0; VAR_11++, VAR_8--)
   *VAR_7++ = FUNC_4(VAR_5, VAR_4 + VAR_11);
 }
}
