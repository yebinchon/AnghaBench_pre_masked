
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bdisp_dev {int slock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct bdisp_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct bdisp_dev *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_3(&VAR_2->slock, VAR_3);
 VAR_4 = FUNC_5(VAR_0, &VAR_2->state);
 FUNC_4(&VAR_2->slock, VAR_3);

 if (!VAR_4)
  return 0;

 if (!FUNC_2(VAR_1))
  return FUNC_0(VAR_1);

 return 0;
}
