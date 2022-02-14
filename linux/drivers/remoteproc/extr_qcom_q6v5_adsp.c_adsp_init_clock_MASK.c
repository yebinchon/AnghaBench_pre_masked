
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_adsp {int num_clks; TYPE_1__* clks; int dev; int xo; } ;
struct TYPE_3__ {char const* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct qcom_adsp *VAR_3, const char **VAR_4)
{
 int VAR_5 = 0;
 int VAR_6, VAR_7;

 VAR_3->xo = FUNC_4(VAR_3->dev, "xo");
 if (FUNC_0(VAR_3->xo)) {
  VAR_7 = FUNC_1(VAR_3->xo);
  if (VAR_7 != -VAR_1)
   FUNC_2(VAR_3->dev, "failed to get xo clock");
  return VAR_7;
 }

 for (VAR_6 = 0; VAR_4[VAR_6]; VAR_6++)
  VAR_5++;

 VAR_3->num_clks = VAR_5;
 VAR_3->clks = FUNC_5(VAR_3->dev, VAR_3->num_clks,
    sizeof(*VAR_3->clks), VAR_2);
 if (!VAR_3->clks)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_clks; VAR_6++)
  VAR_3->clks[VAR_6].id = VAR_4[VAR_6];

 return FUNC_3(VAR_3->dev, VAR_3->num_clks, VAR_3->clks);
}
