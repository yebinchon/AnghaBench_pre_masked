
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fh {int len; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct ovl_fh const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ovl_fh const*) ;
 int FUNC_2 (struct ovl_fh const*) ;
 int FUNC_3 (struct dentry*,int ,struct ovl_fh const*,int ,int ) ;
 struct ovl_fh* FUNC_4 (struct dentry*,int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_1, struct dentry *VAR_2)
{
 const struct ovl_fh *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(VAR_1, 1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_3(VAR_2, VAR_0, VAR_3, VAR_3->len, 0);

 FUNC_2(VAR_3);
 return VAR_4;
}
