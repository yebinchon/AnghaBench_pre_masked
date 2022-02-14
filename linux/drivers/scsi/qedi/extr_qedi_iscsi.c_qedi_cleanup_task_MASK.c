
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {scalar_t__ state; int dd_data; int refcount; int sc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iscsi_task *VAR_2)
{
 if (!VAR_2->sc || VAR_2->state == VAR_0) {
  FUNC_0(((void*)0), VAR_1, "Returning ref_cnt=%d\n",
     FUNC_2(&VAR_2->refcount));
  return;
 }

 FUNC_1(VAR_2->dd_data);
}
