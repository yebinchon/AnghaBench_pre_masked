
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dir_lookup_result {int * member_0; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_3 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_4 (unsigned long long,int,char const*) ;

int FUNC_5(struct inode *VAR_1,
         const char *VAR_2,
         int VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_dir_lookup_result VAR_5 = { ((void*)0), };

 FUNC_4(
  (unsigned long long)FUNC_0(VAR_1)->ip_blkno, VAR_3, VAR_2);

 if (FUNC_2(VAR_2, VAR_3, VAR_1, &VAR_5) == 0) {
  VAR_4 = -VAR_0;
  FUNC_1(VAR_4);
 }

 FUNC_3(&VAR_5);

 return VAR_4;
}
