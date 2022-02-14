
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * i_cowfp; int * i_afp; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_6__ {int * if_data; } ;
struct xfs_ifork {int if_flags; scalar_t__ if_height; TYPE_1__ if_u1; int * if_broot; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 struct xfs_ifork* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct xfs_ifork*) ;
 int VAR_4 ;

void
FUNC_5(
 xfs_inode_t *VAR_5,
 int VAR_6)
{
 struct xfs_ifork *VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7->if_broot != ((void*)0)) {
  FUNC_2(VAR_7->if_broot);
  VAR_7->if_broot = ((void*)0);
 }







 if (FUNC_0(VAR_5, VAR_6) == VAR_2) {
  if (VAR_7->if_u1.if_data != ((void*)0)) {
   FUNC_2(VAR_7->if_u1.if_data);
   VAR_7->if_u1.if_data = ((void*)0);
  }
 } else if ((VAR_7->if_flags & VAR_3) && VAR_7->if_height) {
  FUNC_4(VAR_7);
 }

 if (VAR_6 == VAR_0) {
  FUNC_3(VAR_4, VAR_5->i_afp);
  VAR_5->i_afp = ((void*)0);
 } else if (VAR_6 == VAR_1) {
  FUNC_3(VAR_4, VAR_5->i_cowfp);
  VAR_5->i_cowfp = ((void*)0);
 }
}
