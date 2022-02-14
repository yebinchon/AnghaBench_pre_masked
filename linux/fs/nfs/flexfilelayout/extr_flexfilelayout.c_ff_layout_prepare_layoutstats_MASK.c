
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_flexfile_layout {int generic_hdr; } ;
struct nfs42_layoutstat_args {int * devinfo; int num_dev; TYPE_2__* inode; } ;
struct TYPE_4__ {int i_lock; } ;
struct TYPE_3__ {int layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_flexfile_layout* FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int const) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int const,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct nfs42_layoutstat_args *VAR_4)
{
 struct nfs4_flexfile_layout *VAR_5;
 const int VAR_6 = VAR_3;


 VAR_4->devinfo = FUNC_4(VAR_6, sizeof(*VAR_4->devinfo), VAR_2);
 if (!VAR_4->devinfo)
  return -VAR_1;

 FUNC_5(&VAR_4->inode->i_lock);
 VAR_5 = FUNC_0(FUNC_1(VAR_4->inode)->layout);
 VAR_4->num_dev = FUNC_2(&VAR_5->generic_hdr,
   &VAR_4->devinfo[0], VAR_6);
 FUNC_6(&VAR_4->inode->i_lock);
 if (!VAR_4->num_dev) {
  FUNC_3(VAR_4->devinfo);
  VAR_4->devinfo = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
