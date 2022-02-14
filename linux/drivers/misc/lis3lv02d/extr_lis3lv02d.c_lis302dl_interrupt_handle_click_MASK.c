
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lis3lv02d {int mutex; int * mapped_btns; int (* read ) (struct lis3lv02d*,int ,int*) ;TYPE_1__* idev; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lis3lv02d*,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct lis3lv02d *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->idev->input;
 u8 VAR_6;

 FUNC_2(&VAR_4->mutex);
 VAR_4->read(VAR_4, VAR_3, &VAR_6);

 if (VAR_6 & VAR_0) {
  FUNC_0(VAR_5, VAR_4->mapped_btns[0], 1);
  FUNC_0(VAR_5, VAR_4->mapped_btns[0], 0);
 }

 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_5, VAR_4->mapped_btns[1], 1);
  FUNC_0(VAR_5, VAR_4->mapped_btns[1], 0);
 }

 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5, VAR_4->mapped_btns[2], 1);
  FUNC_0(VAR_5, VAR_4->mapped_btns[2], 0);
 }
 FUNC_1(VAR_5);
 FUNC_3(&VAR_4->mutex);
}
