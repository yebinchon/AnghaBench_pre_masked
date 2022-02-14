
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef unsigned long __u64 ;
struct TYPE_2__ {unsigned long mi_first_entry_offset; } ;


 TYPE_1__* FUNC_0 (struct inode const*) ;
 scalar_t__ FUNC_1 (struct inode const*) ;

__attribute__((used)) static __u64 FUNC_2(const struct inode *VAR_0,
          unsigned long VAR_1)
{
 return (__u64)FUNC_1(VAR_0) * VAR_1
  + 1 - FUNC_0(VAR_0)->mi_first_entry_offset;
}
