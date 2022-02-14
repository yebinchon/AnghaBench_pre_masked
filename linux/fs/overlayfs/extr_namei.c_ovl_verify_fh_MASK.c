
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fh {scalar_t__ len; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ovl_fh*) ;
 int FUNC_1 (struct ovl_fh*) ;
 int FUNC_2 (struct ovl_fh*) ;
 scalar_t__ FUNC_3 (struct ovl_fh const*,struct ovl_fh*,scalar_t__) ;
 struct ovl_fh* FUNC_4 (struct dentry*,char const*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2, const char *VAR_3,
    const struct ovl_fh *VAR_4)
{
 struct ovl_fh *VAR_5 = FUNC_4(VAR_2, VAR_3);
 int VAR_6 = 0;

 if (!VAR_5)
  return -VAR_0;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_4->len != VAR_5->len || FUNC_3(VAR_4, VAR_5, VAR_4->len))
  VAR_6 = -VAR_1;

 FUNC_2(VAR_5);
 return VAR_6;
}
