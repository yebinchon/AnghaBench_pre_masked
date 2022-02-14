
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct module* owner; int get_rate; } ;
struct v4l2_clk_fixed {unsigned long rate; TYPE_1__ ops; } ;
struct v4l2_clk {int dummy; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 struct v4l2_clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct v4l2_clk*) ;
 int VAR_2 ;
 int FUNC_2 (struct v4l2_clk_fixed*) ;
 struct v4l2_clk_fixed* FUNC_3 (int,int ) ;
 struct v4l2_clk* FUNC_4 (TYPE_1__*,char const*,struct v4l2_clk_fixed*) ;

struct v4l2_clk *FUNC_5(const char *VAR_3,
    unsigned long VAR_4, struct module *VAR_5)
{
 struct v4l2_clk *VAR_6;
 struct v4l2_clk_fixed *VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->rate = VAR_4;
 VAR_7->ops.get_rate = VAR_2;
 VAR_7->ops.owner = VAR_5;

 VAR_6 = FUNC_4(&VAR_7->ops, VAR_3, VAR_7);
 if (FUNC_1(VAR_6))
  FUNC_2(VAR_7);

 return VAR_6;
}
