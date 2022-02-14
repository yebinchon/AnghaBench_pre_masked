
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int xmac_poll_required; } ;
struct ef4_nic {struct falcon_nic_data* nic_data; } ;


 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*,int) ;

__attribute__((used)) static int FUNC_6(struct ef4_nic *VAR_0)
{
 struct falcon_nic_data *VAR_1 = VAR_0->nic_data;

 FUNC_0(VAR_0);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);

 FUNC_2(VAR_0);

 VAR_1->xmac_poll_required = !FUNC_5(VAR_0, 5);
 FUNC_1(VAR_0);

 return 0;
}
