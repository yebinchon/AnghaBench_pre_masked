
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int net_dev; } ;
struct efx_mcdi_iface {unsigned int seqno; int resp_hdr_len; unsigned int resp_data_len; int iface_lock; int resprc; scalar_t__ credits; } ;
struct TYPE_2__ {int mcdi_max_ver; } ;


 unsigned int VAR_0 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_mcdi_iface*,int) ;
 int FUNC_2 (struct efx_mcdi_iface*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct efx_nic*) ;
 int VAR_1 ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct efx_nic *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, unsigned int VAR_5)
{
 struct efx_mcdi_iface *VAR_6 = FUNC_0(VAR_2);
 bool VAR_7 = 0;

 FUNC_6(&VAR_6->iface_lock);

 if ((VAR_3 ^ VAR_6->seqno) & VAR_0) {
  if (VAR_6->credits)

   --VAR_6->credits;
  else
   FUNC_5(VAR_2, VAR_1, VAR_2->net_dev,
      "MC response mismatch tx seq 0x%x rx "
      "seq 0x%x\n", VAR_3, VAR_6->seqno);
 } else {
  if (VAR_2->type->mcdi_max_ver >= 2) {

   FUNC_4(VAR_2);
  } else {
   VAR_6->resprc = FUNC_3(VAR_5);
   VAR_6->resp_hdr_len = 4;
   VAR_6->resp_data_len = VAR_4;
  }

  VAR_7 = 1;
 }

 FUNC_7(&VAR_6->iface_lock);

 if (VAR_7) {
  if (!FUNC_1(VAR_6, 0))
   (void) FUNC_2(VAR_6);







 }
}
