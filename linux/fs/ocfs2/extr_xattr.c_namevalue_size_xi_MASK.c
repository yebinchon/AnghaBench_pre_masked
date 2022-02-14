
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_info {int xi_value_len; int xi_name_len; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_xattr_info *VAR_0)
{
 return FUNC_0(VAR_0->xi_name_len, VAR_0->xi_value_len);
}
