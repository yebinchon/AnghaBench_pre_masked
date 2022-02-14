
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nd_region {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct nd_namespace_common {int claim_class; TYPE_1__ dev; scalar_t__ force_raw; } ;
struct nd_btt {int ndns; } ;
struct device {int dummy; } ;
struct btt_sb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct device* FUNC_0 (struct nd_region*,int ,int *,struct nd_namespace_common*) ;
 int FUNC_1 (struct nd_btt*,struct nd_namespace_common*,struct btt_sb*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 char* FUNC_3 (struct device*) ;
 struct btt_sb* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct device*) ;
 struct nd_btt* FUNC_9 (struct device*) ;
 struct nd_region* FUNC_10 (int ) ;

int FUNC_11(struct device *VAR_3, struct nd_namespace_common *VAR_4)
{
 int VAR_5;
 struct device *VAR_6;
 struct btt_sb *VAR_7;
 struct nd_region *VAR_8 = FUNC_10(VAR_4->dev.parent);

 if (VAR_4->force_raw)
  return -VAR_0;

 switch (VAR_4->claim_class) {
 case 128:
 case 130:
 case 129:
  break;
 default:
  return -VAR_0;
 }

 FUNC_6(&VAR_4->dev);
 VAR_6 = FUNC_0(VAR_8, 0, ((void*)0), VAR_4);
 FUNC_7(&VAR_4->dev);
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = FUNC_4(VAR_3, sizeof(*VAR_7), VAR_2);
 VAR_5 = FUNC_1(FUNC_9(VAR_6), VAR_4, VAR_7);
 FUNC_2(VAR_3, "btt: %s\n", VAR_5 == 0 ? FUNC_3(VAR_6) : "<none>");
 if (VAR_5 < 0) {
  struct nd_btt *VAR_9 = FUNC_9(VAR_6);

  FUNC_5(VAR_6, &VAR_9->ndns);
  FUNC_8(VAR_6);
 }

 return VAR_5;
}
