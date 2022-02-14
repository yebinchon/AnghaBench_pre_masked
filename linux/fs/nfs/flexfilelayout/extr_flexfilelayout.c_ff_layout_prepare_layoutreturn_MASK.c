
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_layoutreturn_args {TYPE_2__* ld_private; TYPE_1__* inode; int range; int layout; } ;
struct nfs4_flexfile_layoutreturn_args {int * devinfo; int num_dev; int errors; int num_errors; int * pages; } ;
struct nfs4_flexfile_layout {int generic_hdr; } ;
struct TYPE_4__ {struct nfs4_flexfile_layoutreturn_args* data; int * ops; } ;
struct TYPE_3__ {int i_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_flexfile_layout* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (struct nfs4_flexfile_layoutreturn_args*) ;
 struct nfs4_flexfile_layoutreturn_args* FUNC_7 (int,int ) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct nfs4_layoutreturn_args *VAR_4)
{
 struct nfs4_flexfile_layoutreturn_args *VAR_5;
 struct nfs4_flexfile_layout *VAR_6 = FUNC_1(VAR_4->layout);

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  goto out_nomem;
 VAR_5->pages[0] = FUNC_3(VAR_2);
 if (!VAR_5->pages[0])
  goto out_nomem_free;

 FUNC_2(&VAR_5->errors);
 VAR_5->num_errors = FUNC_4(VAR_4->layout,
   &VAR_4->range, &VAR_5->errors,
   VAR_1);

 FUNC_8(&VAR_4->inode->i_lock);
 VAR_5->num_dev = FUNC_5(&VAR_6->generic_hdr,
   &VAR_5->devinfo[0], FUNC_0(VAR_5->devinfo));
 FUNC_9(&VAR_4->inode->i_lock);

 VAR_4->ld_private->ops = &VAR_3;
 VAR_4->ld_private->data = VAR_5;
 return 0;
out_nomem_free:
 FUNC_6(VAR_5);
out_nomem:
 return -VAR_0;
}
