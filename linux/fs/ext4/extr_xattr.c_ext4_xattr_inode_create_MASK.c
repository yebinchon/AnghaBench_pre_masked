
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u32 ;
struct inode {int i_flags; int * i_fop; int * i_op; scalar_t__ i_ino; TYPE_2__* i_sb; } ;
typedef int handle_t ;
struct TYPE_4__ {TYPE_1__* s_root; } ;
struct TYPE_3__ {int d_inode; } ;


 struct inode* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,struct inode*) ;
 struct inode* FUNC_6 (int *,int ,int,int *,scalar_t__,int *,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_17(handle_t *VAR_5,
          struct inode *VAR_6, u32 VAR_7)
{
 struct inode *VAR_8 = ((void*)0);
 uid_t VAR_9[2] = { FUNC_12(VAR_6), FUNC_11(VAR_6) };
 int VAR_10;





 VAR_8 = FUNC_6(VAR_5, VAR_6->i_sb->s_root->d_inode,
      VAR_1 | 0600, ((void*)0), VAR_6->i_ino + 1, VAR_9,
      VAR_0);
 if (!FUNC_1(VAR_8)) {
  VAR_8->i_op = &VAR_3;
  VAR_8->i_fop = &VAR_4;
  FUNC_7(VAR_8);
  FUNC_8(VAR_8);
  FUNC_16(VAR_8);
  FUNC_10(VAR_8, 1);
  FUNC_9(VAR_8, VAR_7);
  VAR_10 = FUNC_5(VAR_5, VAR_8);
  if (!VAR_10)
   VAR_10 = FUNC_4(VAR_8);
  if (VAR_10) {
   FUNC_15(VAR_8);
   return FUNC_0(VAR_10);
  }





  FUNC_3(VAR_8);
  FUNC_2(VAR_8);
  FUNC_13(VAR_8);
  VAR_8->i_flags |= VAR_2;
  FUNC_14(VAR_8);
 }

 return VAR_8;
}
