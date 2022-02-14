
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {scalar_t__ event; int kref; int event_work; int rp_mutex; } ;


 int FUNC_0 (struct fc_rport_priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fc_rport_priv*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(struct fc_rport_priv *VAR_5)
{
 FUNC_4(&VAR_5->rp_mutex);

 FUNC_1(VAR_5, VAR_2);

 FUNC_0(VAR_5, "Port is Ready\n");

 FUNC_2(&VAR_5->kref);
 if (VAR_5->event == VAR_0 &&
     !FUNC_5(VAR_4, &VAR_5->event_work))
  FUNC_3(&VAR_5->kref, VAR_3);

 VAR_5->event = VAR_1;
}
