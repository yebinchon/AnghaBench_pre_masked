
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9v111_dev {int reset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mt9v111_dev *VAR_1)
{
 if (!VAR_1->reset)
  return -VAR_0;

 FUNC_0(VAR_1->reset, 1);
 FUNC_1(500, 1000);

 FUNC_0(VAR_1->reset, 0);
 FUNC_1(500, 1000);

 return 0;
}
