
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int * t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
struct TYPE_23__ {int pagf_btreeblks; int pagf_flcount; int pagf_agflreset; } ;
typedef TYPE_2__ xfs_perag_t ;
typedef int xfs_mount_t ;
struct TYPE_24__ {scalar_t__ b_addr; } ;
typedef TYPE_3__ xfs_buf_t ;
struct TYPE_25__ {scalar_t__ agf_fllast; scalar_t__ agf_flcount; scalar_t__ agf_btreeblks; scalar_t__ agf_seqno; } ;
typedef TYPE_4__ xfs_agf_t ;
typedef int xfs_agblock_t ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (scalar_t__*,int) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_8 (int *,TYPE_1__*,size_t,TYPE_3__**) ;
 TYPE_2__* FUNC_9 (int *,size_t) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_1__*,TYPE_3__*,int,int) ;

int
FUNC_14(
 xfs_trans_t *VAR_4,
 xfs_buf_t *VAR_5,
 xfs_buf_t *VAR_6,
 xfs_agblock_t VAR_7,
 int VAR_8)
{
 xfs_agf_t *VAR_9;
 __be32 *VAR_10;
 int VAR_11;
 int VAR_12;
 xfs_mount_t *VAR_13;
 xfs_perag_t *VAR_14;
 __be32 *VAR_15;
 int VAR_16;

 VAR_9 = FUNC_1(VAR_5);
 VAR_13 = VAR_4->t_mountp;

 if (!VAR_6 && (VAR_11 = FUNC_8(VAR_13, VAR_4,
   FUNC_4(VAR_9->agf_seqno), &VAR_6)))
  return VAR_11;
 FUNC_3(&VAR_9->agf_fllast, 1);
 if (FUNC_4(VAR_9->agf_fllast) == FUNC_6(VAR_13))
  VAR_9->agf_fllast = 0;

 VAR_14 = FUNC_9(VAR_13, FUNC_4(VAR_9->agf_seqno));
 FUNC_0(!VAR_14->pagf_agflreset);
 FUNC_3(&VAR_9->agf_flcount, 1);
 FUNC_11(VAR_4, 1);
 VAR_14->pagf_flcount++;

 VAR_12 = VAR_2 | VAR_1;
 if (VAR_8) {
  FUNC_3(&VAR_9->agf_btreeblks, -1);
  VAR_14->pagf_btreeblks--;
  VAR_12 |= VAR_0;
 }
 FUNC_10(VAR_14);

 FUNC_7(VAR_4, VAR_5, VAR_12);

 FUNC_0(FUNC_4(VAR_9->agf_flcount) <= FUNC_6(VAR_13));

 VAR_15 = FUNC_2(VAR_13, VAR_6);
 VAR_10 = &VAR_15[FUNC_4(VAR_9->agf_fllast)];
 *VAR_10 = FUNC_5(VAR_7);
 VAR_16 = (char *)VAR_10 - (char *)VAR_6->b_addr;

 FUNC_7(VAR_4, VAR_5, VAR_12);

 FUNC_12(VAR_4, VAR_6, VAR_3);
 FUNC_13(VAR_4, VAR_6, VAR_16,
     VAR_16 + sizeof(xfs_agblock_t) - 1);
 return 0;
}
