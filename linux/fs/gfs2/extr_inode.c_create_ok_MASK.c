
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef scalar_t__ u32 ;
struct qstr {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_nlink; } ;
struct gfs2_inode {scalar_t__ i_entries; TYPE_1__ i_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct gfs2_inode *VAR_5, const struct qstr *VAR_6,
       umode_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_5->i_inode, VAR_4 | VAR_3);
 if (VAR_8)
  return VAR_8;


 if (!VAR_5->i_inode.i_nlink)
  return -VAR_2;

 if (VAR_5->i_entries == (u32)-1)
  return -VAR_0;
 if (FUNC_0(VAR_7) && VAR_5->i_inode.i_nlink == (u32)-1)
  return -VAR_1;

 return 0;
}
