
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;
struct ef4_channel {int channel; int irq_moderation_us; struct ef4_nic* efx; } ;
typedef int ef4_dword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_2 (struct ef4_nic*,int ) ;
 int FUNC_3 (struct ef4_nic*,int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct ef4_channel *VAR_6)
{
 ef4_dword_t VAR_7;
 struct ef4_nic *VAR_8 = VAR_6->efx;


 if (VAR_6->irq_moderation_us) {
  unsigned int VAR_9;

  VAR_9 = FUNC_2(VAR_8, VAR_6->irq_moderation_us);
  FUNC_1(VAR_7,
         VAR_2,
         VAR_1,
         VAR_3,
         VAR_9 - 1);
 } else {
  FUNC_1(VAR_7,
         VAR_2,
         VAR_0,
         VAR_3, 0);
 }
 FUNC_0(VAR_4 != VAR_5);
 FUNC_3(VAR_8, &VAR_7, VAR_5,
          VAR_6->channel);
}
