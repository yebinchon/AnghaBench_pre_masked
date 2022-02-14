
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* power ) (struct wl1251*,int) ;} ;


 int FUNC_0 (struct wl1251*,int) ;

__attribute__((used)) static int FUNC_1(struct wl1251 *VAR_0)
{
 return VAR_0->if_ops->power(VAR_0, 1);
}
