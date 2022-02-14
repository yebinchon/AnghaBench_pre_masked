
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
typedef int xfs_daddr_t ;
typedef scalar_t__ xfs_dablk_t ;
typedef int uint8_t ;
struct xfs_mount {int m_ddev_targp; } ;
struct xfs_da_args {int rmtblkcnt; int flags; int rmtvaluelen; int valuelen; int trans; TYPE_1__* dp; int * value; scalar_t__ rmtblkno; } ;
struct xfs_buf {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; scalar_t__ br_blockcount; } ;
struct TYPE_2__ {int i_ino; struct xfs_mount* i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int FUNC_3 (struct xfs_da_args*) ;
 int VAR_5 ;
 int FUNC_4 (struct xfs_mount*,struct xfs_buf*,int ,int*,int*,int **) ;
 int FUNC_5 (TYPE_1__*,int ,int,struct xfs_bmbt_irec*,int*,int ) ;
 int FUNC_6 (int ,struct xfs_buf*) ;
 int FUNC_7 (struct xfs_mount*,int ,int ,int ,int,int ,struct xfs_buf**,int *) ;

int
FUNC_8(
 struct xfs_da_args *VAR_6)
{
 struct xfs_bmbt_irec VAR_7[VAR_1];
 struct xfs_mount *VAR_8 = VAR_6->dp->i_mount;
 struct xfs_buf *VAR_9;
 xfs_dablk_t VAR_10 = VAR_6->rmtblkno;
 uint8_t *VAR_11 = VAR_6->value;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = VAR_6->rmtblkcnt;
 int VAR_16;
 int VAR_17 = 0;

 FUNC_3(VAR_6);

 FUNC_0(!(VAR_6->flags & VAR_0));
 FUNC_0(VAR_6->rmtvaluelen == VAR_6->valuelen);

 VAR_12 = VAR_6->rmtvaluelen;
 while (VAR_12 > 0) {
  VAR_13 = VAR_1;
  VAR_14 = FUNC_5(VAR_6->dp, (xfs_fileoff_t)VAR_10,
           VAR_15, VAR_7, &VAR_13,
           VAR_4);
  if (VAR_14)
   return VAR_14;
  FUNC_0(VAR_13 >= 1);

  for (VAR_16 = 0; (VAR_16 < VAR_13) && (VAR_12 > 0); VAR_16++) {
   xfs_daddr_t VAR_18;
   int VAR_19;

   FUNC_0((VAR_7[VAR_16].br_startblock != VAR_2) &&
          (VAR_7[VAR_16].br_startblock != VAR_3));
   VAR_18 = FUNC_2(VAR_8, VAR_7[VAR_16].br_startblock);
   VAR_19 = FUNC_1(VAR_8, VAR_7[VAR_16].br_blockcount);
   VAR_14 = FUNC_7(VAR_8, VAR_6->trans,
         VAR_8->m_ddev_targp,
         VAR_18, VAR_19, 0, &VAR_9,
         &VAR_5);
   if (VAR_14)
    return VAR_14;

   VAR_14 = FUNC_4(VAR_8, VAR_9, VAR_6->dp->i_ino,
       &VAR_17, &VAR_12,
       &VAR_11);
   FUNC_6(VAR_6->trans, VAR_9);
   if (VAR_14)
    return VAR_14;


   VAR_10 += VAR_7[VAR_16].br_blockcount;
   VAR_15 -= VAR_7[VAR_16].br_blockcount;
  }
 }
 FUNC_0(VAR_12 == 0);
 return 0;
}
