
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int idr_lock; int lcids; } ;
struct glink_channel {int refcount; scalar_t__ lcid; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 struct glink_channel* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct qcom_glink *VAR_1, unsigned int VAR_2)
{
 struct glink_channel *VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_1->idr_lock, VAR_4);
 VAR_3 = FUNC_1(&VAR_1->lcids, VAR_2);
 if (FUNC_0(!VAR_3, "close ack on unknown channel\n")) {
  FUNC_5(&VAR_1->idr_lock, VAR_4);
  return;
 }

 FUNC_2(&VAR_1->lcids, VAR_3->lcid);
 VAR_3->lcid = 0;
 FUNC_5(&VAR_1->idr_lock, VAR_4);

 FUNC_3(&VAR_3->refcount, VAR_0);
}
