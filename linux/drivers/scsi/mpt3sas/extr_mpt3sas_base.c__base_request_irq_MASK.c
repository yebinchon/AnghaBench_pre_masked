
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct adapter_reply_queue {int list; int name; int busy; int msix_index; struct MPT3SAS_ADAPTER* ioc; } ;
struct MPT3SAS_ADAPTER {char* driver_name; int id; int reply_queue_list; scalar_t__ msix_enable; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,char*,int) ;
 int FUNC_3 (struct adapter_reply_queue*) ;
 struct adapter_reply_queue* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,struct adapter_reply_queue*) ;
 int FUNC_9 (int ,int ,char*,char*,int,...) ;

__attribute__((used)) static int
FUNC_10(struct MPT3SAS_ADAPTER *VAR_6, u8 VAR_7)
{
 struct pci_dev *VAR_8 = VAR_6->pdev;
 struct adapter_reply_queue *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(sizeof(struct adapter_reply_queue), VAR_2);
 if (!VAR_9) {
  FUNC_2(VAR_6, "unable to allocate memory %zu!\n",
   sizeof(struct adapter_reply_queue));
  return -VAR_1;
 }
 VAR_9->ioc = VAR_6;
 VAR_9->msix_index = VAR_7;

 FUNC_1(&VAR_9->busy, 0);
 if (VAR_6->msix_enable)
  FUNC_9(VAR_9->name, VAR_4, "%s%d-msix%d",
      VAR_6->driver_name, VAR_6->id, VAR_7);
 else
  FUNC_9(VAR_9->name, VAR_4, "%s%d",
      VAR_6->driver_name, VAR_6->id);
 VAR_10 = FUNC_8(FUNC_6(VAR_8, VAR_7), VAR_5,
   VAR_3, VAR_9->name, VAR_9);
 if (VAR_10) {
  FUNC_7("%s: unable to allocate interrupt %d!\n",
         VAR_9->name, FUNC_6(VAR_8, VAR_7));
  FUNC_3(VAR_9);
  return -VAR_0;
 }

 FUNC_0(&VAR_9->list);
 FUNC_5(&VAR_9->list, &VAR_6->reply_queue_list);
 return 0;
}
