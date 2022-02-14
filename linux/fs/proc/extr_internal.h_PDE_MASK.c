
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct proc_dir_entry* pde; } ;


 TYPE_1__* FUNC_0 (struct inode const*) ;

__attribute__((used)) static inline struct proc_dir_entry *FUNC_1(const struct inode *VAR_0)
{
 return FUNC_0(VAR_0)->pde;
}
