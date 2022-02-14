
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_output_q {int use_cq; int aobs; } ;
struct qaob {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;

int FUNC_1(struct qdio_output_q *VAR_3)
{
 VAR_3->aobs = FUNC_0(VAR_2, sizeof(struct qaob *),
        VAR_1);
 if (!VAR_3->aobs) {
  VAR_3->use_cq = 0;
  return -VAR_0;
 }
 VAR_3->use_cq = 1;
 return 0;
}
