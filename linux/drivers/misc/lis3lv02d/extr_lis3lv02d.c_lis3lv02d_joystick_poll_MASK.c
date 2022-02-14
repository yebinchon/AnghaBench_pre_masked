
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int mutex; } ;
struct input_polled_dev {int input; struct lis3lv02d* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lis3lv02d*,int*,int*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct input_polled_dev *VAR_3)
{
 struct lis3lv02d *VAR_4 = VAR_3->private;
 int VAR_5, VAR_6, VAR_7;

 FUNC_3(&VAR_4->mutex);
 FUNC_2(VAR_4, &VAR_5, &VAR_6, &VAR_7);
 FUNC_0(VAR_3->input, VAR_0, VAR_5);
 FUNC_0(VAR_3->input, VAR_1, VAR_6);
 FUNC_0(VAR_3->input, VAR_2, VAR_7);
 FUNC_1(VAR_3->input);
 FUNC_4(&VAR_4->mutex);
}
