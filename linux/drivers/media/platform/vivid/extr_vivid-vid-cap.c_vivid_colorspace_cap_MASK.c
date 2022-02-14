
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int colorspace_out; int tpg; int loop_video; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vivid_dev*) ;
 scalar_t__ FUNC_2 (struct vivid_dev*) ;

__attribute__((used)) static unsigned FUNC_3(struct vivid_dev *VAR_0)
{
 if (!VAR_0->loop_video || FUNC_2(VAR_0) || FUNC_1(VAR_0))
  return FUNC_0(&VAR_0->tpg);
 return VAR_0->colorspace_out;
}
