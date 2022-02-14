
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app {struct nfp_abm* priv; } ;
struct nfp_abm {int eswitch_mode; } ;
typedef enum devlink_eswitch_mode { ____Placeholder_devlink_eswitch_mode } devlink_eswitch_mode ;



__attribute__((used)) static enum devlink_eswitch_mode FUNC_0(struct nfp_app *VAR_0)
{
 struct nfp_abm *VAR_1 = VAR_0->priv;

 return VAR_1->eswitch_mode;
}
