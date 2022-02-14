
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int ctrl_vnic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_pf*,int ) ;
 int FUNC_2 (struct nfp_pf*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct nfp_pf *VAR_0)
{
 int VAR_1;

 if (!VAR_0->ctrl_vnic)
  return 0;
 VAR_1 = FUNC_2(VAR_0, VAR_0->ctrl_vnic, 0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0->ctrl_vnic);
 if (VAR_1)
  goto err_clean_ctrl;

 return 0;

err_clean_ctrl:
 FUNC_1(VAR_0, VAR_0->ctrl_vnic);
 return VAR_1;
}
