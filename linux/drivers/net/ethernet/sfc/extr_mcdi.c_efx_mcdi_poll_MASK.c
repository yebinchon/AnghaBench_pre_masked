
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_mcdi_iface {int resprc; int iface_lock; scalar_t__ resp_data_len; scalar_t__ resp_hdr_len; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 unsigned long VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct efx_nic *VAR_4)
{
 struct efx_mcdi_iface *VAR_5 = FUNC_0(VAR_4);
 unsigned long VAR_6, VAR_7;
 unsigned int VAR_8;
 int VAR_9;


 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9) {
  FUNC_4(&VAR_5->iface_lock);
  VAR_5->resprc = VAR_9;
  VAR_5->resp_hdr_len = 0;
  VAR_5->resp_data_len = 0;
  FUNC_5(&VAR_5->iface_lock);
  return 0;
 }





 VAR_8 = VAR_2;
 VAR_7 = VAR_3 + VAR_1;

 while (1) {
  if (VAR_8 != 0) {
   --VAR_8;
   FUNC_7(1);
  } else {
   FUNC_3(1);
  }

  VAR_6 = VAR_3;

  if (FUNC_1(VAR_4))
   break;

  if (FUNC_6(VAR_6, VAR_7))
   return -VAR_0;
 }


 return 0;
}
