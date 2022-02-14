
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ host_page_num_fn; scalar_t__ smem_page_start; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; int port1_mode; int port0_mode; int asic_mode; int asic_gen; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct bfa_ioc*) ;
 scalar_t__ FUNC_8 (struct bfa_ioc*,scalar_t__) ;
 int FUNC_9 (struct bfa_ioc*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static enum bfa_status
FUNC_12(struct bfa_ioc *VAR_9, u32 VAR_10,
      u32 VAR_11)
{
 u32 *VAR_12;
 u32 VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19[VAR_1];
 enum bfa_status VAR_20;

 if (VAR_11 == VAR_5 &&
     VAR_10 == VAR_6) {
  VAR_18 = VAR_2/sizeof(u32);

  VAR_20 = FUNC_9(VAR_9,
   FUNC_0(VAR_15), VAR_19);
  if (VAR_20 != VAR_0)
   return VAR_20;

  VAR_12 = VAR_19;
 } else {
  VAR_18 = FUNC_6(FUNC_7(VAR_9));
  VAR_12 = FUNC_5(FUNC_7(VAR_9),
     FUNC_0(VAR_15));
 }

 VAR_13 = FUNC_8(VAR_9, VAR_14);

 FUNC_11(VAR_13, VAR_9->ioc_regs.host_page_num_fn);

 for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
  if (FUNC_1(VAR_16) != VAR_15) {
   VAR_15 = FUNC_1(VAR_16);
   if (VAR_11 == VAR_5 &&
       VAR_10 == VAR_6) {
    VAR_20 = FUNC_9(VAR_9,
     FUNC_0(VAR_15),
     VAR_19);
    if (VAR_20 != VAR_0)
     return VAR_20;

    VAR_12 = VAR_19;
   } else {
    VAR_12 = FUNC_5(
     FUNC_7(VAR_9),
     FUNC_0(VAR_15));
   }
  }




  FUNC_11(FUNC_10(VAR_12[FUNC_2(VAR_16)]),
         VAR_9->ioc_regs.smem_page_start + VAR_14);

  VAR_14 += sizeof(u32);




  VAR_14 = FUNC_4(VAR_14);
  if (VAR_14 == 0) {
   VAR_13++;
   FUNC_11(VAR_13,
          VAR_9->ioc_regs.host_page_num_fn);
  }
 }

 FUNC_11(FUNC_8(VAR_9, 0),
        VAR_9->ioc_regs.host_page_num_fn);




 if (VAR_11 == VAR_5 &&
     VAR_10 == VAR_6) {
  VAR_10 = VAR_7;
 }
 VAR_17 = FUNC_3(VAR_9->asic_gen, VAR_9->asic_mode,
     VAR_9->port0_mode, VAR_9->port1_mode);
 FUNC_11(VAR_17, ((VAR_9->ioc_regs.smem_page_start)
   + VAR_3));
 FUNC_11(VAR_10, ((VAR_9->ioc_regs.smem_page_start)
   + (VAR_8)));
 FUNC_11(VAR_11, ((VAR_9->ioc_regs.smem_page_start)
   + (VAR_4)));
 return VAR_0;
}
