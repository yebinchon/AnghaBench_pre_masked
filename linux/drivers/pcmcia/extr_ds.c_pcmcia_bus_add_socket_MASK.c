
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int present; scalar_t__ device_count; scalar_t__ pcmcia_pfc; int devices_list; } ;
struct device {int kobj; } ;
struct class_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct pcmcia_socket* FUNC_3 (struct device*) ;
 int VAR_1 ;
 int FUNC_4 (struct pcmcia_socket*,int *) ;
 int VAR_2 ;
 struct pcmcia_socket* FUNC_5 (struct pcmcia_socket*) ;
 int FUNC_6 (struct pcmcia_socket*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3,
        struct class_interface *VAR_4)
{
 struct pcmcia_socket *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 VAR_5 = FUNC_5(VAR_5);
 if (!VAR_5) {
  FUNC_2(VAR_3, "PCMCIA obtaining reference to socket failed\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_7(&VAR_3->kobj, &VAR_1);
 if (VAR_6) {
  FUNC_2(VAR_3, "PCMCIA registration failed\n");
  FUNC_6(VAR_5);
  return VAR_6;
 }

 FUNC_0(&VAR_5->devices_list);
 VAR_5->pcmcia_pfc = 0;
 VAR_5->device_count = 0;
 FUNC_1(&VAR_5->present, 0);

 VAR_6 = FUNC_4(VAR_5, &VAR_2);
 if (VAR_6) {
  FUNC_2(VAR_3, "PCMCIA registration failed\n");
  FUNC_6(VAR_5);
  return VAR_6;
 }

 return 0;
}
