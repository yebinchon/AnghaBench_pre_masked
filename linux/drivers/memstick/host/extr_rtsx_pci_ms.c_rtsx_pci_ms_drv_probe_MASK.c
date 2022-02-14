
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtsx_pcr {TYPE_1__* slots; } ;
struct realtek_pci_ms {int handle_req; int host_mutex; struct platform_device* pdev; struct memstick_host* msh; struct rtsx_pcr* pcr; } ;
struct TYPE_5__ {struct pcr_handle* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pcr_handle {struct rtsx_pcr* pcr; } ;
struct memstick_host {int caps; int set_param; int request; } ;
struct TYPE_4__ {int card_event; struct platform_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct memstick_host*) ;
 struct memstick_host* FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 (struct memstick_host*) ;
 struct realtek_pci_ms* FUNC_5 (struct memstick_host*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct realtek_pci_ms*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 struct memstick_host *VAR_9;
 struct realtek_pci_ms *VAR_10;
 struct rtsx_pcr *VAR_11;
 struct pcr_handle *VAR_12 = VAR_8->dev.platform_data;
 int VAR_13;

 if (!VAR_12)
  return -VAR_1;

 VAR_11 = VAR_12->pcr;
 if (!VAR_11)
  return -VAR_1;

 FUNC_1(&(VAR_8->dev),
   ": Realtek PCI-E Memstick controller found\n");

 VAR_9 = FUNC_3(sizeof(*VAR_10), &VAR_8->dev);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_9);
 VAR_10->pcr = VAR_11;
 VAR_10->msh = VAR_9;
 VAR_10->pdev = VAR_8;
 FUNC_7(VAR_8, VAR_10);
 VAR_11->slots[VAR_3].p_dev = VAR_8;
 VAR_11->slots[VAR_3].card_event = VAR_4;

 FUNC_6(&VAR_10->host_mutex);

 FUNC_0(&VAR_10->handle_req, VAR_5);
 VAR_9->request = VAR_6;
 VAR_9->set_param = VAR_7;
 VAR_9->caps = VAR_2;

 VAR_13 = FUNC_2(VAR_9);
 if (VAR_13) {
  FUNC_4(VAR_9);
  return VAR_13;
 }

 return 0;
}
