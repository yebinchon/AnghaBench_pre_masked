
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sq_gather_subdesc {int size; int addr; } ;
struct TYPE_3__ {int q_len; } ;
struct snd_queue {TYPE_1__ dmem; } ;
struct nicvf {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_queue*,int) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;

void FUNC_2(struct nicvf *VAR_2, struct snd_queue *VAR_3,
         int VAR_4, u8 VAR_5)
{
 u8 VAR_6;
 struct sq_gather_subdesc *VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4++;
  VAR_4 &= (VAR_3->dmem.q_len - 1);
  VAR_7 = (struct sq_gather_subdesc *)FUNC_0(VAR_3, VAR_4);

  FUNC_1(&VAR_2->pdev->dev, VAR_7->addr,
         VAR_7->size, VAR_1,
         VAR_0);
 }
}
