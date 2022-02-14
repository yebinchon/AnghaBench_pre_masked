
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_1, u32 VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, VAR_0, VAR_1->net_dev, "starting BIST type %u\n", VAR_2);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != 0)
  return VAR_3;

 return FUNC_0(VAR_1);
}
