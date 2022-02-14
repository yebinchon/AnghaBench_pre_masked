
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_socket {unsigned int functions; int dev; int ops_mutex; int resource_setup_done; } ;
struct TYPE_3__ {unsigned int nfn; } ;
typedef TYPE_1__ cistpl_longlink_mfc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcmcia_socket*,int ,int ,TYPE_1__*) ;
 int FUNC_5 (struct pcmcia_socket*,unsigned int*) ;
 int FUNC_6 (struct pcmcia_socket*,unsigned int) ;
 int FUNC_7 (struct pcmcia_socket*,char*,int) ;
 scalar_t__ FUNC_8 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_9(struct pcmcia_socket *VAR_5)
{
 cistpl_longlink_mfc_t VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10 = -VAR_2;

 FUNC_2(&VAR_5->ops_mutex);
 if (!(VAR_5->resource_setup_done)) {
  FUNC_0(&VAR_5->dev,
      "no resources available, delaying card_add\n");
  FUNC_3(&VAR_5->ops_mutex);
  return -VAR_2;
 }

 if (FUNC_8(VAR_5)) {
  FUNC_0(&VAR_5->dev, "validating mem resources failed, "
         "delaying card_add\n");
  FUNC_3(&VAR_5->ops_mutex);
  return -VAR_2;
 }
 FUNC_3(&VAR_5->ops_mutex);

 VAR_10 = FUNC_5(VAR_5, &VAR_9);
 if (VAR_10 || !VAR_9) {
  {
   FUNC_0(&VAR_5->dev, "invalid CIS or invalid resources\n");
   return -VAR_4;
  }
 }

 if (!FUNC_4(VAR_5, VAR_0, VAR_1, &VAR_6))
  VAR_7 = VAR_6.nfn;
 else
  VAR_7 = 1;
 VAR_5->functions = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_6(VAR_5, VAR_8);

 return VAR_10;
}
