
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;
struct TYPE_2__ {unsigned long mi_entries_per_block; unsigned long mi_entry_size; } ;


 TYPE_1__* FUNC_0 (struct inode const*) ;
 int FUNC_1 (struct buffer_head const*) ;
 int FUNC_2 (struct inode const*,int ,unsigned long*) ;

void *FUNC_3(const struct inode *VAR_0, __u64 VAR_1,
       const struct buffer_head *VAR_2, void *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 FUNC_2(VAR_0, VAR_1, &VAR_5);
 VAR_4 = VAR_5 % FUNC_0(VAR_0)->mi_entries_per_block;

 return VAR_3 + FUNC_1(VAR_2) +
  VAR_4 * FUNC_0(VAR_0)->mi_entry_size;
}
