
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int close; int open; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct input_dev*,int ,int,int,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_6)
{
 FUNC_1(VAR_3, VAR_6->evbit);
 FUNC_0(VAR_6, VAR_0, -255, 255, 16, 0);
 FUNC_0(VAR_6, VAR_1, -255, 255, 16, 0);
 FUNC_0(VAR_6, VAR_2, -255, 255, 16, 0);
 VAR_6->open = VAR_5;
 VAR_6->close = VAR_4;
}
