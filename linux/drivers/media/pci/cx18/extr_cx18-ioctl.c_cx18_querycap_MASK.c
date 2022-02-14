
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int v4l2_cap; int pci_dev; int card_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cx18_open_id* FUNC_0 (void*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
    struct v4l2_capability *VAR_4)
{
 struct cx18_open_id *VAR_5 = FUNC_0(VAR_3);
 struct cx18 *VAR_6 = VAR_5->cx;

 FUNC_3(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_3(VAR_4->card, VAR_6->card_name, sizeof(VAR_4->card));
 FUNC_2(VAR_4->bus_info, sizeof(VAR_4->bus_info),
   "PCI:%s", FUNC_1(VAR_6->pci_dev));
 VAR_4->capabilities = VAR_6->v4l2_cap | VAR_1;
 return 0;
}
