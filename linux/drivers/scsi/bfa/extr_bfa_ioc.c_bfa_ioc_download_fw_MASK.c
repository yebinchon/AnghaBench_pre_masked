
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int smem_page_start; int host_page_num_fn; int smem_pg0; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; int port1_mode; int port0_mode; int asic_mode; int asic_gen; } ;
typedef scalar_t__ bfa_status_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct bfa_ioc_s*) ;
 scalar_t__ FUNC_9 (struct bfa_ioc_s*,int ,scalar_t__*) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct bfa_ioc_s*,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static bfa_status_t
FUNC_14(struct bfa_ioc_s *VAR_9, u32 VAR_10,
      u32 VAR_11)
{
 u32 *VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20[VAR_1];
 bfa_status_t VAR_21;

 if (VAR_11 == VAR_5 &&
  VAR_10 == VAR_6) {
  VAR_19 = VAR_2/sizeof(u32);

  VAR_21 = FUNC_9(VAR_9,
   FUNC_0(VAR_16), VAR_20);
  if (VAR_21 != VAR_0)
   return VAR_21;

  VAR_12 = VAR_20;
 } else {
  VAR_19 = FUNC_7(FUNC_8(VAR_9));
  VAR_12 = FUNC_6(FUNC_8(VAR_9),
     FUNC_0(VAR_16));
 }

 FUNC_11(VAR_9, VAR_19);


 VAR_13 = FUNC_4(VAR_9->ioc_regs.smem_pg0, VAR_15);
 VAR_14 = FUNC_5(VAR_15);

 FUNC_13(VAR_13, VAR_9->ioc_regs.host_page_num_fn);

 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {

  if (FUNC_1(VAR_17) != VAR_16) {
   VAR_16 = FUNC_1(VAR_17);

   if (VAR_11 == VAR_5 &&
    VAR_10 == VAR_6) {
    VAR_21 = FUNC_9(VAR_9,
     FUNC_0(VAR_16),
     VAR_20);
    if (VAR_21 != VAR_0)
     return VAR_21;

    VAR_12 = VAR_20;
   } else {
    VAR_12 = FUNC_6(
     FUNC_8(VAR_9),
     FUNC_0(VAR_16));
   }
  }




  FUNC_10(VAR_9->ioc_regs.smem_page_start, VAR_15,
         VAR_12[FUNC_2(VAR_17)]);

  VAR_15 += sizeof(u32);




  VAR_15 = FUNC_5(VAR_15);
  if (VAR_15 == 0) {
   VAR_13++;
   FUNC_13(VAR_13, VAR_9->ioc_regs.host_page_num_fn);
  }
 }

 FUNC_13(FUNC_4(VAR_9->ioc_regs.smem_pg0, 0),
   VAR_9->ioc_regs.host_page_num_fn);




 if (VAR_11 == VAR_5 &&
  VAR_10 == VAR_6) {
  VAR_10 = VAR_7;
 }
 VAR_18 = FUNC_3(VAR_9->asic_gen, VAR_9->asic_mode,
    VAR_9->port0_mode, VAR_9->port1_mode);
 FUNC_10(VAR_9->ioc_regs.smem_page_start, VAR_3,
   FUNC_12(VAR_18));
 FUNC_10(VAR_9->ioc_regs.smem_page_start, VAR_8,
   FUNC_12(VAR_10));
 FUNC_10(VAR_9->ioc_regs.smem_page_start, VAR_4,
   FUNC_12(VAR_11));
 return VAR_0;
}
