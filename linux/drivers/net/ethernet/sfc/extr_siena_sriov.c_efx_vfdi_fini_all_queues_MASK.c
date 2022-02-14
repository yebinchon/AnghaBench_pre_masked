
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {unsigned int index; scalar_t__ evq0_count; int buftbl_base; int rxq_retry_count; int rxq_retry_mask; int flush_waitq; scalar_t__ txq_count; scalar_t__ rxq_count; int rxq_mask; int txq_mask; struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int) ;
 int VAR_11 ;
 int FUNC_5 (unsigned int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct efx_nic*,int ,int ,int ,int *,int ,int *) ;
 int FUNC_10 (struct efx_nic*,int ,int *,unsigned int) ;
 unsigned int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct siena_vf*) ;
 int FUNC_13 (struct siena_vf*) ;
 int FUNC_14 (struct efx_nic*,int *,int ) ;
 int FUNC_15 (struct efx_nic*,int *,int ,unsigned int) ;
 int VAR_16 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct efx_nic*) ;
 int FUNC_19 (struct efx_nic*) ;
 scalar_t__ FUNC_20 (unsigned int,int ) ;
 scalar_t__ FUNC_21 (unsigned int,int ) ;
 unsigned int FUNC_22 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_23(struct siena_vf *VAR_17)
{
 struct efx_nic *VAR_18 = VAR_17->efx;
 efx_oword_t VAR_19;
 unsigned VAR_20 = FUNC_11(VAR_18);
 unsigned VAR_21 = VAR_1 + VAR_17->index * FUNC_11(VAR_18);
 unsigned VAR_22 = VAR_10;
 unsigned VAR_23, VAR_24;
 FUNC_3(VAR_16, VAR_12);
 int VAR_25;

 FUNC_0(VAR_15 >
       VAR_13);

 FUNC_16();
 FUNC_19(VAR_18);
 FUNC_17();


 VAR_24 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_20; ++VAR_23) {
  if (FUNC_21(VAR_23, VAR_17->txq_mask)) {
   FUNC_1(VAR_19,
          VAR_4, 1,
          VAR_3,
          VAR_21 + VAR_23);
   FUNC_14(VAR_18, &VAR_19, VAR_5);
  }
  if (FUNC_21(VAR_23, VAR_17->rxq_mask)) {
   FUNC_4(
    VAR_16, VAR_2,
    VAR_24, VAR_21 + VAR_23);
   VAR_24++;
  }
 }

 FUNC_8(&VAR_17->rxq_retry_count, 0);
 while (VAR_22 && (VAR_17->rxq_count || VAR_17->txq_count)) {
  VAR_25 = FUNC_9(VAR_18, VAR_11, VAR_16,
      FUNC_5(VAR_24),
      ((void*)0), 0, ((void*)0));
  FUNC_6(VAR_25 < 0);

  VAR_22 = FUNC_22(VAR_17->flush_waitq,
          FUNC_13(VAR_17),
          VAR_22);
  VAR_24 = 0;
  for (VAR_23 = 0; VAR_23 < VAR_20; ++VAR_23) {
   if (FUNC_20(VAR_23, VAR_17->rxq_retry_mask)) {
    FUNC_7(&VAR_17->rxq_retry_count);
    FUNC_4(
     VAR_16, VAR_2,
     VAR_24, VAR_21 + VAR_23);
    VAR_24++;
   }
  }
 }

 FUNC_16();
 FUNC_18(VAR_18);
 FUNC_17();


 FUNC_2(VAR_19);
 for (VAR_23 = 0; VAR_23 < VAR_20; ++VAR_23) {
  FUNC_15(VAR_18, &VAR_19, VAR_7,
     VAR_21 + VAR_23);
  FUNC_15(VAR_18, &VAR_19, VAR_9,
     VAR_21 + VAR_23);
  FUNC_15(VAR_18, &VAR_19, VAR_6,
     VAR_21 + VAR_23);
  FUNC_15(VAR_18, &VAR_19, VAR_8,
     VAR_21 + VAR_23);
 }
 FUNC_10(VAR_18, VAR_17->buftbl_base, ((void*)0),
        VAR_0 * FUNC_11(VAR_18));
 FUNC_12(VAR_17);

 VAR_17->evq0_count = 0;

 return VAR_22 ? 0 : VAR_14;
}
