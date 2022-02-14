
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; } ;
struct erofs_inode {scalar_t__ datalayout; int flags; int z_logical_clusterbits; int * z_physical_clusterbits; scalar_t__* z_algorithmtype; scalar_t__ z_advise; } ;
struct TYPE_2__ {int * a_ops; } ;


 struct erofs_inode* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;

int FUNC_2(struct inode *VAR_4)
{
 struct erofs_inode *const VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->datalayout == VAR_0) {
  VAR_5->z_advise = 0;
  VAR_5->z_algorithmtype[0] = 0;
  VAR_5->z_algorithmtype[1] = 0;
  VAR_5->z_logical_clusterbits = VAR_2;
  VAR_5->z_physical_clusterbits[0] = VAR_5->z_logical_clusterbits;
  VAR_5->z_physical_clusterbits[1] = VAR_5->z_logical_clusterbits;
  FUNC_1(VAR_1, &VAR_5->flags);
 }

 VAR_4->i_mapping->a_ops = &VAR_3;
 return 0;
}
