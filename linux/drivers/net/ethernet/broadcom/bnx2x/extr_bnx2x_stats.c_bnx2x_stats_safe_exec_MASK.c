
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int stats_lock; scalar_t__ stats_pending; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct bnx2x *VAR_2,
     void (VAR_3)(void *VAR_4),
     void *VAR_5)
{
 int VAR_6 = 10, VAR_7 = 0;




 VAR_7 = FUNC_3(&VAR_2->stats_lock, VAR_1 / 10);
 if (FUNC_4(VAR_7)) {
  FUNC_0("Failed to take statistics lock for safe execution\n");
  goto out_no_lock;
 }

 FUNC_1(VAR_2);
 while (VAR_2->stats_pending && VAR_6--)
  if (FUNC_2(VAR_2))
   FUNC_6(1000, 2000);
 if (VAR_2->stats_pending) {
  FUNC_0("Failed to wait for stats pending to clear [possibly FW is stuck]\n");
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_3(VAR_5);

out:



 FUNC_5(&VAR_2->stats_lock);
out_no_lock:
 return VAR_7;
}
