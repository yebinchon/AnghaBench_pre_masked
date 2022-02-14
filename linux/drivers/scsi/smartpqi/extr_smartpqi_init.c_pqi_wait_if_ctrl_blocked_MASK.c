
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int num_blocked_threads; int block_requests_wait; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (int ,int) ;
 unsigned long FUNC_6 (int ,int,int ) ;

__attribute__((used)) static unsigned long FUNC_7(struct pqi_ctrl_info *VAR_1,
 unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (!FUNC_4(VAR_1))
  return VAR_2;

 FUNC_1(&VAR_1->num_blocked_threads);

 if (VAR_2 == VAR_0) {
  FUNC_5(VAR_1->block_requests_wait,
   !FUNC_4(VAR_1));
  VAR_3 = VAR_2;
 } else {
  unsigned long VAR_4;

  VAR_4 =
   FUNC_6(VAR_1->block_requests_wait,
    !FUNC_4(VAR_1),
    FUNC_3(VAR_2));
  VAR_3 = FUNC_2(VAR_4);
 }

 FUNC_0(&VAR_1->num_blocked_threads);

 return VAR_3;
}
