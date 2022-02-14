
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lm_lockstruct {int ls_first; int ls_dlm; scalar_t__ ls_recover_flags; int * ls_lvb_bits; int * ls_recover_result; int * ls_recover_submit; scalar_t__ ls_recover_size; scalar_t__ ls_recover_block; scalar_t__ ls_recover_start; scalar_t__ ls_recover_mount; int ls_recover_spin; } ;
struct gfs2_sbd {scalar_t__ sd_flags; int sd_control_work; struct lm_lockstruct sd_lockstruct; } ;
typedef int cluster ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (char const*,char*,int,int ,int *,struct gfs2_sbd*,int*,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct lm_lockstruct*) ;
 int FUNC_6 (struct gfs2_sbd*,char*,...) ;
 int FUNC_7 (struct gfs2_sbd*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*,char const*,scalar_t__) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int ,scalar_t__*) ;
 int FUNC_11 (struct gfs2_sbd*,int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (char const*,char) ;
 scalar_t__ FUNC_15 (char const*) ;
 int FUNC_16 (int ,scalar_t__*) ;
 int FUNC_17 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_18(struct gfs2_sbd *VAR_10, const char *VAR_11)
{
 struct lm_lockstruct *VAR_12 = &VAR_10->sd_lockstruct;
 char VAR_13[VAR_6];
 const char *VAR_14;
 uint32_t VAR_15;
 int VAR_16, VAR_17;





 FUNC_0(&VAR_10->sd_control_work, VAR_9);
 FUNC_13(&VAR_12->ls_recover_spin);
 VAR_12->ls_recover_flags = 0;
 VAR_12->ls_recover_mount = 0;
 VAR_12->ls_recover_start = 0;
 VAR_12->ls_recover_block = 0;
 VAR_12->ls_recover_size = 0;
 VAR_12->ls_recover_submit = ((void*)0);
 VAR_12->ls_recover_result = ((void*)0);
 VAR_12->ls_lvb_bits = ((void*)0);

 VAR_16 = FUNC_11(VAR_10, ((void*)0), 0);
 if (VAR_16)
  goto fail;





 VAR_14 = FUNC_14(VAR_11, ':');
 if (!VAR_14) {
  FUNC_7(VAR_10, "no fsname found\n");
  VAR_16 = -VAR_4;
  goto fail_free;
 }
 FUNC_9(VAR_13, 0, sizeof(VAR_13));
 FUNC_8(VAR_13, VAR_11, FUNC_15(VAR_11) - FUNC_15(VAR_14));
 VAR_14++;

 VAR_15 = VAR_2 | VAR_3;





 VAR_16 = FUNC_3(VAR_14, VAR_13, VAR_15, VAR_5,
      &VAR_8, VAR_10, &VAR_17,
      &VAR_12->ls_dlm);
 if (VAR_16) {
  FUNC_6(VAR_10, "dlm_new_lockspace error %d\n", VAR_16);
  goto fail_free;
 }

 if (VAR_17 < 0) {




  FUNC_7(VAR_10, "dlm lockspace ops not used\n");
  FUNC_5(VAR_12);
  FUNC_10(VAR_1, &VAR_12->ls_recover_flags);
  return 0;
 }

 if (!FUNC_16(VAR_7, &VAR_10->sd_flags)) {
  FUNC_6(VAR_10, "dlm lockspace ops disallow jid preset\n");
  VAR_16 = -VAR_4;
  goto fail_release;
 }






 VAR_16 = FUNC_2(VAR_10);
 if (VAR_16) {
  FUNC_6(VAR_10, "mount control error %d\n", VAR_16);
  goto fail_release;
 }

 VAR_12->ls_first = !!FUNC_16(VAR_0, &VAR_12->ls_recover_flags);
 FUNC_1(VAR_7, &VAR_10->sd_flags);
 FUNC_12();
 FUNC_17(&VAR_10->sd_flags, VAR_7);
 return 0;

fail_release:
 FUNC_4(VAR_12->ls_dlm, 2);
fail_free:
 FUNC_5(VAR_12);
fail:
 return VAR_16;
}
