
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
struct TYPE_13__ {int pagf_btreeblks; int pagf_flcount; int pagf_agflreset; } ;
typedef TYPE_2__ xfs_perag_t ;
typedef int xfs_mount_t ;
typedef int xfs_buf_t ;
struct TYPE_14__ {scalar_t__ agf_btreeblks; scalar_t__ agf_flcount; scalar_t__ agf_seqno; scalar_t__ agf_flfirst; } ;
typedef TYPE_3__ xfs_agf_t ;
typedef size_t xfs_agblock_t ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int *) ;
 scalar_t__* FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__*,int) ;
 size_t FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 int FUNC_7 (int *,TYPE_1__*,size_t,int **) ;
 TYPE_2__* FUNC_8 (int *,size_t) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int *) ;

int
FUNC_12(
 xfs_trans_t *VAR_4,
 xfs_buf_t *VAR_5,
 xfs_agblock_t *VAR_6,
 int VAR_7)
{
 xfs_agf_t *VAR_8;
 xfs_buf_t *VAR_9;
 xfs_agblock_t VAR_10;
 __be32 *VAR_11;
 int VAR_12;
 int VAR_13;
 xfs_mount_t *VAR_14 = VAR_4->t_mountp;
 xfs_perag_t *VAR_15;




 VAR_8 = FUNC_1(VAR_5);
 if (!VAR_8->agf_flcount) {
  *VAR_6 = VAR_0;
  return 0;
 }



 VAR_12 = FUNC_7(VAR_14, VAR_4, FUNC_4(VAR_8->agf_seqno),
        &VAR_9);
 if (VAR_12)
  return VAR_12;





 VAR_11 = FUNC_2(VAR_14, VAR_9);
 VAR_10 = FUNC_4(VAR_11[FUNC_4(VAR_8->agf_flfirst)]);
 FUNC_3(&VAR_8->agf_flfirst, 1);
 FUNC_11(VAR_4, VAR_9);
 if (FUNC_4(VAR_8->agf_flfirst) == FUNC_5(VAR_14))
  VAR_8->agf_flfirst = 0;

 VAR_15 = FUNC_8(VAR_14, FUNC_4(VAR_8->agf_seqno));
 FUNC_0(!VAR_15->pagf_agflreset);
 FUNC_3(&VAR_8->agf_flcount, -1);
 FUNC_10(VAR_4, -1);
 VAR_15->pagf_flcount--;

 VAR_13 = VAR_3 | VAR_2;
 if (VAR_7) {
  FUNC_3(&VAR_8->agf_btreeblks, 1);
  VAR_15->pagf_btreeblks++;
  VAR_13 |= VAR_1;
 }
 FUNC_9(VAR_15);

 FUNC_6(VAR_4, VAR_5, VAR_13);
 *VAR_6 = VAR_10;

 return 0;
}
