
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {scalar_t__ state; int mutex; int wq; } ;
struct cfi_private {int numchips; struct flchip* chips; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct map_info*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_2)
{
 struct map_info *VAR_3 = VAR_2->priv;
 struct cfi_private *VAR_4 = VAR_3->fldrv_priv;
 int VAR_5;
 struct flchip *VAR_6;

 for (VAR_5=0; VAR_5<VAR_4->numchips; VAR_5++) {

  VAR_6 = &VAR_4->chips[VAR_5];

  FUNC_2(&VAR_6->mutex);


  if (VAR_6->state == VAR_0) {
   FUNC_1(VAR_3, FUNC_0(0xFF), 0);
   VAR_6->state = VAR_1;
   FUNC_4(&VAR_6->wq);
  }

  FUNC_3(&VAR_6->mutex);
 }
}
