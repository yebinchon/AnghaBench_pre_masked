
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int wq; } ;
struct icm {int rescan_work; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int) ;
 struct icm* FUNC_3 (struct tb*) ;

__attribute__((used)) static void FUNC_4(struct tb *VAR_0)
{
 struct icm *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_0(&VAR_1->rescan_work))
  FUNC_1(VAR_0->wq, &VAR_1->rescan_work,
     FUNC_2(500));
}
