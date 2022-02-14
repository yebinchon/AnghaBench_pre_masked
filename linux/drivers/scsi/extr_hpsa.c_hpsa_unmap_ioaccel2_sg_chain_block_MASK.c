
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ioaccel2_sg_element {int length; int address; } ;
struct io_accel2_cmd {struct ioaccel2_sg_element* sg; } ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_1,
 struct io_accel2_cmd *VAR_2)
{
 struct ioaccel2_sg_element *VAR_3;
 u64 VAR_4;
 u32 VAR_5;

 VAR_3 = VAR_2->sg;
 VAR_4 = FUNC_2(VAR_3->address);
 VAR_5 = FUNC_1(VAR_2->sg[0].length);
 FUNC_0(&VAR_1->pdev->dev, VAR_4, VAR_5, VAR_0);
}
