
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_buffer_head {int dummy; } ;
struct ufs_cg_private_info {struct ufs_buffer_head c_ubh; } ;



__attribute__((used)) static inline struct ufs_buffer_head *FUNC_0(struct ufs_cg_private_info *VAR_0)
{
 return &VAR_0->c_ubh;
}
