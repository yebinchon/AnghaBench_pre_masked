
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_xattr_bucket*,scalar_t__,int) ;
 int FUNC_3 (struct ocfs2_xattr_bucket*,scalar_t__) ;
 int FUNC_4 (struct ocfs2_xattr_bucket*,struct ocfs2_xattr_bucket*) ;
 int FUNC_5 (struct ocfs2_xattr_bucket*) ;
 int FUNC_6 (int *,struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_7 (int *,struct ocfs2_xattr_bucket*) ;
 struct ocfs2_xattr_bucket* FUNC_8 (struct inode*) ;
 int FUNC_9 (unsigned long long,unsigned long long,int) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3,
     handle_t *VAR_4,
     u64 VAR_5,
     u64 VAR_6,
     int VAR_7)
{
 int VAR_8;
 struct ocfs2_xattr_bucket *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

 FUNC_0(VAR_5 == VAR_6);

 FUNC_9((unsigned long long)VAR_5,
        (unsigned long long)VAR_6,
        VAR_7);

 VAR_9 = FUNC_8(VAR_3);
 VAR_10 = FUNC_8(VAR_3);
 if (!VAR_9 || !VAR_10) {
  VAR_8 = -VAR_0;
  FUNC_1(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_3(VAR_9, VAR_5);
 if (VAR_8)
  goto out;





 VAR_8 = FUNC_2(VAR_10, VAR_6, VAR_7);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_6(VAR_4, VAR_10,
      VAR_7 ?
      VAR_1 :
      VAR_2);
 if (VAR_8)
  goto out;

 FUNC_4(VAR_10, VAR_9);
 FUNC_7(VAR_4, VAR_10);

out:
 FUNC_5(VAR_10);
 FUNC_5(VAR_9);

 return VAR_8;
}
