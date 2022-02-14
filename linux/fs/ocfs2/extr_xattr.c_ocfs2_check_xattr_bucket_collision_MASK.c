
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_xattr_header {TYPE_1__* xh_entries; int xh_count; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ xe_name_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ocfs2_xattr_bucket*) ;
 struct ocfs2_xattr_header* FUNC_1 (struct ocfs2_xattr_bucket*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,unsigned long long,scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*,char const*,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2,
           struct ocfs2_xattr_bucket *VAR_3,
           const char *VAR_4)
{
 struct ocfs2_xattr_header *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = FUNC_5(VAR_2, VAR_4, FUNC_6(VAR_4));

 if (VAR_6 != FUNC_3(VAR_5->xh_entries[0].xe_name_hash))
  return 0;

 if (VAR_5->xh_entries[FUNC_2(VAR_5->xh_count) - 1].xe_name_hash ==
     VAR_5->xh_entries[0].xe_name_hash) {
  FUNC_4(VAR_1, "Too much hash collision in xattr bucket %llu, "
       "hash = %u\n",
       (unsigned long long)FUNC_0(VAR_3),
       FUNC_3(VAR_5->xh_entries[0].xe_name_hash));
  return -VAR_0;
 }

 return 0;
}
