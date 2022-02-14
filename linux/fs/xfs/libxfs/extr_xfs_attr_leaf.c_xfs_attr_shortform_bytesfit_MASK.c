
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int m_flags; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_11__ {int di_format; int di_forkoff; int di_version; } ;
struct TYPE_10__ {int if_bytes; int if_broot; } ;
struct TYPE_13__ {TYPE_2__ i_d; TYPE_1__ i_df; TYPE_3__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef int xfs_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;

 int VAR_2 ;

 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*) ;

int
FUNC_7(xfs_inode_t *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 xfs_mount_t *VAR_10 = VAR_4->i_mount;


 VAR_6 = (FUNC_3(VAR_10, VAR_4->i_d.di_version) - VAR_5) >> 3;

 if (VAR_4->i_d.di_format == VAR_2) {
  VAR_7 = FUNC_5(sizeof(xfs_dev_t), 8) >> 3;
  return (VAR_6 >= VAR_7) ? VAR_7 : 0;
 }
 if (VAR_5 <= FUNC_2(VAR_4))
  return VAR_4->i_d.di_forkoff;






 if (!(VAR_10->m_flags & VAR_3))
  return 0;

 VAR_9 = VAR_4->i_df.if_bytes;

 switch (VAR_4->i_d.di_format) {
 case 128:







  if (!VAR_4->i_d.di_forkoff && VAR_4->i_df.if_bytes >
      FUNC_6(VAR_4))
   VAR_9 = FUNC_1(VAR_1);
  break;
 case 129:






  if (VAR_4->i_d.di_forkoff) {
   if (VAR_6 < VAR_4->i_d.di_forkoff)
    return 0;
   return VAR_4->i_d.di_forkoff;
  }
  VAR_9 = FUNC_0(VAR_10, VAR_4->i_df.if_broot);
  break;
 }





 VAR_7 = FUNC_4(VAR_9, FUNC_1(VAR_1));
 VAR_7 = FUNC_5(VAR_7, 8) >> 3;


 VAR_8 = FUNC_3(VAR_10, VAR_4->i_d.di_version) -
   FUNC_1(VAR_0);
 VAR_8 = VAR_8 >> 3;

 if (VAR_6 >= VAR_8)
  return VAR_8;
 if (VAR_6 >= VAR_7)
  return VAR_6;
 return 0;
}
