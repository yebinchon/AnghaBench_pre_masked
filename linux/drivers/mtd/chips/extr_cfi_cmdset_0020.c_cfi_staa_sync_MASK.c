
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {int state; int oldstate; int mutex; int wq; } ;
struct cfi_private {int numchips; struct flchip* chips; } ;


 int FUNC_0 (int ,int ) ;





 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8 (struct mtd_info *VAR_3)
{
 struct map_info *VAR_4 = VAR_3->priv;
 struct cfi_private *VAR_5 = VAR_4->fldrv_priv;
 int VAR_6;
 struct flchip *VAR_7;
 int VAR_8 = 0;
 FUNC_0(VAR_2, VAR_1);

 for (VAR_6=0; !VAR_8 && VAR_6<VAR_5->numchips; VAR_6++) {
  VAR_7 = &VAR_5->chips[VAR_6];

 retry:
  FUNC_2(&VAR_7->mutex);

  switch(VAR_7->state) {
  case 130:
  case 129:
  case 132:
  case 131:
   VAR_7->oldstate = VAR_7->state;
   VAR_7->state = 128;





  case 128:
   FUNC_3(&VAR_7->mutex);
   break;

  default:

   FUNC_6(VAR_0);
   FUNC_1(&VAR_7->wq, &VAR_2);

   FUNC_3(&VAR_7->mutex);
   FUNC_5();
          FUNC_4(&VAR_7->wq, &VAR_2);

   goto retry;
  }
 }



 for (VAR_6--; VAR_6 >=0; VAR_6--) {
  VAR_7 = &VAR_5->chips[VAR_6];

  FUNC_2(&VAR_7->mutex);

  if (VAR_7->state == 128) {
   VAR_7->state = VAR_7->oldstate;
   FUNC_7(&VAR_7->wq);
  }
  FUNC_3(&VAR_7->mutex);
 }
}
