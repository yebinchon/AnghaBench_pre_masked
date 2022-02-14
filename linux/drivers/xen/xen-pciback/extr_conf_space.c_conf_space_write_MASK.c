
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct config_field_entry {int data; struct config_field* field; } ;
struct TYPE_7__ {int (* write ) (struct pci_dev*,int,int ,int ) ;} ;
struct TYPE_6__ {int (* write ) (struct pci_dev*,int,int ,int ) ;} ;
struct TYPE_5__ {int (* write ) (struct pci_dev*,int,int ,int ) ;} ;
struct TYPE_8__ {TYPE_3__ dw; TYPE_2__ w; TYPE_1__ b; } ;
struct config_field {int size; TYPE_4__ u; } ;


 int FUNC_0 (struct pci_dev*,int,int ,int ) ;
 int FUNC_1 (struct pci_dev*,int,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0,
       const struct config_field_entry *VAR_1,
       int VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 const struct config_field *VAR_5 = VAR_1->field;

 switch (VAR_5->size) {
 case 1:
  if (VAR_5->u.b.write)
   VAR_4 = VAR_5->u.b.write(VAR_0, VAR_2, (u8) VAR_3,
            VAR_1->data);
  break;
 case 2:
  if (VAR_5->u.w.write)
   VAR_4 = VAR_5->u.w.write(VAR_0, VAR_2, (u16) VAR_3,
            VAR_1->data);
  break;
 case 4:
  if (VAR_5->u.dw.write)
   VAR_4 = VAR_5->u.dw.write(VAR_0, VAR_2, VAR_3,
      VAR_1->data);
  break;
 }
 return VAR_4;
}
