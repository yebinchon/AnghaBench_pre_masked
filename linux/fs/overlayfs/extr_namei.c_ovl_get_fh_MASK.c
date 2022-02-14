
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fh {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ovl_fh* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ovl_fh*) ;
 struct ovl_fh* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ovl_fh*,int) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (struct dentry*,char const*,struct ovl_fh*,int) ;

__attribute__((used)) static struct ovl_fh *FUNC_6(struct dentry *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 struct ovl_fh *VAR_8 = ((void*)0);

 VAR_6 = FUNC_5(VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_0 || VAR_6 == -VAR_2)
   return ((void*)0);
  goto fail;
 }

 if (VAR_6 == 0)
  return ((void*)0);

 VAR_8 = FUNC_2(VAR_6, VAR_3);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_8, VAR_6);
 if (VAR_6 < 0)
  goto fail;

 VAR_7 = FUNC_3(VAR_8, VAR_6);
 if (VAR_7 < 0) {
  if (VAR_7 == -VAR_0)
   goto out;
  goto invalid;
 }

 return VAR_8;

out:
 FUNC_1(VAR_8);
 return ((void*)0);

fail:
 FUNC_4("overlayfs: failed to get origin (%i)\n", VAR_6);
 goto out;
invalid:
 FUNC_4("overlayfs: invalid origin (%*phN)\n", VAR_6, VAR_8);
 goto out;
}
