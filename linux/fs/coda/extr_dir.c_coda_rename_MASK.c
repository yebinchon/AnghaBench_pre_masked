
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,int ,int ,int,int,char const*,char const*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2, struct dentry *VAR_3,
         struct inode *VAR_4, struct dentry *VAR_5,
         unsigned int VAR_6)
{
 const char *VAR_7 = VAR_3->d_name.name;
 const char *VAR_8 = VAR_5->d_name.name;
 int VAR_9 = VAR_3->d_name.len;
 int VAR_10 = VAR_5->d_name.len;
 int VAR_11;

 if (VAR_6)
  return -VAR_1;

 VAR_11 = FUNC_8(VAR_2->i_sb, FUNC_4(VAR_2),
        FUNC_4(VAR_4), VAR_9, VAR_10,
        (const char *) VAR_7, (const char *)VAR_8);
 if (!VAR_11) {
  if (FUNC_7(VAR_5)) {
   if (FUNC_6(VAR_5)) {
    FUNC_0(VAR_2);
    FUNC_1(VAR_4);
   }
   FUNC_2(VAR_2);
   FUNC_2(VAR_4);
   FUNC_3(FUNC_5(VAR_5), VAR_0);
  } else {
   FUNC_3(VAR_2, VAR_0);
   FUNC_3(VAR_4, VAR_0);
  }
 }
 return VAR_11;
}
