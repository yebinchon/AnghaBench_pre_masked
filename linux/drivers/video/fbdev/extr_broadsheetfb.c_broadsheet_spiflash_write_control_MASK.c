
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct broadsheetfb_par {int dummy; } ;


 int FUNC_0 (struct broadsheetfb_par*,int) ;
 int FUNC_1 (struct broadsheetfb_par*,int,int) ;

__attribute__((used)) static int FUNC_2(struct broadsheetfb_par *VAR_0,
      int VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, 0x0208, 1);
 if (VAR_1)
  VAR_2 = FUNC_0(VAR_0, 0x06);
 else
  VAR_2 = FUNC_0(VAR_0, 0x04);

 FUNC_1(VAR_0, 0x0208, 0);
 return VAR_2;
}
