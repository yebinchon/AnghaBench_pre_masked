
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct clk_init_data const* init; } ;
struct qmp {TYPE_1__ qdss_clk; TYPE_2__* dev; } ;
struct clk_init_data {char* name; int * ops; } ;
struct TYPE_7__ {int of_node; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct qmp *VAR_2)
{
 static const struct clk_init_data VAR_3 = {
  .ops = &VAR_1,
  .name = "qdss",
 };
 int VAR_4;

 VAR_2->qdss_clk.init = &VAR_3;
 VAR_4 = FUNC_0(VAR_2->dev, &VAR_2->qdss_clk);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2->dev, "failed to register qdss clock\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_2->dev->of_node, VAR_0,
         &VAR_2->qdss_clk);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2->dev, "unable to register of clk hw provider\n");
  FUNC_1(&VAR_2->qdss_clk);
 }

 return VAR_4;
}
