
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_xattr_entry {int xe_name_len; int xe_value_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ocfs2_xattr_entry*) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_xattr_entry *VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_1->xe_value_size);

 FUNC_0((VAR_2 > VAR_0) &&
        FUNC_3(VAR_1));
 return FUNC_2(VAR_1->xe_name_len, VAR_2);
}
