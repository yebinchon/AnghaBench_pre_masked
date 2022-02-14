
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fh {int len; } ;
struct dentry {int d_sb; } ;


 scalar_t__ FUNC_0 (struct ovl_fh const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ovl_fh const*) ;
 int FUNC_2 (struct ovl_fh const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct dentry*,int ,struct ovl_fh const*,int ,int ) ;
 struct ovl_fh* FUNC_5 (struct dentry*,int) ;

int FUNC_6(struct dentry *VAR_1, struct dentry *VAR_2,
     struct dentry *VAR_3)
{
 const struct ovl_fh *VAR_4 = ((void*)0);
 int VAR_5;






 if (FUNC_3(VAR_2->d_sb)) {
  VAR_4 = FUNC_5(VAR_2, 0);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);
 }




 VAR_5 = FUNC_4(VAR_1, VAR_3, VAR_0, VAR_4,
     VAR_4 ? VAR_4->len : 0, 0);
 FUNC_2(VAR_4);

 return VAR_5;
}
