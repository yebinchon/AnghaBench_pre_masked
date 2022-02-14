
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {struct input_dev* dev; } ;
struct input_dev {int sndbit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_handle*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct input_handle *VAR_3, void *VAR_4)
{
 unsigned int *VAR_5 = VAR_4;
 struct input_dev *VAR_6 = VAR_3->dev;

 if (FUNC_1(VAR_0, VAR_6->evbit)) {
  if (FUNC_1(VAR_2, VAR_6->sndbit)) {
   FUNC_0(VAR_3, VAR_0, VAR_2, *VAR_5);
   if (*VAR_5)
    return 0;
  }
  if (FUNC_1(VAR_1, VAR_6->sndbit))
   FUNC_0(VAR_3, VAR_0, VAR_1, *VAR_5 ? 1 : 0);
 }

 return 0;
}
