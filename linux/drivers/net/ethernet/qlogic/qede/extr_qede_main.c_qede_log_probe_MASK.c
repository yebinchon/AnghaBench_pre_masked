
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct qed_dev_info {int fw_major; int fw_minor; int fw_rev; int fw_eng; int mfw_rev; int mbi_version; } ;
struct TYPE_5__ {struct qed_dev_info common; } ;
struct qede_dev {TYPE_4__* ndev; TYPE_3__* pdev; TYPE_1__ dev_info; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int devfn; TYPE_2__* bus; } ;
struct TYPE_6__ {int number; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char*,int ,int ,int ,int *,int ) ;
 int FUNC_3 (int *,size_t,char*,int,int,int,...) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qede_dev *VAR_15)
{
 struct qed_dev_info *VAR_16 = &VAR_15->dev_info.common;
 u8 VAR_17[VAR_0];
 size_t VAR_18;

 FUNC_3(VAR_17, VAR_0,
   "Storm FW %d.%d.%d.%d, Management FW %d.%d.%d.%d",
   VAR_16->fw_major, VAR_16->fw_minor, VAR_16->fw_rev,
   VAR_16->fw_eng,
   (VAR_16->mfw_rev & VAR_13) >>
   VAR_14,
   (VAR_16->mfw_rev & VAR_11) >>
   VAR_12,
   (VAR_16->mfw_rev & VAR_9) >>
   VAR_10,
   (VAR_16->mfw_rev & VAR_7) >>
   VAR_8);

 VAR_18 = VAR_0 - FUNC_4(VAR_17);
 if (VAR_16->mbi_version && VAR_18)
  FUNC_3(VAR_17 + FUNC_4(VAR_17), VAR_18,
    " [MBI %d.%d.%d]",
    (VAR_16->mbi_version & VAR_5) >>
    VAR_6,
    (VAR_16->mbi_version & VAR_3) >>
    VAR_4,
    (VAR_16->mbi_version & VAR_1) >>
    VAR_2);

 FUNC_2("qede %02x:%02x.%02x: %s [%s]\n", VAR_15->pdev->bus->number,
  FUNC_1(VAR_15->pdev->devfn), FUNC_0(VAR_15->pdev->devfn),
  VAR_17, VAR_15->ndev->name);
}
