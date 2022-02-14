
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {int mc_handle; } ;
struct dpaa2_eth_priv {int mc_io; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_device*) ;

__attribute__((used)) static void FUNC_3(struct dpaa2_eth_priv *VAR_0,
         struct fsl_mc_device *VAR_1)
{
 FUNC_1(VAR_0->mc_io, 0, VAR_1->mc_handle);
 FUNC_0(VAR_0->mc_io, 0, VAR_1->mc_handle);
 FUNC_2(VAR_1);
}
