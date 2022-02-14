
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_channel {int eventq_read_ptr; int eventq_mask; int channel; struct efx_nic* efx; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct efx_nic*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct efx_channel *VAR_10)
{
 struct efx_nic *VAR_11 = VAR_10->efx;
 efx_dword_t VAR_12;

 if (FUNC_1(VAR_11)) {
  FUNC_0(VAR_3 <
        (1 << VAR_6));
  FUNC_0(VAR_2 >
        (1 << 2 * VAR_6));

  FUNC_3(VAR_12, VAR_5,
         VAR_0,
         VAR_4,
         (VAR_10->eventq_read_ptr &
          VAR_10->eventq_mask) >>
         VAR_6);
  FUNC_4(VAR_11, &VAR_12, VAR_8,
    VAR_10->channel);
  FUNC_3(VAR_12, VAR_5,
         VAR_1,
         VAR_4,
         VAR_10->eventq_read_ptr &
         ((1 << VAR_6) - 1));
  FUNC_4(VAR_11, &VAR_12, VAR_8,
    VAR_10->channel);
 } else {
  FUNC_2(VAR_12, VAR_7,
         VAR_10->eventq_read_ptr &
         VAR_10->eventq_mask);
  FUNC_4(VAR_11, &VAR_12, VAR_9, VAR_10->channel);
 }
}
