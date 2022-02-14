
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {struct device* ns_seed; int id; int ns_ida; int dev; } ;
struct nd_namespace_pmem {int id; } ;
struct nd_namespace_blk {int id; } ;
struct device {int groups; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct device** FUNC_0 (struct nd_region*) ;
 struct device** FUNC_1 (struct nd_region*) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct nd_region*) ;
 int FUNC_6 (struct device**) ;
 int FUNC_7 (struct device*) ;
 int VAR_2 ;
 int FUNC_8 (struct nd_region*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device*) ;
 struct nd_namespace_blk* FUNC_12 (struct device*) ;
 struct nd_namespace_pmem* FUNC_13 (struct device*) ;

int FUNC_14(struct nd_region *VAR_3, int *VAR_4)
{
 struct device **VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = 0, VAR_8;

 *VAR_4 = 0;
 FUNC_9(&VAR_3->dev);
 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7) {
  FUNC_10(&VAR_3->dev);
  return VAR_7;
 }

 VAR_8 = FUNC_8(VAR_3);
 switch (VAR_8) {
 case 129:
  VAR_5 = FUNC_0(VAR_3);
  break;
 case 128:
 case 130:
  VAR_5 = FUNC_1(VAR_3);
  break;
 default:
  break;
 }
 FUNC_10(&VAR_3->dev);

 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_5[VAR_6]; VAR_6++) {
  struct device *VAR_9 = VAR_5[VAR_6];
  int VAR_10;

  if (VAR_8 == 130) {
   struct nd_namespace_blk *VAR_11;

   VAR_11 = FUNC_12(VAR_9);
   VAR_10 = FUNC_4(&VAR_3->ns_ida, 0, 0,
     VAR_1);
   VAR_11->id = VAR_10;
  } else if (VAR_8 == 128) {
   struct nd_namespace_pmem *VAR_12;

   VAR_12 = FUNC_13(VAR_9);
   VAR_10 = FUNC_4(&VAR_3->ns_ida, 0, 0,
     VAR_1);
   VAR_12->id = VAR_10;
  } else
   VAR_10 = VAR_6;

  if (VAR_10 < 0)
   break;
  FUNC_2(VAR_9, "namespace%d.%d", VAR_3->id, VAR_10);
  VAR_9->groups = VAR_2;
  FUNC_7(VAR_9);
 }
 if (VAR_6)
  VAR_3->ns_seed = VAR_5[0];

 if (VAR_5[VAR_6]) {
  int VAR_13;

  for (VAR_13 = VAR_6; VAR_5[VAR_13]; VAR_13++) {
   struct device *VAR_14 = VAR_5[VAR_13];

   FUNC_3(VAR_14);
   FUNC_11(VAR_14);
  }
  *VAR_4 = VAR_13 - VAR_6;




  if (*VAR_4 == 0)
   VAR_7 = -VAR_0;
 }
 FUNC_6(VAR_5);

 if (VAR_7 == -VAR_0)
  return VAR_7;

 return VAR_6;
}
