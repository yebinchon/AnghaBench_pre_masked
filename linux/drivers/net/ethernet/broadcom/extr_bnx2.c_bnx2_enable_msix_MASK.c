
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {char* name; } ;
struct msix_entry {int entry; scalar_t__ vector; } ;
struct bnx2 {int irq_nvecs; int flags; TYPE_1__* irq_tbl; int pdev; struct net_device* dev; } ;
struct TYPE_2__ {int handler; int name; scalar_t__ vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,scalar_t__) ;
 int VAR_10 ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (int ,struct msix_entry*,int ,int) ;
 int FUNC_4 (int ,int const,char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct bnx2 *VAR_11, int VAR_12)
{
 int VAR_13, VAR_14;
 struct msix_entry VAR_15[VAR_3];
 struct net_device *VAR_16 = VAR_11->dev;
 const int VAR_17 = sizeof(VAR_11->irq_tbl[0].name);

 FUNC_2(VAR_11);
 FUNC_1(VAR_11, VAR_7, VAR_2 - 1);
 FUNC_1(VAR_11, VAR_9, VAR_5);
 FUNC_1(VAR_11, VAR_8, VAR_6);



 FUNC_0(VAR_11, VAR_7);

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_15[VAR_13].entry = VAR_13;
  VAR_15[VAR_13].vector = 0;
 }

 VAR_14 = VAR_12;



 VAR_14 = FUNC_3(VAR_11->pdev, VAR_15,
        VAR_4, VAR_14);
 if (VAR_14 < 0)
  return;

 VAR_12 = VAR_14;



 VAR_11->irq_nvecs = VAR_12;
 VAR_11->flags |= VAR_1 | VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_11->irq_tbl[VAR_13].vector = VAR_15[VAR_13].vector;
  FUNC_4(VAR_11->irq_tbl[VAR_13].name, VAR_17, "%s-%d", VAR_16->name, VAR_13);
  VAR_11->irq_tbl[VAR_13].handler = VAR_10;
 }
}
