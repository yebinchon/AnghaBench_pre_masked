
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*,int *,int*) ;
 int FUNC_1 (struct broadsheetfb_par*,int,int ) ;
 int FUNC_2 (struct broadsheetfb_par*,int,int const*,size_t,int) ;

__attribute__((used)) static int FUNC_3(struct broadsheetfb_par *VAR_0,
      const u8 *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;
 u16 VAR_4 = 0;
 int VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_0, &VAR_4, &VAR_5);
 if (VAR_3)
  goto failout;

 VAR_3 = FUNC_2(VAR_0, 0x886, VAR_1, VAR_2, VAR_5);

failout:
 FUNC_1(VAR_0, 0x0204, VAR_4);
 return VAR_3;
}
