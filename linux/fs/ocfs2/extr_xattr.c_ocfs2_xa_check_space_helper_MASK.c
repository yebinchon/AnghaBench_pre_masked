
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_xattr_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3, int VAR_4,
           int VAR_5)
{
 int VAR_6;

 if (!VAR_3)
  return 0;

 VAR_6 = VAR_4 -
  sizeof(struct ocfs2_xattr_header) -
  (VAR_5 * sizeof(struct ocfs2_xattr_entry)) -
  VAR_2;
 if (VAR_6 < 0)
  return -VAR_0;
 if (VAR_6 < VAR_3)
  return -VAR_1;

 return 0;
}
