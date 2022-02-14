
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_hdr {int dummy; } ;
struct pnfs_ds_commit_info {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct pnfs_ds_commit_info commit_info; } ;
struct TYPE_3__ {struct pnfs_layout_hdr* layout; } ;


 TYPE_2__* FUNC_0 (struct pnfs_layout_hdr*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;

__attribute__((used)) static struct pnfs_ds_commit_info *
FUNC_2(struct inode *VAR_0)
{
 struct pnfs_layout_hdr *VAR_1 = FUNC_1(VAR_0)->layout;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 return &FUNC_0(VAR_1)->commit_info;
}
