
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3533 {int dev; } ;
typedef enum lm3533_boost_ovp { ____Placeholder_lm3533_boost_ovp } lm3533_boost_ovp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lm3533*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct lm3533 *VAR_3,
      enum lm3533_boost_ovp VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2,
     VAR_4 << VAR_1,
     VAR_0);
 if (VAR_5)
  FUNC_0(VAR_3->dev, "failed to set boost ovp\n");

 return VAR_5;
}
