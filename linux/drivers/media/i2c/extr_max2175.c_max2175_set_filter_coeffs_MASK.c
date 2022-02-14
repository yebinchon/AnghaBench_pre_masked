
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct max2175 {int dummy; } ;


 int FUNC_0 (struct max2175*,int,int const) ;
 int FUNC_1 (struct max2175*,int,int,int ) ;
 int FUNC_2 (struct max2175*,int,int,int,int) ;
 int FUNC_3 (struct max2175*,char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct max2175 *VAR_0, u8 VAR_1,
          u8 VAR_2, const u16 *VAR_3)
{
 unsigned int VAR_4;
 u8 VAR_5, VAR_6 = 24;

 FUNC_3(VAR_0, "set_filter_coeffs: m_sel %d bank %d\n", VAR_1, VAR_2);
 FUNC_2(VAR_0, 114, 5, 4, VAR_1);

 if (VAR_1 == 2)
  VAR_6 = 12;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_5 = VAR_4 + VAR_2 * 24;
  FUNC_0(VAR_0, 115, VAR_3[VAR_4] >> 8);
  FUNC_0(VAR_0, 116, VAR_3[VAR_4]);
  FUNC_0(VAR_0, 117, VAR_5 | 1 << 7);
 }
 FUNC_1(VAR_0, 117, 7, 0);
}
