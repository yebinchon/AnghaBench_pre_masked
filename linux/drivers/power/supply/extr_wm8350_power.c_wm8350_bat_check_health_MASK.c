
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wm8350*) ;
 int FUNC_1 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_2(struct wm8350 *VAR_7)
{
 u16 VAR_8;

 if (FUNC_0(VAR_7) < 2850000)
  return VAR_3;

 VAR_8 = FUNC_1(VAR_7, VAR_4);
 if (VAR_8 & VAR_6)
  return VAR_2;

 if (VAR_8 & VAR_5)
  return VAR_0;

 return VAR_1;
}
