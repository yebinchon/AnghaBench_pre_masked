
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {char* i_link; int i_sb; int i_mode; int * i_op; TYPE_2__* i_mapping; int i_blocks; int * i_fop; } ;
struct TYPE_5__ {scalar_t__ i_symlink; } ;
struct TYPE_7__ {TYPE_1__ i_u1; } ;
struct TYPE_6__ {int * a_ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ,int ) ;
 int FUNC_5 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_7)
{
 if (FUNC_2(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_5;
  VAR_7->i_fop = &VAR_6;
  VAR_7->i_mapping->a_ops = &VAR_2;
 } else if (FUNC_0(VAR_7->i_mode)) {
  VAR_7->i_op = &VAR_3;
  VAR_7->i_fop = &VAR_4;
  VAR_7->i_mapping->a_ops = &VAR_2;
 } else if (FUNC_1(VAR_7->i_mode)) {
  if (!VAR_7->i_blocks) {
   VAR_7->i_link = (char *)FUNC_3(VAR_7)->i_u1.i_symlink;
   VAR_7->i_op = &VAR_1;
  } else {
   VAR_7->i_mapping->a_ops = &VAR_2;
   VAR_7->i_op = &VAR_0;
   FUNC_5(VAR_7);
  }
 } else
  FUNC_4(VAR_7, VAR_7->i_mode,
       FUNC_6(VAR_7->i_sb, FUNC_3(VAR_7)));
}
