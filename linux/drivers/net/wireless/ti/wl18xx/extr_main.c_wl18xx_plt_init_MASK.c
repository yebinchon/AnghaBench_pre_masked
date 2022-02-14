
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {scalar_t__ plt_mode; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* boot ) (struct wl1271*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1271*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wl1271*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_4)
{
 int VAR_5;


 if (VAR_4->plt_mode == VAR_1) {
  FUNC_1("wl18xx_plt_init: PLT FEM_DETECT not supported");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4->ops->boot(VAR_4);
}
