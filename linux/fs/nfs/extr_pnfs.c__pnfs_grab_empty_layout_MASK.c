
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int plh_flags; } ;
struct nfs_open_context {int dummy; } ;
struct inode {int i_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct pnfs_layout_hdr*,int ) ;
 int FUNC_2 (struct pnfs_layout_hdr*) ;
 struct pnfs_layout_hdr* FUNC_3 (struct inode*,struct nfs_open_context*,int ) ;
 scalar_t__ FUNC_4 (struct pnfs_layout_hdr*) ;
 int FUNC_5 (struct pnfs_layout_hdr*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static struct pnfs_layout_hdr *
FUNC_10(struct inode *VAR_4, struct nfs_open_context *VAR_5)
{
 struct pnfs_layout_hdr *VAR_6;

 FUNC_6(&VAR_4->i_lock);
 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_0);
 if (!VAR_6)
  goto out_unlock;
 if (!FUNC_9(VAR_2, &VAR_6->plh_flags))
  goto out_unlock;
 if (FUNC_9(VAR_3, &VAR_6->plh_flags))
  goto out_unlock;
 if (FUNC_4(VAR_6))
  goto out_unlock;
 if (FUNC_8(VAR_1, &VAR_6->plh_flags))
  goto out_unlock;
 FUNC_2(VAR_6);
 FUNC_7(&VAR_4->i_lock);
 FUNC_1(VAR_6, FUNC_0(VAR_4));
 return VAR_6;

out_unlock:
 FUNC_7(&VAR_4->i_lock);
 FUNC_5(VAR_6);
 return ((void*)0);
}
