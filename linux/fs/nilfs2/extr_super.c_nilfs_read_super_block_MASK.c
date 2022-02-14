
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct super_block {int dummy; } ;
struct nilfs_super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 unsigned long FUNC_0 (unsigned long long,int) ;
 struct buffer_head* FUNC_1 (struct super_block*,unsigned long long) ;

struct nilfs_super_block *FUNC_2(struct super_block *VAR_0,
       u64 VAR_1, int VAR_2,
       struct buffer_head **VAR_3)
{
 unsigned long long VAR_4 = VAR_1;
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 *VAR_3 = FUNC_1(VAR_0, VAR_4);
 if (!*VAR_3)
  return ((void*)0);
 return (struct nilfs_super_block *)((char *)(*VAR_3)->b_data + VAR_5);
}
