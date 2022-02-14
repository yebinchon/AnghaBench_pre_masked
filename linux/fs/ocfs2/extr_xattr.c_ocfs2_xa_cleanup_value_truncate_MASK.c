
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xa_loc {TYPE_1__* xl_entry; } ;
struct TYPE_2__ {int xe_name_len; int xe_name_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,char*,...) ;
 char* FUNC_2 (struct ocfs2_xa_loc*,int ) ;
 int FUNC_3 (struct ocfs2_xa_loc*) ;
 unsigned int FUNC_4 (struct ocfs2_xa_loc*) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_xa_loc *VAR_1,
         const char *VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_1);
 char *VAR_5 = FUNC_2(VAR_1,
    FUNC_0(VAR_1->xl_entry->xe_name_offset));

 if (VAR_4 < VAR_3) {
  FUNC_1(VAR_0,
       "Partial truncate while %s xattr %.*s.  Leaking "
       "%u clusters and removing the entry\n",
       VAR_2, VAR_1->xl_entry->xe_name_len, VAR_5,
       VAR_3 - VAR_4);
  FUNC_3(VAR_1);
 } else if (!VAR_3) {
  FUNC_1(VAR_0,
       "Unable to allocate an external value for xattr "
       "%.*s safely.  Leaking %u clusters and removing the "
       "entry\n",
       VAR_1->xl_entry->xe_name_len, VAR_5,
       VAR_4 - VAR_3);
  FUNC_3(VAR_1);
 } else if (VAR_4 > VAR_3)
  FUNC_1(VAR_0,
       "Unable to grow xattr %.*s safely.  %u new clusters "
       "have been added, but the value will not be "
       "modified\n",
       VAR_1->xl_entry->xe_name_len, VAR_5,
       VAR_4 - VAR_3);
}
