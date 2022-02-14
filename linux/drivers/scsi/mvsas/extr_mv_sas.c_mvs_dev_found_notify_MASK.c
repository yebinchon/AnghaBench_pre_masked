
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mvs_info {int lock; } ;
struct mvs_device {int attached_phy; struct domain_device* sas_device; struct mvs_info* mvi_info; int dev_type; int dev_status; } ;
struct ex_phy {int attached_sas_addr; } ;
struct TYPE_2__ {int num_phys; struct ex_phy* ex_phy; } ;
struct domain_device {int sas_addr; TYPE_1__ ex_dev; int dev_type; struct mvs_device* lldd_dev; struct domain_device* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 struct mvs_device* FUNC_3 (struct mvs_info*) ;
 struct mvs_info* FUNC_4 (struct domain_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct domain_device *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4 = 0;
 struct mvs_info *VAR_5 = ((void*)0);
 struct domain_device *VAR_6 = VAR_1->parent;
 struct mvs_device *VAR_7;

 VAR_5 = FUNC_4(VAR_1);

 if (VAR_2)
  FUNC_5(&VAR_5->lock, VAR_3);

 VAR_7 = FUNC_3(VAR_5);
 if (!VAR_7) {
  VAR_4 = -1;
  goto found_out;
 }
 VAR_1->lldd_dev = VAR_7;
 VAR_7->dev_status = VAR_0;
 VAR_7->dev_type = VAR_1->dev_type;
 VAR_7->mvi_info = VAR_5;
 VAR_7->sas_device = VAR_1;
 if (VAR_6 && FUNC_1(VAR_6->dev_type)) {
  int VAR_8;
  u8 VAR_9 = VAR_6->ex_dev.num_phys;
  struct ex_phy *VAR_10;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   VAR_10 = &VAR_6->ex_dev.ex_phy[VAR_8];
   if (FUNC_0(VAR_10->attached_sas_addr) ==
    FUNC_0(VAR_1->sas_addr)) {
    VAR_7->attached_phy = VAR_8;
    break;
   }
  }

  if (VAR_8 == VAR_9) {
   FUNC_2("Error: no attached dev:%016llx"
    "at ex:%016llx.\n",
    FUNC_0(VAR_1->sas_addr),
    FUNC_0(VAR_6->sas_addr));
   VAR_4 = -1;
  }
 }

found_out:
 if (VAR_2)
  FUNC_6(&VAR_5->lock, VAR_3);
 return VAR_4;
}
