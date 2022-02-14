
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int __u64 ;
struct TYPE_2__ {unsigned long mi_entries_per_block; } ;


 TYPE_1__* FUNC_0 (struct inode const*) ;
 unsigned long FUNC_1 (struct inode const*,unsigned long) ;
 unsigned long FUNC_2 (struct inode const*,int ,unsigned long*) ;

__attribute__((used)) static unsigned long
FUNC_3(const struct inode *VAR_0, __u64 VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_3);

 return FUNC_1(VAR_0, VAR_2) + 1 +
  VAR_3 / FUNC_0(VAR_0)->mi_entries_per_block;
}
