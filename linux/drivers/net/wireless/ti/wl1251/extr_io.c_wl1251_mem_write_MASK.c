
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* write ) (struct wl1251*,int,void*,size_t) ;} ;


 int FUNC_0 (struct wl1251*,int,void*,size_t) ;
 int FUNC_1 (struct wl1251*,int) ;

void FUNC_2(struct wl1251 *VAR_0, int VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);

 VAR_0->if_ops->write(VAR_0, VAR_4, VAR_2, VAR_3);
}
