
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_dev_data {int config_fields; } ;
struct pci_dev {int dev; } ;
struct config_field_entry {unsigned int base_offset; int list; int * data; struct config_field const* field; } ;
struct config_field {void* (* init ) (struct pci_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct config_field_entry*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct config_field_entry*) ;
 struct config_field_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 struct xen_pcibk_dev_data* FUNC_7 (struct pci_dev*) ;
 void* FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ) ;

int FUNC_10(struct pci_dev *VAR_2,
        const struct config_field *VAR_3,
        unsigned int VAR_4)
{
 int VAR_5 = 0;
 struct xen_pcibk_dev_data *VAR_6 = FUNC_7(VAR_2);
 struct config_field_entry *VAR_7;
 void *VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_7->data = ((void*)0);
 VAR_7->field = VAR_3;
 VAR_7->base_offset = VAR_4;


 VAR_5 = FUNC_9(VAR_2, FUNC_1(VAR_7));
 if (VAR_5)
  goto out;

 if (VAR_3->init) {
  VAR_8 = VAR_3->init(VAR_2, FUNC_1(VAR_7));

  if (FUNC_0(VAR_8)) {
   VAR_5 = FUNC_2(VAR_8);
   goto out;
  }

  VAR_7->data = VAR_8;
 }

 FUNC_3(&VAR_2->dev, "added config field at offset 0x%02x\n",
  FUNC_1(VAR_7));
 FUNC_6(&VAR_7->list, &VAR_6->config_fields);

out:
 if (VAR_5)
  FUNC_4(VAR_7);

 return VAR_5;
}
