
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {scalar_t__ pll_bypass; int clkrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ) ;
 struct ov7670_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4)
{
 struct ov7670_info *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_5->clkrc);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_4, VAR_3,
       VAR_5->pll_bypass ? VAR_0 : VAR_1);
}
