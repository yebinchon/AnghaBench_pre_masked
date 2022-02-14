
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {char* name; size_t len; } ;
struct inode {TYPE_1__ d_name; struct super_block* i_sb; } ;
struct dentry {TYPE_1__ d_name; struct super_block* i_sb; } ;
struct TYPE_4__ {int member_0; } ;
struct CodaFid {TYPE_2__ member_0; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct CodaFid*,struct super_block*) ;
 struct inode* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (char const*,size_t) ;
 struct inode* FUNC_8 (struct inode*,struct inode*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (char*,int ,size_t) ;
 int FUNC_11 (struct super_block*,int ,char const*,size_t,int*,struct CodaFid*) ;

__attribute__((used)) static struct dentry *FUNC_12(struct inode *VAR_6, struct dentry *VAR_7, unsigned int VAR_8)
{
 struct super_block *VAR_9 = VAR_6->i_sb;
 const char *VAR_10 = VAR_7->d_name.name;
 size_t VAR_11 = VAR_7->d_name.len;
 struct inode *VAR_12;
 int VAR_13 = 0;

 if (VAR_11 > VAR_0) {
  FUNC_10("name too long: lookup, %s %zu\n",
         FUNC_6(VAR_6), VAR_11);
  return FUNC_0(-VAR_4);
 }


 if (FUNC_9(VAR_6) && FUNC_7(VAR_10, VAR_11)) {
  VAR_12 = FUNC_3(VAR_9);
  VAR_13 = VAR_1;
 } else {
  struct CodaFid VAR_14 = { { 0, } };
  int VAR_15 = FUNC_11(VAR_9, FUNC_5(VAR_6), VAR_10, VAR_11,
         &VAR_13, &VAR_14);
  VAR_12 = !VAR_15 ? FUNC_2(&VAR_14, VAR_9) : FUNC_0(VAR_15);
 }

 if (!FUNC_1(VAR_12) && (VAR_13 & VAR_1))
  FUNC_4(VAR_12, VAR_3 | VAR_2);

 if (VAR_12 == FUNC_0(-VAR_5))
  VAR_12 = ((void*)0);

 return FUNC_8(VAR_12, VAR_7);
}
