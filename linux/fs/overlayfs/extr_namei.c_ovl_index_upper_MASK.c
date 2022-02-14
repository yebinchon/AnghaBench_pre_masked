
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_fs {int upper_mnt; } ;
struct ovl_fh {int dummy; } ;
typedef struct ovl_fh dentry ;


 int VAR_0 ;
 struct ovl_fh* FUNC_0 (struct ovl_fh*) ;
 struct ovl_fh* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ovl_fh*) ;
 int VAR_2 ;
 int FUNC_3 (struct ovl_fh*) ;
 struct ovl_fh* FUNC_4 (struct ovl_fh*) ;
 int FUNC_5 (struct ovl_fh*) ;
 int FUNC_6 (struct ovl_fh*) ;
 struct ovl_fh* FUNC_7 (struct ovl_fh*,int ,int) ;
 struct ovl_fh* FUNC_8 (struct ovl_fh*,int ) ;
 int FUNC_9 (char*,struct ovl_fh*,struct ovl_fh*) ;

struct dentry *FUNC_10(struct ovl_fs *VAR_3, struct dentry *VAR_4)
{
 struct ovl_fh *VAR_5;
 struct dentry *VAR_6;

 if (!FUNC_3(VAR_4))
  return FUNC_4(VAR_4);

 VAR_5 = FUNC_8(VAR_4, VAR_2);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 VAR_6 = FUNC_7(VAR_5, VAR_3->upper_mnt, 1);
 FUNC_6(VAR_5);

 if (FUNC_2(VAR_6))
  return VAR_6 ?: FUNC_1(-VAR_1);

 if (!FUNC_3(VAR_6)) {
  FUNC_9("overlayfs: invalid index upper (%pd2, upper=%pd2).\n",
        VAR_4, VAR_6);
  FUNC_5(VAR_6);
  return FUNC_1(-VAR_0);
 }

 return VAR_6;
}
