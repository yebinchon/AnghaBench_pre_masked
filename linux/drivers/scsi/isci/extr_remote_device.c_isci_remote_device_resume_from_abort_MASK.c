
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_cookie; int user_callback; } ;
struct isci_remote_device {int flags; TYPE_1__ rnc; int abort_resume_cbparam; int abort_resume_cb; } ;
struct isci_host {int scic_lock; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (struct isci_host*,struct isci_remote_device*) ;
 int FUNC_2 (struct isci_remote_device*,int ,struct isci_remote_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

enum sci_status FUNC_7(
 struct isci_host *VAR_4,
 struct isci_remote_device *VAR_5)
{
 unsigned long VAR_6;
 enum sci_status VAR_7 = VAR_2;
 int VAR_8;

 FUNC_5(&VAR_4->scic_lock, VAR_6);



 VAR_5->abort_resume_cb = VAR_5->rnc.user_callback;
 VAR_5->abort_resume_cbparam = VAR_5->rnc.user_cookie;
 FUNC_4(VAR_1, &VAR_5->flags);
 FUNC_0(VAR_0, &VAR_5->flags);
 VAR_8 = FUNC_3(&VAR_5->rnc);
 if (!VAR_8)
  VAR_7 = FUNC_2(
   VAR_5, VAR_3,
   VAR_5);
 FUNC_6(&VAR_4->scic_lock, VAR_6);
 if (!VAR_8 && (VAR_7 == VAR_2))
  FUNC_1(VAR_4, VAR_5);
 else
  FUNC_0(VAR_1, &VAR_5->flags);

 return VAR_7;
}
