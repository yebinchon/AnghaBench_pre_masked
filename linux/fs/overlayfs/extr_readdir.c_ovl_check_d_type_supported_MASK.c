
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {int actor; } ;
struct ovl_readdir_data {int d_type_supported; TYPE_1__ ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct path*,struct ovl_readdir_data*) ;

int FUNC_1(struct path *VAR_1)
{
 int VAR_2;
 struct ovl_readdir_data VAR_3 = {
  .ctx.actor = VAR_0,
  .d_type_supported = 0,
 };

 VAR_2 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_2)
  return VAR_2;

 return VAR_3.d_type_supported;
}
