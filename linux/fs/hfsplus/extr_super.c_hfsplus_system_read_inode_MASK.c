
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_mapping; int i_sb; } ;
struct hfsplus_vh {int attr_file; int start_file; int alloc_file; int cat_file; int ext_file; } ;
struct TYPE_4__ {struct hfsplus_vh* s_vhdr; } ;
struct TYPE_3__ {int * a_ops; } ;


 int VAR_0 ;




 TYPE_2__* FUNC_0 (int ) ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3)
{
 struct hfsplus_vh *VAR_4 = FUNC_0(VAR_3->i_sb)->s_vhdr;

 switch (VAR_3->i_ino) {
 case 129:
  FUNC_1(VAR_3, &VAR_4->ext_file);
  VAR_3->i_mapping->a_ops = &VAR_2;
  break;
 case 130:
  FUNC_1(VAR_3, &VAR_4->cat_file);
  VAR_3->i_mapping->a_ops = &VAR_2;
  break;
 case 132:
  FUNC_1(VAR_3, &VAR_4->alloc_file);
  VAR_3->i_mapping->a_ops = &VAR_1;
  break;
 case 128:
  FUNC_1(VAR_3, &VAR_4->start_file);
  break;
 case 131:
  FUNC_1(VAR_3, &VAR_4->attr_file);
  VAR_3->i_mapping->a_ops = &VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
