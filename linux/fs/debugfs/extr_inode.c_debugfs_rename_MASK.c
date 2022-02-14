
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_snapshot {int name; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (int ,int ,int *,int ,int *,struct dentry*) ;
 struct dentry* FUNC_11 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_12 (char const*,struct dentry*,int ) ;
 int FUNC_13 (struct name_snapshot*) ;
 int FUNC_14 (int ,struct dentry*,int ,struct dentry*,int ) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (struct name_snapshot*,struct dentry*) ;
 int FUNC_17 (struct dentry*,struct dentry*) ;

struct dentry *FUNC_18(struct dentry *VAR_1, struct dentry *VAR_2,
  struct dentry *VAR_3, const char *VAR_4)
{
 int VAR_5;
 struct dentry *VAR_6 = ((void*)0), *VAR_7;
 struct name_snapshot VAR_8;

 if (FUNC_1(VAR_1))
  return VAR_1;
 if (FUNC_1(VAR_3))
  return VAR_3;
 if (FUNC_2(VAR_2))
  return VAR_2;

 VAR_7 = FUNC_11(VAR_3, VAR_1);

 if (FUNC_7(VAR_1) || FUNC_7(VAR_3))
  goto exit;

 if (FUNC_7(VAR_2) || VAR_2 == VAR_7 ||
     FUNC_5(VAR_2))
  goto exit;
 VAR_6 = FUNC_12(VAR_4, VAR_3, FUNC_15(VAR_4));

 if (FUNC_1(VAR_6) || VAR_6 == VAR_7 || FUNC_8(VAR_6))
  goto exit;

 FUNC_16(&VAR_8, VAR_2);

 VAR_5 = FUNC_14(FUNC_3(VAR_1), VAR_2, FUNC_3(VAR_3),
         VAR_6, 0);
 if (VAR_5) {
  FUNC_13(&VAR_8);
  goto exit;
 }
 FUNC_6(VAR_2, VAR_6);
 FUNC_10(FUNC_3(VAR_1), FUNC_3(VAR_3), &VAR_8.name,
  FUNC_4(VAR_2),
  ((void*)0), VAR_2);
 FUNC_13(&VAR_8);
 FUNC_17(VAR_3, VAR_1);
 FUNC_9(VAR_6);
 return VAR_2;
exit:
 if (VAR_6 && !FUNC_1(VAR_6))
  FUNC_9(VAR_6);
 FUNC_17(VAR_3, VAR_1);
 if (FUNC_1(VAR_6))
  return VAR_6;
 return FUNC_0(-VAR_0);
}
