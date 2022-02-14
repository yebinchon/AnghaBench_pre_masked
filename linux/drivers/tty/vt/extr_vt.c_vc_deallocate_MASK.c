
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt_notifier_param {struct vc_data* vc; } ;
struct vc_data {int vc_screenbuf; int vt_pid; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,struct vt_notifier_param*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (struct vc_data*,int *) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct vc_data*) ;
 int VAR_2 ;

struct vc_data *FUNC_8(unsigned int VAR_3)
{
 struct vc_data *VAR_4 = ((void*)0);

 FUNC_0();

 if (FUNC_4(VAR_3)) {
  struct vt_notifier_param VAR_5;

  VAR_5.vc = VAR_4 = VAR_1[VAR_3].d;
  FUNC_1(&VAR_2, VAR_0, &VAR_5);
  FUNC_6(VAR_3);
  FUNC_7(VAR_4);
  FUNC_3(VAR_4->vt_pid);
  FUNC_5(VAR_4, ((void*)0));
  FUNC_2(VAR_4->vc_screenbuf);
  VAR_1[VAR_3].d = ((void*)0);
 }
 return VAR_4;
}
