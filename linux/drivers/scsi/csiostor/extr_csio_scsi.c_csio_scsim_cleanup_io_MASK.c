
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_scsim {int active_q; struct csio_hw* hw; } ;
struct csio_hw {int lock; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct csio_hw*,char*) ;
 int FUNC_3 (struct csio_scsim*,int *,int) ;
 int FUNC_4 (struct csio_scsim*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct csio_scsim *VAR_1, bool VAR_2)
{
 struct csio_hw *VAR_3 = VAR_1->hw;
 int VAR_4 = 0;
 int VAR_5 = FUNC_1(60 * 1000, VAR_0);


 if (FUNC_5(&VAR_1->active_q))
  return 0;


 while (!FUNC_5(&VAR_1->active_q) && VAR_5--) {
  FUNC_8(&VAR_3->lock);
  FUNC_6(VAR_0);
  FUNC_7(&VAR_3->lock);
 }


 if (FUNC_5(&VAR_1->active_q))
  return 0;


 if (VAR_2) {
  VAR_4 = FUNC_3(VAR_1, &VAR_1->active_q, 30000);
  if (VAR_4 == 0)
   return VAR_4;
  FUNC_2(VAR_3, "Some I/O aborts timed out, cleaning up..\n");
 }

 FUNC_4(VAR_1, &VAR_1->active_q);

 FUNC_0(FUNC_5(&VAR_1->active_q));

 return VAR_4;
}
