
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ds1wm_data {int int_en_reg_none; TYPE_1__* pdev; int * write_complete; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ds1wm_data*,int ,int) ;
 unsigned long FUNC_3 (int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct ds1wm_data *VAR_6, u8 VAR_7)
{
 unsigned long VAR_8;
 FUNC_0(VAR_5);
 VAR_6->write_complete = &VAR_5;

 FUNC_2(VAR_6, VAR_2,
 VAR_6->int_en_reg_none | VAR_1);

 FUNC_2(VAR_6, VAR_0, VAR_7);

 VAR_8 = FUNC_3(&VAR_5, VAR_3);

 VAR_6->write_complete = ((void*)0);
 if (!VAR_8) {
  FUNC_1(&VAR_6->pdev->dev, "write failed, timed out\n");
  return -VAR_4;
 }

 return 0;
}
