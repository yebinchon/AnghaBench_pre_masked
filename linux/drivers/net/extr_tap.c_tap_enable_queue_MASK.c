
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int enabled; size_t queue_index; } ;
struct tap_dev {size_t numvtaps; int * taps; } ;
struct file {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,struct tap_queue*) ;

__attribute__((used)) static int FUNC_2(struct tap_dev *VAR_1, struct file *VAR_2,
       struct tap_queue *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_0();

 if (VAR_3->enabled)
  goto out;

 VAR_4 = 0;
 FUNC_1(VAR_1->taps[VAR_1->numvtaps], VAR_3);
 VAR_3->queue_index = VAR_1->numvtaps;
 VAR_3->enabled = 1;

 VAR_1->numvtaps++;
out:
 return VAR_4;
}
