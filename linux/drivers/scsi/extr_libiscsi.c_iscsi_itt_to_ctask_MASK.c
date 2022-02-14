
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_task {TYPE_2__* sc; } ;
struct iscsi_conn {TYPE_3__* session; } ;
typedef int itt_t ;
struct TYPE_6__ {int age; } ;
struct TYPE_4__ {int phase; } ;
struct TYPE_5__ {TYPE_1__ SCp; } ;


 int VAR_0 ;
 struct iscsi_task* FUNC_0 (struct iscsi_conn*,int ) ;
 int FUNC_1 (int ,TYPE_3__*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct iscsi_conn*,int ) ;

struct iscsi_task *FUNC_3(struct iscsi_conn *VAR_1, itt_t VAR_2)
{
 struct iscsi_task *VAR_3;

 if (FUNC_2(VAR_1, VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3 || !VAR_3->sc)
  return ((void*)0);

 if (VAR_3->sc->SCp.phase != VAR_1->session->age) {
  FUNC_1(VAR_0, VAR_1->session,
      "task's session age %d, expected %d\n",
      VAR_3->sc->SCp.phase, VAR_1->session->age);
  return ((void*)0);
 }

 return VAR_3;
}
