
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_clk {int use_count; struct v4l2_clk* clk; } ;
struct device {scalar_t__ of_node; } ;
struct clk {int use_count; struct clk* clk; } ;
typedef int clk_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_clk* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct v4l2_clk*) ;
 int FUNC_2 (struct v4l2_clk*) ;
 int FUNC_3 (struct v4l2_clk*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 struct v4l2_clk* FUNC_5 (struct device*,char const*) ;
 int VAR_5 ;
 int FUNC_6 (struct v4l2_clk*) ;
 char* FUNC_7 (struct device*) ;
 struct v4l2_clk* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct v4l2_clk* FUNC_11 (char*) ;
 int FUNC_12 (char*,int,scalar_t__) ;

struct v4l2_clk *FUNC_13(struct device *VAR_6, const char *VAR_7)
{
 struct v4l2_clk *VAR_8;
 struct clk *VAR_9 = FUNC_5(VAR_6, VAR_7);
 char VAR_10[VAR_4];

 if (FUNC_3(VAR_9) == -VAR_2)
  return FUNC_0(-VAR_2);

 if (!FUNC_2(VAR_9)) {
  VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_3);
  if (!VAR_8) {
   FUNC_6(VAR_9);
   return FUNC_0(-VAR_1);
  }
  VAR_8->clk = VAR_9;

  return VAR_8;
 }

 FUNC_9(&VAR_5);
 VAR_8 = FUNC_11(FUNC_7(VAR_6));


 if (FUNC_3(VAR_8) == -VAR_0 && VAR_6->of_node) {
  FUNC_12(VAR_10, sizeof(VAR_10), VAR_6->of_node);
  VAR_8 = FUNC_11(VAR_10);
 }

 if (!FUNC_1(VAR_8))
  FUNC_4(&VAR_8->use_count);
 FUNC_10(&VAR_5);

 return VAR_8;
}
