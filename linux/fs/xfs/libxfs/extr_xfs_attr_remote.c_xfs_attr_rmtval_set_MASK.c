
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
typedef int xfs_daddr_t ;
typedef scalar_t__ xfs_dablk_t ;
typedef int uint8_t ;
struct xfs_mount {int m_ddev_targp; } ;
struct xfs_inode {int i_ino; struct xfs_mount* i_mount; } ;
struct xfs_da_args {int rmtvaluelen; int rmtblkcnt; struct xfs_inode* dp; scalar_t__ rmtblkno; int trans; int total; int * value; } ;
struct xfs_buf {int * b_ops; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; scalar_t__ br_blockcount; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int FUNC_3 (struct xfs_da_args*) ;
 int FUNC_4 (struct xfs_mount*,int) ;
 int VAR_5 ;
 int FUNC_5 (struct xfs_mount*,struct xfs_buf*,int ,int*,int*,int **) ;
 int FUNC_6 (int ,struct xfs_inode*,int,scalar_t__*,int ) ;
 int FUNC_7 (struct xfs_inode*,scalar_t__,int,struct xfs_bmbt_irec*,int*,int ) ;
 int FUNC_8 (int ,struct xfs_inode*,scalar_t__,int,int ,int ,struct xfs_bmbt_irec*,int*) ;
 struct xfs_buf* FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct xfs_buf*) ;
 int FUNC_11 (struct xfs_buf*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct xfs_inode*) ;

int
FUNC_14(
 struct xfs_da_args *VAR_6)
{
 struct xfs_inode *VAR_7 = VAR_6->dp;
 struct xfs_mount *VAR_8 = VAR_7->i_mount;
 struct xfs_bmbt_irec VAR_9;
 xfs_dablk_t VAR_10;
 xfs_fileoff_t VAR_11 = 0;
 uint8_t *VAR_12 = VAR_6->value;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 FUNC_3(VAR_6);







 VAR_13 = FUNC_4(VAR_8, VAR_6->rmtvaluelen);
 VAR_16 = FUNC_6(VAR_6->trans, VAR_6->dp, VAR_13, &VAR_11,
         VAR_3);
 if (VAR_16)
  return VAR_16;

 VAR_6->rmtblkno = VAR_10 = (xfs_dablk_t)VAR_11;
 VAR_6->rmtblkcnt = VAR_13;




 while (VAR_13 > 0) {
  VAR_15 = 1;
  VAR_16 = FUNC_8(VAR_6->trans, VAR_7, (xfs_fileoff_t)VAR_10,
      VAR_13, VAR_4, VAR_6->total, &VAR_9,
      &VAR_15);
  if (VAR_16)
   return VAR_16;
  VAR_16 = FUNC_12(&VAR_6->trans);
  if (VAR_16)
   return VAR_16;

  FUNC_0(VAR_15 == 1);
  FUNC_0((VAR_9.br_startblock != VAR_0) &&
         (VAR_9.br_startblock != VAR_2));
  VAR_10 += VAR_9.br_blockcount;
  VAR_13 -= VAR_9.br_blockcount;




  VAR_16 = FUNC_13(&VAR_6->trans, VAR_7);
  if (VAR_16)
   return VAR_16;
 }







 VAR_10 = VAR_6->rmtblkno;
 VAR_13 = VAR_6->rmtblkcnt;
 VAR_14 = VAR_6->rmtvaluelen;
 while (VAR_14 > 0) {
  struct xfs_buf *VAR_18;
  xfs_daddr_t VAR_19;
  int VAR_20;

  FUNC_0(VAR_13 > 0);

  VAR_15 = 1;
  VAR_16 = FUNC_7(VAR_7, (xfs_fileoff_t)VAR_10,
           VAR_13, &VAR_9, &VAR_15,
           VAR_4);
  if (VAR_16)
   return VAR_16;
  FUNC_0(VAR_15 == 1);
  FUNC_0((VAR_9.br_startblock != VAR_0) &&
         (VAR_9.br_startblock != VAR_2));

  VAR_19 = FUNC_2(VAR_8, VAR_9.br_startblock),
  VAR_20 = FUNC_1(VAR_8, VAR_9.br_blockcount);

  VAR_18 = FUNC_9(VAR_8->m_ddev_targp, VAR_19, VAR_20);
  if (!VAR_18)
   return -VAR_1;
  VAR_18->b_ops = &VAR_5;

  FUNC_5(VAR_8, VAR_18, VAR_6->dp->i_ino, &VAR_17,
           &VAR_14, &VAR_12);

  VAR_16 = FUNC_11(VAR_18);
  FUNC_10(VAR_18);
  if (VAR_16)
   return VAR_16;



  VAR_10 += VAR_9.br_blockcount;
  VAR_13 -= VAR_9.br_blockcount;
 }
 FUNC_0(VAR_14 == 0);
 return 0;
}
