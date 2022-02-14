
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hfa384x_usbin {int type; } ;
typedef int u16 ;
struct wlandevice {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wlandevice*,int ) ;
 int FUNC_3 (struct wlandevice*,int ) ;

__attribute__((used)) static void FUNC_4(struct wlandevice *VAR_0,
      union hfa384x_usbin *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_1(VAR_1->type);


 if (FUNC_0(VAR_2))
  FUNC_3(VAR_0, VAR_2);
 else
  FUNC_2(VAR_0, VAR_2);
}
