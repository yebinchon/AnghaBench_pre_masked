
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_fileoff_t ;
struct xfs_trans {scalar_t__ t_firstblock; } ;
struct xfs_inode {int dummy; } ;
struct xfs_ifork {int if_bytes; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_blockcount; scalar_t__ br_state; int br_startblock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xfs_ifork* FUNC_1 (struct xfs_inode*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_inode*,struct xfs_bmbt_irec*) ;
 int FUNC_4 (struct xfs_trans*,int ,scalar_t__,int *) ;
 int FUNC_5 (struct xfs_inode*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*,struct xfs_bmbt_irec*) ;
 int FUNC_6 (struct xfs_inode*,int ,struct xfs_iext_cursor*,struct xfs_bmbt_irec*,struct xfs_bmbt_irec*) ;
 int FUNC_7 (struct xfs_trans**) ;
 int FUNC_8 (struct xfs_ifork*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_9 (struct xfs_inode*,struct xfs_ifork*,scalar_t__*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_10 (struct xfs_ifork*,struct xfs_iext_cursor*) ;
 int FUNC_11 (struct xfs_inode*) ;
 int FUNC_12 (struct xfs_inode*) ;
 int FUNC_13 (struct xfs_trans*,int ,scalar_t__) ;
 int FUNC_14 (int *,struct xfs_inode*,long,int ,int ) ;
 int FUNC_15 (struct xfs_bmbt_irec*,scalar_t__,scalar_t__) ;

int
FUNC_16(
 struct xfs_inode *VAR_4,
 struct xfs_trans **VAR_5,
 xfs_fileoff_t VAR_6,
 xfs_fileoff_t VAR_7,
 bool VAR_8)
{
 struct xfs_ifork *VAR_9 = FUNC_1(VAR_4, VAR_1);
 struct xfs_bmbt_irec VAR_10, VAR_11;
 struct xfs_iext_cursor VAR_12;
 int VAR_13 = 0;

 if (!FUNC_12(VAR_4))
  return 0;
 if (!FUNC_9(VAR_4, VAR_9, &VAR_7, &VAR_12, &VAR_10))
  return 0;


 while (VAR_10.br_startoff + VAR_10.br_blockcount > VAR_6) {
  VAR_11 = VAR_10;
  FUNC_15(&VAR_11, VAR_6, VAR_7 - VAR_6);


  if (!VAR_11.br_blockcount) {
   FUNC_10(VAR_9, &VAR_12);
   goto next_extent;
  }

  FUNC_3(VAR_4, &VAR_11);

  if (FUNC_2(VAR_11.br_startblock)) {
   VAR_13 = FUNC_6(VAR_4, VAR_1,
     &VAR_12, &VAR_10, &VAR_11);
   if (VAR_13)
    break;
  } else if (VAR_11.br_state == VAR_2 || VAR_8) {
   FUNC_0((*VAR_5)->t_firstblock == VAR_0);


   FUNC_13(*VAR_5, VAR_11.br_startblock,
     VAR_11.br_blockcount);

   FUNC_4(*VAR_5, VAR_11.br_startblock,
       VAR_11.br_blockcount, ((void*)0));


   VAR_13 = FUNC_7(VAR_5);
   if (VAR_13)
    break;


   FUNC_5(VAR_4, &VAR_12, &VAR_10, &VAR_11);


   VAR_13 = FUNC_14(((void*)0), VAR_4,
     -(long)VAR_11.br_blockcount, 0,
     VAR_3);
   if (VAR_13)
    break;
  } else {

   FUNC_10(VAR_9, &VAR_12);
  }
next_extent:
  if (!FUNC_8(VAR_9, &VAR_12, &VAR_10))
   break;
 }


 if (!VAR_9->if_bytes)
  FUNC_11(VAR_4);
 return VAR_13;
}
