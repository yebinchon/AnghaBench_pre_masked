
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct esas2r_adapter {scalar_t__ chip_init_time; int max_vdareq_size; int build_sgl; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 scalar_t__ FUNC_3 (struct esas2r_adapter*,int ) ;
 int FUNC_4 (struct esas2r_adapter*,int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct esas2r_adapter *VAR_11, u32 VAR_12)
{
 u32 VAR_13 = VAR_12 - VAR_11->chip_init_time;

 if (VAR_13 <= VAR_7) {

 } else if (VAR_13 >= VAR_6) {




  FUNC_2(VAR_11);
 } else {

  u32 VAR_14;

  VAR_14 = FUNC_3(VAR_11, VAR_8);
  if (VAR_14 == 0xFFFFFFFF || !(VAR_14 & VAR_2)) {
   FUNC_1(VAR_11);
  } else {
   u32 VAR_15 = (VAR_14 & VAR_5);


   FUNC_4(VAR_11, VAR_8,
          VAR_14);
   if (VAR_15 == VAR_3) {
    FUNC_5(VAR_0, &VAR_11->flags);
    FUNC_5(VAR_1, &VAR_11->flags);

    VAR_11->max_vdareq_size = 128;
    VAR_11->build_sgl = VAR_10;
   } else if (VAR_15 == VAR_4) {
    FUNC_5(VAR_0, &VAR_11->flags);
    FUNC_0(VAR_1, &VAR_11->flags);

    VAR_11->max_vdareq_size = 1024;
    VAR_11->build_sgl = VAR_9;
   } else {
    FUNC_2(VAR_11);
   }
  }
 }
}
