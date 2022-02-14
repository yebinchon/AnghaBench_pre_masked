
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct lm_lockstruct {scalar_t__ ls_recover_start; scalar_t__ ls_recover_block; int ls_recover_size; int ls_lvb_bits; int ls_recover_spin; int ls_recover_result; int ls_recover_submit; int ls_recover_flags; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gfs2_sbd*,int ,int) ;
 int FUNC_2 (struct lm_lockstruct*,scalar_t__,int ) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (struct gfs2_sbd*,char*,int,...) ;
 int FUNC_5 (struct gfs2_sbd*,char*,scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct gfs2_sbd*,int ,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct gfs2_sbd *VAR_11)
{
 struct lm_lockstruct *VAR_12 = &VAR_11->sd_lockstruct;
 uint32_t VAR_13, VAR_14;
 int VAR_15;

restart:
 FUNC_9(&VAR_12->ls_recover_spin);
 VAR_13 = VAR_12->ls_recover_start;
 VAR_14 = VAR_12->ls_recover_block;

 if (FUNC_11(VAR_0, &VAR_12->ls_recover_flags) ||
     !FUNC_11(VAR_4, &VAR_12->ls_recover_flags) ||
     !FUNC_11(VAR_2, &VAR_12->ls_recover_flags)) {

  FUNC_4(VAR_11, "control_first_done start %u block %u flags %lx\n",
         VAR_13, VAR_14, VAR_12->ls_recover_flags);
  FUNC_10(&VAR_12->ls_recover_spin);
  FUNC_3(VAR_11);
  return -1;
 }

 if (VAR_13 == VAR_14) {







  FUNC_10(&VAR_12->ls_recover_spin);
  FUNC_5(VAR_11, "control_first_done wait gen %u\n", VAR_13);

  FUNC_12(&VAR_12->ls_recover_flags, VAR_1,
       VAR_10);
  goto restart;
 }

 FUNC_0(VAR_2, &VAR_12->ls_recover_flags);
 FUNC_8(VAR_3, &VAR_12->ls_recover_flags);
 FUNC_6(VAR_12->ls_recover_submit, 0, VAR_12->ls_recover_size*sizeof(uint32_t));
 FUNC_6(VAR_12->ls_recover_result, 0, VAR_12->ls_recover_size*sizeof(uint32_t));
 FUNC_10(&VAR_12->ls_recover_spin);

 FUNC_6(VAR_12->ls_lvb_bits, 0, VAR_9);
 FUNC_2(VAR_12, VAR_13, VAR_12->ls_lvb_bits);

 VAR_15 = FUNC_7(VAR_11, VAR_8, VAR_5);
 if (VAR_15)
  FUNC_4(VAR_11, "control_first_done mounted PR error %d\n", VAR_15);

 VAR_15 = FUNC_1(VAR_11, VAR_7, VAR_5|VAR_6);
 if (VAR_15)
  FUNC_4(VAR_11, "control_first_done control NL error %d\n", VAR_15);

 return VAR_15;
}
