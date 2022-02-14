
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {scalar_t__ ns_blocksize_bits; int ns_crc_seed; int ns_sufile; int ns_cno; } ;
struct TYPE_4__ {int flags; } ;
struct nilfs_sc_info {int sc_gc_inodes; int sc_dirty_files; TYPE_2__ sc_stage; int sc_segbufs; int sc_curseg; int sc_seg_ctime; int sc_flags; int sc_root; int sc_cno; TYPE_1__* sc_super; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct nilfs_sc_info*) ;
 int FUNC_5 (struct nilfs_sc_info*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct nilfs_sc_info*,struct the_nilfs*,int) ;
 int FUNC_8 (struct nilfs_sc_info*,int) ;
 int FUNC_9 (struct nilfs_sc_info*,struct the_nilfs*) ;
 scalar_t__ FUNC_10 (struct nilfs_sc_info*) ;
 int FUNC_11 (struct nilfs_sc_info*,struct the_nilfs*,int) ;
 int FUNC_12 (struct nilfs_sc_info*,struct the_nilfs*) ;
 int FUNC_13 (struct nilfs_sc_info*,struct the_nilfs*) ;
 int FUNC_14 (struct nilfs_sc_info*) ;
 int FUNC_15 (struct nilfs_sc_info*) ;
 int FUNC_16 (struct nilfs_sc_info*,struct the_nilfs*) ;
 int FUNC_17 (struct nilfs_sc_info*) ;
 int FUNC_18 (struct nilfs_sc_info*,int ) ;
 int FUNC_19 (struct nilfs_sc_info*) ;
 int FUNC_20 (struct nilfs_sc_info*,struct the_nilfs*) ;
 scalar_t__ FUNC_21 (struct the_nilfs*,int ) ;
 int FUNC_22 (int ,int *) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct nilfs_sc_info *VAR_8, int VAR_9)
{
 struct the_nilfs *VAR_10 = VAR_8->sc_super->s_fs_info;
 int VAR_11;

 FUNC_5(VAR_8, VAR_5);
 VAR_8->sc_cno = VAR_10->ns_cno;

 VAR_11 = FUNC_12(VAR_8, VAR_10);
 if (FUNC_23(VAR_11))
  goto out;

 if (FUNC_21(VAR_10, VAR_8->sc_root))
  FUNC_22(VAR_2, &VAR_8->sc_flags);

 if (FUNC_10(VAR_8))
  goto out;

 do {
  VAR_8->sc_stage.flags &= ~VAR_0;

  VAR_11 = FUNC_9(VAR_8, VAR_10);
  if (FUNC_23(VAR_11))
   goto out;


  VAR_8->sc_seg_ctime = FUNC_0();

  VAR_11 = FUNC_11(VAR_8, VAR_10, VAR_9);
  if (FUNC_23(VAR_11))
   goto failed;


  if (FUNC_4(VAR_8) == VAR_4 &&
      FUNC_6(VAR_8->sc_curseg)) {
   FUNC_7(VAR_8, VAR_10, 1);
   goto out;
  }

  VAR_11 = FUNC_8(VAR_8, VAR_9);
  if (FUNC_23(VAR_11))
   goto failed;

  if (VAR_8->sc_stage.flags & VAR_1)
   FUNC_15(VAR_8);

  if (VAR_9 == VAR_7 &&
      FUNC_4(VAR_8) >= VAR_3) {
   VAR_11 = FUNC_14(VAR_8);
   if (FUNC_23(VAR_11))
    goto failed_to_write;

   FUNC_16(VAR_8, VAR_10);
  }
  FUNC_18(VAR_8, VAR_10->ns_sufile);


  FUNC_17(VAR_8);

  FUNC_1(&VAR_8->sc_segbufs,
         VAR_10->ns_crc_seed);

  VAR_11 = FUNC_20(VAR_8, VAR_10);
  if (FUNC_23(VAR_11))
   goto failed_to_write;

  if (FUNC_4(VAR_8) == VAR_4 ||
      VAR_10->ns_blocksize_bits != VAR_6) {







   VAR_11 = FUNC_19(VAR_8);
   if (VAR_11)
    goto failed_to_write;
  }
 } while (FUNC_4(VAR_8) != VAR_4);

 out:
 FUNC_13(VAR_8, VAR_10);
 return VAR_11;

 failed_to_write:
 if (VAR_8->sc_stage.flags & VAR_1)
  FUNC_3(&VAR_8->sc_dirty_files);

 failed:
 if (FUNC_2())
  FUNC_3(&VAR_8->sc_gc_inodes);
 FUNC_7(VAR_8, VAR_10, VAR_11);
 goto out;
}
