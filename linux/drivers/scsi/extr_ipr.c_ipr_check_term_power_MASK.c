
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_mode_pages {int dummy; } ;
struct ipr_mode_page28 {int entry_length; int num_entries; struct ipr_dev_bus_entry* bus; } ;
struct ipr_ioa_cfg {TYPE_1__* pdev; } ;
struct TYPE_4__ {int bus; } ;
struct ipr_dev_bus_entry {int flags; TYPE_2__ res_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 struct ipr_mode_page28* FUNC_1 (struct ipr_mode_pages*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ipr_ioa_cfg *VAR_1,
     struct ipr_mode_pages *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct ipr_dev_bus_entry *VAR_5;
 struct ipr_mode_page28 *VAR_6;

 VAR_6 = FUNC_1(VAR_2, 0x28,
          sizeof(struct ipr_mode_page28));

 VAR_4 = VAR_6->entry_length;

 VAR_5 = VAR_6->bus;

 for (VAR_3 = 0; VAR_3 < VAR_6->num_entries; VAR_3++) {
  if (VAR_5->flags & VAR_0) {
   FUNC_0(&VAR_1->pdev->dev,
    "Term power is absent on scsi bus %d\n",
    VAR_5->res_addr.bus);
  }

  VAR_5 = (struct ipr_dev_bus_entry *)((char *)VAR_5 + VAR_4);
 }
}
