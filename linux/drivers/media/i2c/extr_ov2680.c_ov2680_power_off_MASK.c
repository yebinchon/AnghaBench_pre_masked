
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov2680_dev {int is_enabled; int supplies; int xvclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ov2680_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ov2680_dev *VAR_1)
{
 if (!VAR_1->is_enabled)
  return 0;

 FUNC_0(VAR_1->xvclk);
 FUNC_1(VAR_1);
 FUNC_2(VAR_0, VAR_1->supplies);
 VAR_1->is_enabled = 0;

 return 0;
}
