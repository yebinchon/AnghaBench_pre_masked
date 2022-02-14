
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {TYPE_2__* elem; TYPE_4__* afu; } ;
struct cxl {int dummy; } ;
struct TYPE_10__ {int (* link_ok ) (struct cxl*,int *) ;} ;
struct TYPE_9__ {TYPE_3__* native; struct cxl* adapter; } ;
struct TYPE_8__ {int spa_mutex; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_7__ {int lpid; TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (struct cxl*,int ) ;
 int FUNC_4 (struct cxl*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cxl*,int *) ;

__attribute__((used)) static void FUNC_7(struct cxl_context *VAR_5)
{
 struct cxl *VAR_6 = VAR_5->afu->adapter;
 u64 VAR_7;

 FUNC_0(!FUNC_5(&VAR_5->afu->native->spa_mutex));

 FUNC_4(VAR_6, VAR_0,
   ((u64)FUNC_1(VAR_5->elem->common.pid) << 32) |
   FUNC_1(VAR_5->elem->lpid));
 FUNC_4(VAR_6, VAR_1, VAR_2);

 while (1) {
  if (!VAR_4->link_ok(VAR_6, ((void*)0)))
   break;
  VAR_7 = FUNC_3(VAR_6, VAR_1);
  if (!(VAR_7 & VAR_3))
   break;
  FUNC_2();
 }
}
