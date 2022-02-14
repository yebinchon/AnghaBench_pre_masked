
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int enabled; int queue_index; int tap; } ;
struct tap_dev {int numvtaps; int * taps; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct tap_queue*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct tap_queue *VAR_1)
{
 struct tap_dev *VAR_2;
 struct tap_queue *VAR_3;

 FUNC_0();
 if (!VAR_1->enabled)
  return -VAR_0;

 VAR_2 = FUNC_4(VAR_1->tap);

 if (VAR_2) {
  int VAR_4 = VAR_1->queue_index;
  FUNC_1(VAR_4 >= VAR_2->numvtaps);
  VAR_3 = FUNC_4(VAR_2->taps[VAR_2->numvtaps - 1]);
  VAR_3->queue_index = VAR_4;

  FUNC_3(VAR_2->taps[VAR_4], VAR_3);
  FUNC_2(VAR_2->taps[VAR_2->numvtaps - 1], ((void*)0));
  VAR_1->enabled = 0;

  VAR_2->numvtaps--;
 }

 return 0;
}
