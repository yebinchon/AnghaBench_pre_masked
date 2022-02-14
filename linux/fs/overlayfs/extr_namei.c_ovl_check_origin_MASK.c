
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_path {int dummy; } ;
struct ovl_fs {int dummy; } ;
struct ovl_fh {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ovl_fh*) ;
 int VAR_2 ;
 int FUNC_1 (struct ovl_fh*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ovl_fh*) ;
 int FUNC_4 (struct ovl_fs*,struct ovl_fh*,int,struct dentry*,struct ovl_path**) ;
 struct ovl_fh* FUNC_5 (struct dentry*,int ) ;

__attribute__((used)) static int FUNC_6(struct ovl_fs *VAR_3, struct dentry *VAR_4,
       struct ovl_path **VAR_5, unsigned int *VAR_6)
{
 struct ovl_fh *VAR_7 = FUNC_5(VAR_4, VAR_2);
 int VAR_8;

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_4(VAR_3, VAR_7, 0, VAR_4, VAR_5);
 FUNC_3(VAR_7);

 if (VAR_8) {
  if (VAR_8 == -VAR_1)
   return 0;
  return VAR_8;
 }

 if (FUNC_2(*VAR_6))
  return -VAR_0;

 *VAR_6 = 1;
 return 0;
}
