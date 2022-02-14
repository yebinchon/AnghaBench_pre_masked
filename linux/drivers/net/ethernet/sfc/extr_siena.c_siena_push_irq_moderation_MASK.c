
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_channel {int channel; struct efx_nic* efx; int irq_moderation_us; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int ,int ,int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_nic*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct efx_channel *VAR_5)
{
 struct efx_nic *VAR_6 = VAR_5->efx;
 efx_dword_t VAR_7;

 if (VAR_5->irq_moderation_us) {
  unsigned int VAR_8;

  VAR_8 = FUNC_1(VAR_6, VAR_5->irq_moderation_us);
  FUNC_0(VAR_7,
         VAR_2,
         VAR_1,
         VAR_3,
         VAR_8 - 1);
 } else {
  FUNC_0(VAR_7,
         VAR_2,
         VAR_0,
         VAR_3, 0);
 }
 FUNC_2(VAR_5->efx, &VAR_7, VAR_4,
          VAR_5->channel);
}
