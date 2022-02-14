
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fc_wka_port {scalar_t__ status; int refcount; int completion_wq; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct zfcp_fc_wka_port*) ;

__attribute__((used)) static int FUNC_5(struct zfcp_fc_wka_port *VAR_6)
{
 if (FUNC_1(&VAR_6->mutex))
  return -VAR_1;

 if (VAR_6->status == VAR_3 ||
     VAR_6->status == VAR_2) {
  VAR_6->status = VAR_5;
  if (FUNC_4(VAR_6))
   VAR_6->status = VAR_3;
 }

 FUNC_2(&VAR_6->mutex);

 FUNC_3(VAR_6->completion_wq,
     VAR_6->status == VAR_4 ||
     VAR_6->status == VAR_3);

 if (VAR_6->status == VAR_4) {
  FUNC_0(&VAR_6->refcount);
  return 0;
 }
 return -VAR_0;
}
