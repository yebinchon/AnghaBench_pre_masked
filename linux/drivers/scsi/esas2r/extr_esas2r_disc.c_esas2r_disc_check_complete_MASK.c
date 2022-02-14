
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esas2r_adapter {int disc_wait_time; int disc_start_time; scalar_t__ disc_wait_cnt; int flags; int mem_lock; int flags2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*,int ) ;
 scalar_t__ FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct esas2r_adapter *VAR_8)
{
 unsigned long VAR_9;

 FUNC_4();


 if (VAR_8->disc_wait_time) {
  u32 VAR_10 = FUNC_6(VAR_7);
  u32 VAR_11 = VAR_10 - VAR_8->disc_start_time;





  if (VAR_11 < VAR_8->disc_wait_time
      && (FUNC_3(VAR_8) < VAR_8->disc_wait_cnt
   || VAR_8->disc_wait_cnt == 0)) {

   if (VAR_11 >= 3000
       && !FUNC_10(VAR_1, &VAR_8->flags2)) {
    FUNC_8(&VAR_8->mem_lock, VAR_9);
    FUNC_2(VAR_8, VAR_6);
    FUNC_9(&VAR_8->mem_lock, VAR_9);
   }

   FUNC_5();
   return;
  }





  if (!FUNC_10(VAR_0, &VAR_8->flags2))
   VAR_8->disc_wait_time = VAR_11 + 3000;


  if (!FUNC_10(VAR_1, &VAR_8->flags2)) {
   FUNC_8(&VAR_8->mem_lock, VAR_9);
   FUNC_2(VAR_8, VAR_6);
   FUNC_9(&VAR_8->mem_lock, VAR_9);
   FUNC_5();
   return;
  }





  if (VAR_11 < VAR_8->disc_wait_time) {
   FUNC_5();
   return;
  }
 } else {
  if (!FUNC_10(VAR_1, &VAR_8->flags2)) {
   FUNC_8(&VAR_8->mem_lock, VAR_9);
   FUNC_2(VAR_8, VAR_6);
   FUNC_9(&VAR_8->mem_lock, VAR_9);
  }
 }


 VAR_8->disc_wait_time = 0;

 if (FUNC_11(VAR_4, &VAR_8->flags) &&
     FUNC_11(VAR_2, &VAR_8->flags)) {






 } else {





  FUNC_1(VAR_8);
  FUNC_0(VAR_3, &VAR_8->flags);






  FUNC_7(VAR_5, &VAR_8->flags);
 }

 FUNC_5();
}
