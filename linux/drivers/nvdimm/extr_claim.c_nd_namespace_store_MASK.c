
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int claim_class; int dev; } ;
struct device {int * parent; scalar_t__ driver; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;





 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct nd_namespace_common*,struct nd_namespace_common**) ;
 scalar_t__ FUNC_2 (struct nd_namespace_common*) ;
 int FUNC_3 (struct device*,char*,...) ;
 char* FUNC_4 (int *) ;
 struct device* FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char const*,size_t,int ) ;
 int VAR_7 ;
 int FUNC_12 (struct device*,struct nd_namespace_common**) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;
 struct nd_namespace_common* FUNC_17 (struct device*) ;

ssize_t FUNC_18(struct device *VAR_8,
  struct nd_namespace_common **VAR_9, const char *VAR_10,
  size_t VAR_11)
{
 struct nd_namespace_common *VAR_12;
 struct device *VAR_13;
 char *VAR_14;

 if (VAR_8->driver) {
  FUNC_3(VAR_8, "namespace already active\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_11(VAR_10, VAR_11, VAR_5);
 if (!VAR_14)
  return -VAR_3;
 FUNC_15(VAR_14);

 if (FUNC_16(VAR_14, "namespace", 9) == 0 || FUNC_14(VAR_14, "") == 0)
            ;
 else {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_12 = *VAR_9;
 if (FUNC_14(VAR_14, "") == 0) {
  FUNC_12(VAR_8, VAR_9);
  goto out;
 } else if (VAR_12) {
  FUNC_3(VAR_8, "namespace already set to: %s\n",
    FUNC_4(&VAR_12->dev));
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_13 = FUNC_5(VAR_8->parent, VAR_14, VAR_7);
 if (!VAR_13) {
  FUNC_3(VAR_8, "'%s' not found under %s\n", VAR_14,
    FUNC_4(VAR_8->parent));
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_12 = FUNC_17(VAR_13);

 switch (VAR_12->claim_class) {
 case 129:
  break;
 case 132:
 case 131:
  if (!FUNC_6(VAR_8)) {
   VAR_11 = -VAR_0;
   goto out_attach;
  }
  break;
 case 128:
  if (!FUNC_8(VAR_8)) {
   VAR_11 = -VAR_0;
   goto out_attach;
  }
  break;
 case 130:
  if (!FUNC_7(VAR_8)) {
   VAR_11 = -VAR_0;
   goto out_attach;
  }
  break;
 default:
  VAR_11 = -VAR_0;
  goto out_attach;
  break;
 }

 if (FUNC_2(VAR_12) < VAR_6) {
  FUNC_3(VAR_8, "%s too small to host\n", VAR_14);
  VAR_11 = -VAR_4;
  goto out_attach;
 }

 FUNC_0(!FUNC_9(VAR_8));
 if (!FUNC_1(VAR_8, VAR_12, VAR_9)) {
  FUNC_3(VAR_8, "%s already claimed\n",
    FUNC_4(&VAR_12->dev));
  VAR_11 = -VAR_0;
 }

 out_attach:
 FUNC_13(&VAR_12->dev);
 out:
 FUNC_10(VAR_14);
 return VAR_11;
}
