
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_3__ {int of_node; int * platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int ,int) ;
 int* FUNC_3 (int ,int ,scalar_t__*,int *) ;
 int* FUNC_4 (int ,char*,int *) ;
 scalar_t__ FUNC_5 (int ,int const*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 const u32 *VAR_2;
 u64 VAR_3, VAR_4;
 s16 VAR_5 = -1;

 VAR_2 = FUNC_3(VAR_1->dev.of_node, 0, &VAR_4, ((void*)0));
 if (!VAR_2) {
  FUNC_0(&VAR_1->dev, "Invalid PSC address\n");
  return -VAR_0;
 }
 VAR_3 = FUNC_5(VAR_1->dev.of_node, VAR_2);


 if (VAR_1->dev.platform_data == ((void*)0)) {
  const u32 *VAR_6;

  VAR_6 = FUNC_4(VAR_1->dev.of_node, "cell-index", ((void*)0));
  if (!VAR_6 || *VAR_6 > 5) {
   FUNC_0(&VAR_1->dev, "Invalid cell-index property\n");
   return -VAR_0;
  }
  VAR_5 = *VAR_6 + 1;
 }

 return FUNC_2(&VAR_1->dev, (u32)VAR_3, (u32)VAR_4,
    FUNC_1(VAR_1->dev.of_node, 0), VAR_5);
}
