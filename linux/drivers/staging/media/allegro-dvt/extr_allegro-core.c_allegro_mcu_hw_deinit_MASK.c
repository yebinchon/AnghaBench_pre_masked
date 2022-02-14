
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {int suballocator; int v4l2_dev; } ;


 int FUNC_0 (struct allegro_dev*,int *) ;
 int FUNC_1 (struct allegro_dev*) ;
 int FUNC_2 (struct allegro_dev*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct allegro_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_3(&VAR_0->v4l2_dev,
     "mcu failed to enter sleep state\n");

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_3(&VAR_0->v4l2_dev,
     "failed to disable interrupts\n");

 FUNC_0(VAR_0, &VAR_0->suballocator);

 return 0;
}
