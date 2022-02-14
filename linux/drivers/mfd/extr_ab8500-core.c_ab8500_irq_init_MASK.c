
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct ab8500 {TYPE_1__* dev; int domain; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int,int ,int *,struct ab8500*) ;
 scalar_t__ FUNC_2 (struct ab8500*) ;
 scalar_t__ FUNC_3 (struct ab8500*) ;
 scalar_t__ FUNC_4 (struct ab8500*) ;

__attribute__((used)) static int FUNC_5(struct ab8500 *VAR_6, struct device_node *VAR_7)
{
 int VAR_8;

 if (FUNC_3(VAR_6))
  VAR_8 = VAR_2;
 else if (FUNC_4(VAR_6))
  VAR_8 = VAR_3;
 else if (FUNC_2(VAR_6))
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_0;


 VAR_6->domain = FUNC_1(VAR_6->dev->of_node,
            VAR_8, 0,
            &VAR_5, VAR_6);

 if (!VAR_6->domain) {
  FUNC_0(VAR_6->dev, "Failed to create irqdomain\n");
  return -VAR_4;
 }

 return 0;
}
