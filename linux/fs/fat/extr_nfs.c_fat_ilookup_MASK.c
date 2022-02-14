
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_3__ {scalar_t__ nfs; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 struct inode* FUNC_1 (struct super_block*,int ) ;
 struct inode* FUNC_2 (struct super_block*,scalar_t__) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_3, u64 VAR_4, loff_t VAR_5)
{
 if (FUNC_0(VAR_3)->options.nfs == VAR_0)
  return FUNC_1(VAR_3, VAR_5);

 else {
  if ((VAR_4 < VAR_2) || (VAR_4 == VAR_1))
   return ((void*)0);
  return FUNC_2(VAR_3, VAR_4);
 }
}
