
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int event_ring; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rocker_desc_info const*) ;
 int FUNC_2 (struct rocker_desc_info const*) ;
 int FUNC_3 (struct rocker*,int *,struct rocker_desc_info const*) ;
 struct rocker_desc_info* FUNC_4 (int *) ;
 int FUNC_5 (struct rocker*,int *,scalar_t__) ;
 int FUNC_6 (struct rocker*,struct rocker_desc_info const*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct rocker *VAR_3 = VAR_2;
 const struct pci_dev *VAR_4 = VAR_3->pdev;
 const struct rocker_desc_info *VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 while ((VAR_5 = FUNC_4(&VAR_3->event_ring))) {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7) {
   FUNC_0(&VAR_4->dev, "event desc received with err %d\n",
    VAR_7);
  } else {
   VAR_7 = FUNC_6(VAR_3, VAR_5);
   if (VAR_7)
    FUNC_0(&VAR_4->dev, "event processing failed with err %d\n",
     VAR_7);
  }
  FUNC_2(VAR_5);
  FUNC_3(VAR_3, &VAR_3->event_ring, VAR_5);
  VAR_6++;
 }
 FUNC_5(VAR_3, &VAR_3->event_ring, VAR_6);

 return VAR_0;
}
