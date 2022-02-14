
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msix_entry {int dummy; } ;
struct e1000_adapter {int int_mode; int flags; int num_vectors; int pdev; TYPE_1__* msix_entries; } ;
struct TYPE_3__ {int entry; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int,int) ;

void FUNC_5(struct e1000_adapter *VAR_3)
{
 int VAR_4;
 int VAR_5;

 switch (VAR_3->int_mode) {
 case 128:
  if (VAR_3->flags & VAR_0) {
   VAR_3->num_vectors = 3;
   VAR_3->msix_entries = FUNC_2(VAR_3->num_vectors,
       sizeof(struct
              msix_entry),
       VAR_2);
   if (VAR_3->msix_entries) {
    struct e1000_adapter *VAR_6 = VAR_3;

    for (VAR_5 = 0; VAR_5 < VAR_3->num_vectors; VAR_5++)
     VAR_3->msix_entries[VAR_5].entry = VAR_5;

    VAR_4 = FUNC_4(VAR_6->pdev,
           VAR_6->msix_entries,
           VAR_6->num_vectors,
           VAR_6->num_vectors);
    if (VAR_4 > 0)
     return;
   }

   FUNC_1("Failed to initialize MSI-X interrupts.  Falling back to MSI interrupts.\n");
   FUNC_0(VAR_3);
  }
  VAR_3->int_mode = 129;

 case 129:
  if (!FUNC_3(VAR_3->pdev)) {
   VAR_3->flags |= VAR_1;
  } else {
   VAR_3->int_mode = 130;
   FUNC_1("Failed to initialize MSI interrupts.  Falling back to legacy interrupts.\n");
  }

 case 130:

  break;
 }


 VAR_3->num_vectors = 1;
}
