
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int channel; } ;


 int FUNC_0 (struct lbs_private*) ;

int FUNC_1(struct lbs_private *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 > 0) {
  VAR_0->channel = VAR_1;
  VAR_1 = 0;
 }

 return VAR_1;
}
