
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int upside_down; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ov5640_dev*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct ov5640_dev *VAR_1, int VAR_2)
{







 return FUNC_1(VAR_1, VAR_0,
         FUNC_0(2) | FUNC_0(1),
         (VAR_2 ^ VAR_1->upside_down) ?
         (FUNC_0(2) | FUNC_0(1)) : 0);
}
