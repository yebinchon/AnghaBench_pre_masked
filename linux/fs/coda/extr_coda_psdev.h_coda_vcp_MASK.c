
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_comm {int dummy; } ;
struct super_block {scalar_t__ s_fs_info; } ;



__attribute__((used)) static inline struct venus_comm *FUNC_0(struct super_block *VAR_0)
{
 return (struct venus_comm *)((VAR_0)->s_fs_info);
}
