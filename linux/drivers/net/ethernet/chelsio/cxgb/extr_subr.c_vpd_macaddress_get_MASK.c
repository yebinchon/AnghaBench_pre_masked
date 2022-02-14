
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct chelsio_vpd_t {scalar_t__* mac_base_address; } ;
typedef int adapter_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int *,struct chelsio_vpd_t*) ;

__attribute__((used)) static int FUNC_2(adapter_t *VAR_0, int VAR_1, u8 VAR_2[])
{
 struct chelsio_vpd_t VAR_3;

 if (FUNC_1(VAR_0, &VAR_3))
  return 1;
 FUNC_0(VAR_2, VAR_3.mac_base_address, 5);
 VAR_2[5] = VAR_3.mac_base_address[5] + VAR_1;
 return 0;
}
