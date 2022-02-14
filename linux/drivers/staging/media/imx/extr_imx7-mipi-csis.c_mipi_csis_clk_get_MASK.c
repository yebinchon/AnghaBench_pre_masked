
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct csi_state {unsigned int num_clks; int clk_frequency; int wrap_clk; TYPE_2__* clks; TYPE_1__* pdev; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {struct device dev; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device*,char*,int ,int) ;
 int FUNC_5 (struct device*,unsigned int,TYPE_2__*) ;
 int FUNC_6 (struct device*,char*) ;
 TYPE_2__* FUNC_7 (struct device*,unsigned int,int,int ) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_8(struct csi_state *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 unsigned int VAR_5;
 int VAR_6;

 VAR_3->num_clks = FUNC_0(VAR_2);
 VAR_3->clks = FUNC_7(VAR_4, VAR_3->num_clks, sizeof(*VAR_3->clks),
       VAR_1);

 if (!VAR_3->clks)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_clks; VAR_5++)
  VAR_3->clks[VAR_5].id = VAR_2[VAR_5];

 VAR_6 = FUNC_5(VAR_4, VAR_3->num_clks, VAR_3->clks);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->wrap_clk = FUNC_6(VAR_4, "wrap");
 if (FUNC_1(VAR_3->wrap_clk))
  return FUNC_2(VAR_3->wrap_clk);


 VAR_6 = FUNC_3(VAR_3->wrap_clk, VAR_3->clk_frequency);
 if (VAR_6 < 0)
  FUNC_4(VAR_4, "set rate=%d failed: %d\n", VAR_3->clk_frequency,
   VAR_6);

 return VAR_6;
}
