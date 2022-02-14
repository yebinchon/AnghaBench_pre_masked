
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {struct input_dev* input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int*) ;
 int VAR_4 ;
 int FUNC_1 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_5(struct input_polled_dev *VAR_7)
{
 struct input_dev *VAR_8 = VAR_7->input;
 int VAR_9, VAR_10;

 FUNC_3(&VAR_4);

 if (FUNC_0(VAR_2, VAR_3, &VAR_9, &VAR_10))
  goto out;

 FUNC_1(VAR_8, VAR_0, VAR_9 - VAR_5);
 FUNC_1(VAR_8, VAR_1, VAR_10 - VAR_6);
 FUNC_2(VAR_8);

out:
 FUNC_4(&VAR_4);
}
