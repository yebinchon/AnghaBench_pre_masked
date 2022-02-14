
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct regulator_dev {TYPE_2__ dev; TYPE_1__* constraints; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int* max_spread; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,struct device_node*,int*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,char*,int) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int,int*) ;

bool FUNC_7(struct regulator_dev *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev.of_node;
 int VAR_2 = FUNC_3(VAR_0);
 struct device_node *VAR_3;
 int VAR_4;
 int VAR_5;
 bool VAR_6 = 1;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  int VAR_7 = VAR_0->constraints->max_spread[VAR_5];
  int VAR_8, VAR_9;

  if (VAR_7 <= 0) {
   FUNC_0(&VAR_0->dev, "max_spread value invalid\n");
   return 0;
  }

  VAR_3 = FUNC_5(VAR_1,
       "regulator-coupled-with", VAR_5);

  if (!VAR_3)
   VAR_6 = 0;

  VAR_9 = FUNC_1(VAR_3,
         "regulator-coupled-with",
         ((void*)0));

  if (VAR_9 != VAR_2) {
   FUNC_0(&VAR_0->dev, "number of coupled reg phandles mismatch\n");
   VAR_6 = 0;
   goto clean;
  }

  if (!FUNC_2(VAR_3, VAR_1, &VAR_4)) {
   FUNC_0(&VAR_0->dev, "missing 2-way linking for coupled regulators\n");
   VAR_6 = 0;
   goto clean;
  }

  if (FUNC_6(VAR_3, "regulator-coupled-max-spread",
            VAR_4, &VAR_8)) {
   VAR_6 = 0;
   goto clean;
  }

  if (VAR_8 != VAR_7) {
   FUNC_0(&VAR_0->dev,
    "coupled regulators max_spread mismatch\n");
   VAR_6 = 0;
   goto clean;
  }

clean:
  FUNC_4(VAR_3);
  if (!VAR_6)
   break;
 }

 return VAR_6;
}
