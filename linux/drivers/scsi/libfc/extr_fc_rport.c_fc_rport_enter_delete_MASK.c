
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {scalar_t__ rp_state; scalar_t__ event; int kref; int event_work; int rp_mutex; } ;
typedef enum fc_rport_event { ____Placeholder_fc_rport_event } fc_rport_event ;


 int FUNC_0 (struct fc_rport_priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fc_rport_priv*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct fc_rport_priv *VAR_4,
      enum fc_rport_event VAR_5)
{
 FUNC_4(&VAR_4->rp_mutex);

 if (VAR_4->rp_state == VAR_1)
  return;

 FUNC_0(VAR_4, "Delete port\n");

 FUNC_1(VAR_4, VAR_1);

 FUNC_2(&VAR_4->kref);
 if (VAR_4->event == VAR_0 &&
     !FUNC_5(VAR_3, &VAR_4->event_work))
  FUNC_3(&VAR_4->kref, VAR_2);

 VAR_4->event = VAR_5;
}
