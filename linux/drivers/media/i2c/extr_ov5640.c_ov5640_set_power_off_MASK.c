
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int xclk; int supplies; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ov5640_dev*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ov5640_dev *VAR_1)
{
 FUNC_1(VAR_1, 0);
 FUNC_2(VAR_0, VAR_1->supplies);
 FUNC_0(VAR_1->xclk);
}
