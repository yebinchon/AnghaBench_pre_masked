
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct efx_nic {int net_dev; } ;
struct efx_mcdi_iface {int state; } ;
typedef int const efx_dword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*,unsigned int,size_t,int const*,size_t,size_t*,int,scalar_t__*,int*) ;
 struct efx_mcdi_iface* FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,scalar_t__,int) ;
 int FUNC_4 (struct efx_mcdi_iface*) ;
 int FUNC_5 (struct efx_nic*,unsigned int,int const*,size_t) ;
 int FUNC_6 (struct efx_nic*,unsigned int,int const*,size_t) ;
 int FUNC_7 (struct efx_nic*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct efx_nic*,int ,int ,int,int ,char*,unsigned int,int) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct efx_nic *VAR_8, unsigned int VAR_9,
    const efx_dword_t *VAR_10, size_t VAR_11,
    efx_dword_t *VAR_12, size_t VAR_13,
    size_t *VAR_14, bool VAR_15, int *VAR_16)
{
 u32 VAR_17 = 0;
 int VAR_18;

 if (VAR_10 && VAR_11 && (VAR_10 == VAR_12)) {

  FUNC_0(1);
  return -VAR_1;
 }

 VAR_18 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_1(VAR_8, VAR_9, VAR_11, VAR_12, VAR_13,
      VAR_14, VAR_15, &VAR_17, VAR_16);

 if (VAR_17) {




  struct efx_mcdi_iface *VAR_19 = FUNC_2(VAR_8);

  FUNC_9(VAR_8, VAR_7, VAR_8->net_dev,
     "MCDI waiting for proxy auth %d\n",
     VAR_17);
  VAR_18 = FUNC_3(VAR_8, VAR_17, VAR_15);

  if (VAR_18 == 0) {
   FUNC_9(VAR_8, VAR_7, VAR_8->net_dev,
      "MCDI proxy retry %d\n", VAR_17);


   VAR_19->state = VAR_4;
   FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11);

   VAR_18 = FUNC_1(VAR_8, VAR_9, VAR_11,
        VAR_12, VAR_13, VAR_14,
        VAR_15, ((void*)0), VAR_16);
  } else {
   FUNC_8(VAR_8, VAR_7, VAR_8->net_dev, VAR_18 == -VAR_3, VAR_6,
           "MC command 0x%x failed after proxy auth rc=%d\n",
           VAR_9, VAR_18);

   if (VAR_18 == -VAR_0 || VAR_18 == -VAR_2)
    FUNC_7(VAR_8, VAR_5);
   FUNC_4(VAR_19);
  }
 }

 return VAR_18;
}
