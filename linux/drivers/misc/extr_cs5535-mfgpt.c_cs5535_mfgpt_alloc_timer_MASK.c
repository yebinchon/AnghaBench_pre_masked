
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs5535_mfgpt_timer {int nr; struct cs5535_mfgpt_chip* chip; } ;
struct cs5535_mfgpt_chip {TYPE_1__* pdev; int lock; int avail; int initialized; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 struct cs5535_mfgpt_chip VAR_3 ;
 int FUNC_3 (int *,char*,int) ;
 unsigned long FUNC_4 (int ,int) ;
 struct cs5535_mfgpt_timer* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,int ) ;

struct cs5535_mfgpt_timer *FUNC_9(int VAR_4, int VAR_5)
{
 struct cs5535_mfgpt_chip *VAR_6 = &VAR_3;
 struct cs5535_mfgpt_timer *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_6->initialized)
  goto done;


 if (VAR_5 == VAR_1)
  VAR_9 = 6;
 else
  VAR_9 = VAR_2;

 if (VAR_4 >= VAR_9) {

  FUNC_0(1);
  goto done;
 }

 FUNC_6(&VAR_6->lock, VAR_8);
 if (VAR_4 < 0) {
  unsigned long VAR_10;


  VAR_10 = FUNC_4(VAR_6->avail, VAR_9);

  VAR_4 = VAR_10 < VAR_9 ? (int) VAR_10 : -1;
 } else {

  if (!FUNC_8(VAR_4, VAR_6->avail))
   VAR_4 = -1;
 }

 if (VAR_4 >= 0)

  FUNC_1(VAR_4, VAR_6->avail);
 FUNC_7(&VAR_6->lock, VAR_8);

 if (VAR_4 < 0)
  goto done;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {

  FUNC_6(&VAR_6->lock, VAR_8);
  FUNC_2(VAR_4, VAR_6->avail);
  FUNC_7(&VAR_6->lock, VAR_8);
  goto done;
 }
 VAR_7->chip = VAR_6;
 VAR_7->nr = VAR_4;
 FUNC_3(&VAR_6->pdev->dev, "registered timer %d\n", VAR_4);

done:
 return VAR_7;
}
