
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wm8350*,int ,int ) ;
 int FUNC_3 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_4(struct wm8350 *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_4;
 u16 VAR_8;

 VAR_6 = FUNC_2(VAR_5, VAR_3,
    VAR_1);
 if (VAR_6 < 0)
  return VAR_6;


 do {
  VAR_8 = FUNC_3(VAR_5, VAR_3);
  FUNC_1(FUNC_0(1));
 } while (VAR_7-- && VAR_8 & VAR_2);

 if (VAR_8 & VAR_2)
  return -VAR_0;

 return 0;
}
