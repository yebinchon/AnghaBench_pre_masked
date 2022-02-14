
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int delegation; } ;


 TYPE_1__* FUNC_0 (struct inode const*) ;
 scalar_t__ FUNC_1 (struct nfs_delegation*,int ) ;
 struct nfs_delegation* FUNC_2 (int ) ;

struct nfs_delegation *FUNC_3(const struct inode *VAR_0)
{
 struct nfs_delegation *VAR_1;

 VAR_1 = FUNC_2(FUNC_0(VAR_0)->delegation);
 if (FUNC_1(VAR_1, 0))
  return VAR_1;
 return ((void*)0);
}
