
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct delayed_call*) ;
 int FUNC_3 (struct delayed_call*) ;
 char* FUNC_4 (struct dentry*,struct inode*,struct delayed_call*) ;

__attribute__((used)) static const char *FUNC_5(struct dentry *VAR_1,
     struct inode *VAR_2,
     struct delayed_call *VAR_3)
{
 const char *VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (!FUNC_1(VAR_4) && !*VAR_4) {

  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
  VAR_4 = FUNC_0(-VAR_0);
 }
 return VAR_4;
}
