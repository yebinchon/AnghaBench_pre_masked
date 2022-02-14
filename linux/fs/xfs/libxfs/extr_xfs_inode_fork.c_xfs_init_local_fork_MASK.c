
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_inode {int dummy; } ;
struct TYPE_3__ {char* if_data; } ;
struct xfs_ifork {int if_bytes; int if_flags; TYPE_1__ if_u1; } ;
struct TYPE_4__ {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct xfs_inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfs_ifork* FUNC_2 (struct xfs_inode*,int) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,void const*,int) ;
 int FUNC_5 (int,int) ;

void
FUNC_6(
 struct xfs_inode *VAR_4,
 int VAR_5,
 const void *VAR_6,
 int VAR_7)
{
 struct xfs_ifork *VAR_8 = FUNC_2(VAR_4, VAR_5);
 int VAR_9 = VAR_7, VAR_10 = 0;
 bool VAR_11;







 VAR_11 = FUNC_0(FUNC_1(VAR_4)->i_mode);
 if (VAR_11)
  VAR_9++;

 if (VAR_7) {
  VAR_10 = FUNC_5(VAR_9, 4);
  VAR_8->if_u1.if_data = FUNC_3(VAR_10, VAR_0);
  FUNC_4(VAR_8->if_u1.if_data, VAR_6, VAR_7);
  if (VAR_11)
   VAR_8->if_u1.if_data[VAR_7] = '\0';
 } else {
  VAR_8->if_u1.if_data = ((void*)0);
 }

 VAR_8->if_bytes = VAR_7;
 VAR_8->if_flags &= ~(VAR_2 | VAR_1);
 VAR_8->if_flags |= VAR_3;
}
