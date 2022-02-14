
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio {int req_q_wq; int req_q_free; int stat_lock; int req_q; } ;
struct ccw_device {int dummy; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zfcp_qdio*) ;
 int FUNC_6 (struct zfcp_qdio*,char*,unsigned int) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static void FUNC_8(struct ccw_device *VAR_0, unsigned int VAR_1,
         int VAR_2, int VAR_3, int VAR_4,
         unsigned long VAR_5)
{
 struct zfcp_qdio *VAR_6 = (struct zfcp_qdio *) VAR_5;

 if (FUNC_3(VAR_1)) {
  FUNC_6(VAR_6, "qdireq1", VAR_1);
  return;
 }


 FUNC_7(VAR_6->req_q, VAR_3, VAR_4);

 FUNC_1(&VAR_6->stat_lock);
 FUNC_5(VAR_6);
 FUNC_2(&VAR_6->stat_lock);
 FUNC_0(VAR_4, &VAR_6->req_q_free);
 FUNC_4(&VAR_6->req_q_wq);
}
