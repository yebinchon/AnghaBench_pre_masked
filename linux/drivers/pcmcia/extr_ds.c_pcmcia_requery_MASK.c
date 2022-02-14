
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_socket {int state; scalar_t__ functions; int pcmcia_pfc; int dev; int ops_mutex; scalar_t__ fake_cis; } ;
struct TYPE_3__ {int nfn; } ;
typedef TYPE_1__ cistpl_longlink_mfc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pcmcia_socket*,int ,int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (struct pcmcia_socket*) ;
 int FUNC_7 (struct pcmcia_socket*,int *) ;
 int FUNC_8 (struct pcmcia_socket*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(struct pcmcia_socket *VAR_5)
{
 int VAR_6;

 if (!(VAR_5->state & VAR_2))
  return;

 if (VAR_5->functions == 0) {
  FUNC_6(VAR_5);
  return;
 }




 FUNC_0(&VAR_3, ((void*)0), ((void*)0), VAR_4);



 if (VAR_5->fake_cis) {
  int VAR_7, VAR_8;
  cistpl_longlink_mfc_t VAR_9;


  VAR_7 = VAR_5->functions;

  if (!FUNC_5(VAR_5, VAR_0, VAR_1,
     &VAR_9))
   VAR_8 = VAR_9.nfn;
  else
   VAR_8 = 1;
  if (VAR_7 != VAR_8) {

   FUNC_7(VAR_5, ((void*)0));
   VAR_5->functions = 0;
   FUNC_6(VAR_5);
  }
 }




 FUNC_3(&VAR_5->ops_mutex);
 VAR_6 = VAR_5->pcmcia_pfc;
 FUNC_4(&VAR_5->ops_mutex);
 if (VAR_6)
  FUNC_8(VAR_5, 0);



 if (FUNC_1(&VAR_3))
  FUNC_2(&VAR_5->dev, "rescanning the bus failed\n");
}
