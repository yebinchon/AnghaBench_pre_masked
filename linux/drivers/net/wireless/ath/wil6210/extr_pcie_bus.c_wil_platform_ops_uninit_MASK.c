
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* uninit ) (int ) ;} ;
struct wil6210_priv {TYPE_1__ platform_ops; int platform_handle; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_0)
{
 if (VAR_0->platform_ops.uninit)
  VAR_0->platform_ops.uninit(VAR_0->platform_handle);
 FUNC_0(&VAR_0->platform_ops, 0, sizeof(VAR_0->platform_ops));
}
