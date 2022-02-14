
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; int dev; } ;
struct gpio_desc {int dummy; } ;
struct dwc3_pci {int has_dsm_for_pm; int guid; struct pci_dev* pci; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct gpio_desc*) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;
 struct gpio_desc* FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (struct gpio_desc*) ;
 int FUNC_8 (struct gpio_desc*,int) ;
 int FUNC_9 (int ,int *) ;
 int VAR_7 ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct dwc3_pci *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->pci;

 if (VAR_9->vendor == VAR_5) {
  if (VAR_9->device == VAR_1 ||
    VAR_9->device == VAR_2) {
   FUNC_9(VAR_4, &VAR_8->guid);
   VAR_8->has_dsm_for_pm = 1;
  }

  if (VAR_9->device == VAR_3) {
   struct gpio_desc *VAR_10;
   int VAR_11;


   VAR_11 = FUNC_4(VAR_9);
   if (VAR_11)
    return VAR_11;

   VAR_11 = FUNC_3(&VAR_9->dev,
     VAR_6);
   if (VAR_11)
    FUNC_2(&VAR_9->dev, "failed to add mapping table\n");






   FUNC_5(&VAR_7);






   VAR_10 = FUNC_6(&VAR_9->dev, "cs", VAR_0);
   if (FUNC_0(VAR_10))
    return FUNC_1(VAR_10);

   FUNC_8(VAR_10, 1);
   FUNC_7(VAR_10);

   VAR_10 = FUNC_6(&VAR_9->dev, "reset", VAR_0);
   if (FUNC_0(VAR_10))
    return FUNC_1(VAR_10);

   if (VAR_10) {
    FUNC_8(VAR_10, 1);
    FUNC_7(VAR_10);
    FUNC_10(10000, 11000);
   }
  }
 }

 return 0;
}
