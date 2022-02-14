
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct cxl_afu {int current_mode; } ;
struct cxl {int slices; int contexts_num; int dev; int afu_list_lock; struct cxl_afu** afu; int perst_same_image; scalar_t__ perst_loads_image; } ;
typedef scalar_t__ pci_ers_result_t ;
typedef int pci_channel_state_t ;
struct TYPE_2__ {int (* afu_deactivate_mode ) (struct cxl_afu*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct cxl*) ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 (struct cxl_afu*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct cxl_afu*) ;
 struct cxl* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cxl_afu*,int ) ;

__attribute__((used)) static pci_ers_result_t FUNC_13(struct pci_dev *VAR_5,
            pci_channel_state_t VAR_6)
{
 struct cxl *VAR_7 = FUNC_8(VAR_5);
 struct cxl_afu *VAR_8;
 pci_ers_result_t VAR_9 = VAR_1;
 pci_ers_result_t VAR_10 = VAR_1;
 int VAR_11;





 FUNC_9();


 if (VAR_6 == VAR_4) {
  FUNC_10(&VAR_7->afu_list_lock);
  for (VAR_11 = 0; VAR_11 < VAR_7->slices; VAR_11++) {
   VAR_8 = VAR_7->afu[VAR_11];




   FUNC_4(VAR_8, VAR_6);
  }
  FUNC_11(&VAR_7->afu_list_lock);
  return VAR_0;
 }
 if (VAR_7->perst_loads_image && !VAR_7->perst_same_image) {

  FUNC_5(&VAR_5->dev, "reflashing, so opting out of EEH!\n");
  return VAR_2;
 }
 FUNC_10(&VAR_7->afu_list_lock);

 for (VAR_11 = 0; VAR_11 < VAR_7->slices; VAR_11++) {
  VAR_8 = VAR_7->afu[VAR_11];

  if (VAR_8 == ((void*)0))
   continue;

  VAR_10 = FUNC_4(VAR_8, VAR_6);
  FUNC_2(VAR_8);
  VAR_3->afu_deactivate_mode(VAR_8, VAR_8->current_mode);
  FUNC_7(VAR_8);


  if (VAR_10 == VAR_0)
   VAR_9 = VAR_0;
  else if ((VAR_10 == VAR_2) &&
    (VAR_9 == VAR_1))
   VAR_9 = VAR_2;
 }
 FUNC_11(&VAR_7->afu_list_lock);


 if (FUNC_1(VAR_7) != 0)
  FUNC_6(&VAR_7->dev,
    "Couldn't take context lock with %d active-contexts\n",
    FUNC_0(&VAR_7->contexts_num));

 FUNC_3(VAR_7);

 return VAR_9;
}
