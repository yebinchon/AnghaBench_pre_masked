
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {struct hfa384x* priv; } ;
struct hfa384x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfa384x*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wlandevice *VAR_2)
{
 struct hfa384x *VAR_3 = VAR_2->priv;


 return FUNC_0(VAR_3, VAR_0,
     VAR_1);
}
