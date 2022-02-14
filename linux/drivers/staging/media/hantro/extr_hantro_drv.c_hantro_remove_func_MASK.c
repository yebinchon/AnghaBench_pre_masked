
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hantro_func {int vdev; } ;
struct hantro_dev {struct hantro_func* decoder; struct hantro_func* encoder; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct hantro_func*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hantro_dev *VAR_1,
          unsigned int VAR_2)
{
 struct hantro_func *VAR_3;

 if (VAR_2 == VAR_0)
  VAR_3 = VAR_1->encoder;
 else
  VAR_3 = VAR_1->decoder;

 if (!VAR_3)
  return;

 FUNC_0(VAR_3);
 FUNC_1(&VAR_3->vdev);
}
