
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
typedef int xfs_daddr_t ;
typedef scalar_t__ xfs_dablk_t ;
struct xfs_mount {int m_ddev_targp; } ;
struct xfs_da_args {int rmtblkcnt; TYPE_1__* dp; int trans; scalar_t__ rmtblkno; } ;
struct xfs_buf {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; scalar_t__ br_blockcount; } ;
struct TYPE_4__ {struct xfs_mount* i_mount; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int FUNC_3 (struct xfs_da_args*) ;
 int FUNC_4 (TYPE_1__*,int ,int,struct xfs_bmbt_irec*,int*,int ) ;
 struct xfs_buf* FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (struct xfs_buf*) ;
 int FUNC_7 (struct xfs_buf*) ;
 int FUNC_8 (int ,TYPE_1__*,scalar_t__,int,int ,int,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;

int
FUNC_11(
 struct xfs_da_args *VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_4->dp->i_mount;
 xfs_dablk_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_3(VAR_4);




 VAR_6 = VAR_4->rmtblkno;
 VAR_7 = VAR_4->rmtblkcnt;
 while (VAR_7 > 0) {
  struct xfs_bmbt_irec VAR_10;
  struct xfs_buf *VAR_11;
  xfs_daddr_t VAR_12;
  int VAR_13;
  int VAR_14;




  VAR_14 = 1;
  VAR_8 = FUNC_4(VAR_4->dp, (xfs_fileoff_t)VAR_6,
           VAR_7, &VAR_10, &VAR_14, VAR_3);
  if (VAR_8)
   return VAR_8;
  FUNC_0(VAR_14 == 1);
  FUNC_0((VAR_10.br_startblock != VAR_0) &&
         (VAR_10.br_startblock != VAR_1));

  VAR_12 = FUNC_2(VAR_5, VAR_10.br_startblock),
  VAR_13 = FUNC_1(VAR_5, VAR_10.br_blockcount);




  VAR_11 = FUNC_5(VAR_5->m_ddev_targp, VAR_12, VAR_13, VAR_2);
  if (VAR_11) {
   FUNC_7(VAR_11);
   FUNC_6(VAR_11);
   VAR_11 = ((void*)0);
  }

  VAR_6 += VAR_10.br_blockcount;
  VAR_7 -= VAR_10.br_blockcount;
 }




 VAR_6 = VAR_4->rmtblkno;
 VAR_7 = VAR_4->rmtblkcnt;
 VAR_9 = 0;
 while (!VAR_9) {
  VAR_8 = FUNC_8(VAR_4->trans, VAR_4->dp, VAR_6, VAR_7,
        VAR_3, 1, &VAR_9);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_9(&VAR_4->trans);
  if (VAR_8)
   return VAR_8;




  VAR_8 = FUNC_10(&VAR_4->trans, VAR_4->dp);
  if (VAR_8)
   return VAR_8;
 }
 return 0;
}
