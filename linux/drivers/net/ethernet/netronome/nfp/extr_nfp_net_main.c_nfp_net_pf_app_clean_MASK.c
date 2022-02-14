
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int * app; int lock; int ctrl_vnic_bar; scalar_t__ ctrl_vnic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nfp_pf*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct nfp_pf *VAR_0)
{
 if (VAR_0->ctrl_vnic) {
  FUNC_5(VAR_0, VAR_0->ctrl_vnic);
  FUNC_4(VAR_0->ctrl_vnic_bar);
 }

 FUNC_0(&VAR_0->lock);
 FUNC_2(VAR_0->app);
 FUNC_1(&VAR_0->lock);

 FUNC_3(VAR_0->app);
 VAR_0->app = ((void*)0);
}
