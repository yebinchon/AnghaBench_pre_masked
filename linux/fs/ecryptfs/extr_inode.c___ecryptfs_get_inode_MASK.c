
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {scalar_t__ i_sb; int i_state; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 struct inode* FUNC_2 (struct super_block*,unsigned long,int ,int ,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_5(struct inode *VAR_6,
       struct super_block *VAR_7)
{
 struct inode *VAR_8;

 if (VAR_6->i_sb != FUNC_1(VAR_7))
  return FUNC_0(-VAR_2);
 if (!FUNC_3(VAR_6))
  return FUNC_0(-VAR_1);
 VAR_8 = FUNC_2(VAR_7, (unsigned long)VAR_6,
        VAR_5, VAR_4,
        VAR_6);
 if (!VAR_8) {
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_0);
 }
 if (!(VAR_8->i_state & VAR_3))
  FUNC_4(VAR_6);

 return VAR_8;
}
