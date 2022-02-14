
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ end; scalar_t__ start; TYPE_1__* parent; void* flags; } ;
struct pci_dev {TYPE_1__* resource; } ;
struct mfd_cell {char* name; int num_resources; int pdata_size; struct janz_platform_data* platform_data; scalar_t__ id; struct resource* resources; } ;
struct janz_platform_data {unsigned int modno; } ;
struct cmodio_device {struct janz_platform_data* pdata; struct resource* resources; struct mfd_cell* cells; struct pci_dev* pdev; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;


 unsigned int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct cmodio_device *VAR_4,
         char *VAR_5, unsigned int VAR_6,
         unsigned int VAR_7)
{
 struct janz_platform_data *VAR_8;
 struct mfd_cell *VAR_9;
 struct resource *VAR_10;
 struct pci_dev *VAR_11;

 VAR_11 = VAR_4->pdev;
 VAR_9 = &VAR_4->cells[VAR_6];
 VAR_10 = &VAR_4->resources[VAR_6 * 3];
 VAR_8 = &VAR_4->pdata[VAR_6];

 VAR_9->name = VAR_5;
 VAR_9->resources = VAR_10;
 VAR_9->num_resources = 3;


 VAR_9->id = VAR_3++;


 VAR_8->modno = VAR_7;
 VAR_9->platform_data = VAR_8;
 VAR_9->pdata_size = sizeof(*VAR_8);


 VAR_10->flags = VAR_2;
 VAR_10->parent = &VAR_11->resource[3];
 VAR_10->start = VAR_11->resource[3].start + (VAR_0 * VAR_7);
 VAR_10->end = VAR_10->start + VAR_0 - 1;
 VAR_10++;


 VAR_10->flags = VAR_2;
 VAR_10->parent = &VAR_11->resource[4];
 VAR_10->start = VAR_11->resource[4].start;
 VAR_10->end = VAR_11->resource[4].end;
 VAR_10++;
 VAR_10->flags = VAR_1;
 VAR_10->parent = ((void*)0);
 VAR_10->start = 0;
 VAR_10->end = 0;
 VAR_10++;

 return 0;
}
