
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {scalar_t__ pagf_freeblks; int pagf_metadata; int pagf_init; } ;
struct TYPE_3__ {int sb_agblocks; scalar_t__ sb_agcount; } ;
struct xfs_mount {int m_filestream; TYPE_1__ m_sb; } ;
struct xfs_inode {int i_ino; struct xfs_mount* i_mount; } ;
struct xfs_fstrm_item {int mru; scalar_t__ ag; } ;
struct TYPE_4__ {int i_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct xfs_inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct xfs_fstrm_item* FUNC_3 (int,int ) ;
 int FUNC_4 (struct xfs_fstrm_item*) ;
 int FUNC_5 (struct xfs_inode*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct xfs_mount*,int ,scalar_t__) ;
 int FUNC_7 (struct xfs_perag*,int ) ;
 scalar_t__ FUNC_8 (struct xfs_perag*,int ,int ) ;
 int FUNC_9 (struct xfs_mount*,struct xfs_perag*) ;
 int FUNC_10 (struct xfs_mount*,int *,scalar_t__,int) ;
 int FUNC_11 (struct xfs_mount*,scalar_t__) ;
 int FUNC_12 (struct xfs_mount*,scalar_t__) ;
 int FUNC_13 (int ,int ,int *) ;
 struct xfs_perag* FUNC_14 (struct xfs_mount*,scalar_t__) ;
 int FUNC_15 (struct xfs_perag*) ;

__attribute__((used)) static int
FUNC_16(
 struct xfs_inode *VAR_8,
 xfs_agnumber_t VAR_9,
 xfs_agnumber_t *VAR_10,
 int VAR_11,
 xfs_extlen_t VAR_12)
{
 struct xfs_mount *VAR_13 = VAR_8->i_mount;
 struct xfs_fstrm_item *VAR_14;
 struct xfs_perag *VAR_15;
 xfs_extlen_t VAR_16, VAR_17 = 0, VAR_18, VAR_19 = 0;
 xfs_agnumber_t VAR_20, VAR_21 = VAR_3;
 int VAR_22, VAR_23, VAR_24;

 FUNC_0(FUNC_1(FUNC_2(VAR_8)->i_mode));


 VAR_18 = VAR_13->m_sb.sb_agblocks / 50;

 VAR_20 = VAR_9;
 *VAR_10 = VAR_3;


 VAR_23 = VAR_5;

 for (VAR_24 = 0; 1; VAR_24++) {
  FUNC_6(VAR_13, VAR_8->i_ino, VAR_20);

  VAR_15 = FUNC_14(VAR_13, VAR_20);

  if (!VAR_15->pagf_init) {
   VAR_22 = FUNC_10(VAR_13, ((void*)0), VAR_20, VAR_23);
   if (VAR_22 && !VAR_23) {
    FUNC_15(VAR_15);
    return VAR_22;
   }
  }


  if (!VAR_15->pagf_init)
   goto next_ag;


  if (VAR_15->pagf_freeblks > VAR_19) {
   VAR_19 = VAR_15->pagf_freeblks;
   VAR_21 = VAR_20;
  }







  if (FUNC_11(VAR_13, VAR_20) > 1) {
   FUNC_12(VAR_13, VAR_20);
   goto next_ag;
  }

  VAR_16 = FUNC_8(VAR_15,
    FUNC_9(VAR_13, VAR_15),
    FUNC_7(VAR_15, VAR_4));
  if (((VAR_12 && VAR_16 >= VAR_12) ||
       (!VAR_12 && VAR_15->pagf_freeblks >= VAR_18)) &&
      (!VAR_15->pagf_metadata || !(VAR_11 & VAR_7) ||
       (VAR_11 & VAR_6))) {


   VAR_17 = VAR_15->pagf_freeblks;
   FUNC_15(VAR_15);
   *VAR_10 = VAR_20;
   break;
  }


  FUNC_12(VAR_13, VAR_20);
next_ag:
  FUNC_15(VAR_15);

  if (++VAR_20 >= VAR_13->m_sb.sb_agcount)
   VAR_20 = 0;


  if (VAR_20 != VAR_9)
   continue;


  if (VAR_23 != 0) {
   VAR_23 = 0;
   continue;
  }


  if (!(VAR_11 & VAR_6)) {
   VAR_11 |= VAR_6;
   continue;
  }





  if (VAR_21 != VAR_3) {
   FUNC_11(VAR_13, VAR_21);
   VAR_17 = VAR_19;
   *VAR_10 = VAR_21;
   break;
  }


  FUNC_5(VAR_8, *VAR_10, VAR_17, VAR_24);
  *VAR_10 = 0;
  return 0;
 }

 FUNC_5(VAR_8, *VAR_10, VAR_17, VAR_24);

 if (*VAR_10 == VAR_3)
  return 0;

 VAR_22 = -VAR_1;
 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  goto out_put_ag;

 VAR_14->ag = *VAR_10;

 VAR_22 = FUNC_13(VAR_13->m_filestream, VAR_8->i_ino, &VAR_14->mru);
 if (VAR_22) {
  if (VAR_22 == -VAR_0)
   VAR_22 = 0;
  goto out_free_item;
 }

 return 0;

out_free_item:
 FUNC_4(VAR_14);
out_put_ag:
 FUNC_12(VAR_13, *VAR_10);
 return VAR_22;
}
