
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_5__ {int generation; } ;
struct kernfs_node {int flags; TYPE_3__ attr; int mode; TYPE_2__ id; } ;
struct inode {int * i_op; int * i_fop; int i_size; int i_generation; TYPE_1__* i_mapping; struct kernfs_node* i_private; } ;
struct TYPE_4__ {int * a_ops; } ;


 int FUNC_0 () ;

 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct kernfs_node*) ;
 int VAR_5 ;
 int FUNC_2 (struct kernfs_node*,struct inode*) ;
 int VAR_6 ;
 int FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static void FUNC_7(struct kernfs_node *VAR_7, struct inode *VAR_8)
{
 FUNC_1(VAR_7);
 VAR_8->i_private = VAR_7;
 VAR_8->i_mapping->a_ops = &VAR_1;
 VAR_8->i_op = &VAR_5;
 VAR_8->i_generation = VAR_7->id.generation;

 FUNC_5(VAR_8, VAR_7->mode);
 FUNC_2(VAR_7, VAR_8);


 switch (FUNC_3(VAR_7)) {
 case 130:
  VAR_8->i_op = &VAR_3;
  VAR_8->i_fop = &VAR_2;
  if (VAR_7->flags & VAR_0)
   FUNC_4(VAR_8);
  break;
 case 129:
  VAR_8->i_size = VAR_7->attr.size;
  VAR_8->i_fop = &VAR_4;
  break;
 case 128:
  VAR_8->i_op = &VAR_6;
  break;
 default:
  FUNC_0();
 }

 FUNC_6(VAR_8);
}
