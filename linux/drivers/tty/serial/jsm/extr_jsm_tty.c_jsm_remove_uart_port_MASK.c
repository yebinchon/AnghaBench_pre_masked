
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;
struct jsm_channel {TYPE_1__ uart_port; } ;
struct jsm_board {int nasync; int maxports; int pci_dev; struct jsm_channel** channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*) ;

int FUNC_3(struct jsm_board *VAR_4)
{
 int VAR_5;
 struct jsm_channel *VAR_6;

 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_1, &VAR_4->pci_dev, "start\n");





 VAR_4->nasync = VAR_4->maxports;


 for (VAR_5 = 0; VAR_5 < VAR_4->nasync; VAR_5++) {

  if (!VAR_4->channels[VAR_5])
   continue;

  VAR_6 = VAR_4->channels[VAR_5];

  FUNC_0(VAR_6->uart_port.line, VAR_3);
  FUNC_2(&VAR_2, &VAR_4->channels[VAR_5]->uart_port);
 }

 FUNC_1(VAR_1, &VAR_4->pci_dev, "finish\n");
 return 0;
}
