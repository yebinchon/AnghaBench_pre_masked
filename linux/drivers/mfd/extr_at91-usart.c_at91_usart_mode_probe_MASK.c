
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct mfd_cell {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct mfd_cell VAR_2 ;
 struct mfd_cell VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (int *,int ,struct mfd_cell const*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4)
{
 const struct mfd_cell *VAR_5;
 u32 VAR_6 = 129;

 FUNC_1(&VAR_4->dev, "atmel,usart-mode", &VAR_6);

 switch (VAR_6) {
 case 128:
  VAR_5 = &VAR_3;
  break;
 case 129:
  VAR_5 = &VAR_2;
  break;
 default:
  FUNC_0(&VAR_4->dev, "atmel,usart-mode has an invalid value %u\n",
   VAR_6);
  return -VAR_0;
 }

 return FUNC_2(&VAR_4->dev, VAR_1, VAR_5, 1,
         ((void*)0), 0, ((void*)0));
}
