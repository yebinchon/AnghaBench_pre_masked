
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int app; scalar_t__ num_vfs; int ctrl_vnic; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_pf*) ;
 int FUNC_4 (struct nfp_pf*) ;

__attribute__((used)) static int FUNC_5(struct nfp_pf *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->app, VAR_0->ctrl_vnic);
 if (VAR_1)
  goto err_ctrl_stop;

 if (VAR_0->num_vfs) {
  VAR_1 = FUNC_0(VAR_0->app, VAR_0->num_vfs);
  if (VAR_1)
   goto err_app_stop;
 }

 return 0;

err_app_stop:
 FUNC_2(VAR_0->app);
err_ctrl_stop:
 FUNC_4(VAR_0);
 return VAR_1;
}
