
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct cobalt_stream {struct cobalt* cobalt; } ;
struct cobalt {scalar_t__ have_hsma_tx; int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct cobalt_stream* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
    struct v4l2_capability *VAR_7)
{
 struct cobalt_stream *VAR_8 = FUNC_3(VAR_5);
 struct cobalt *VAR_9 = VAR_8->cobalt;

 FUNC_2(VAR_7->driver, "cobalt", sizeof(VAR_7->driver));
 FUNC_2(VAR_7->card, "cobalt", sizeof(VAR_7->card));
 FUNC_1(VAR_7->bus_info, sizeof(VAR_7->bus_info),
   "PCIe:%s", FUNC_0(VAR_9->pci_dev));
 VAR_7->capabilities = VAR_2 | VAR_1 |
  VAR_3 | VAR_0;
 if (VAR_9->have_hsma_tx)
  VAR_7->capabilities |= VAR_4;
 return 0;
}
