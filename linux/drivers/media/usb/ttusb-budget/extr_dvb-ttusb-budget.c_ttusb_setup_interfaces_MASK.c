
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusb {int dev; int isoc_in_pipe; int bulk_in_pipe; int bulk_out_pipe; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct ttusb *VAR_0)
{
 FUNC_2(VAR_0->dev, 1, 1);

 VAR_0->bulk_out_pipe = FUNC_3(VAR_0->dev, 1);
 VAR_0->bulk_in_pipe = FUNC_0(VAR_0->dev, 1);
 VAR_0->isoc_in_pipe = FUNC_1(VAR_0->dev, 2);

 return 0;
}
