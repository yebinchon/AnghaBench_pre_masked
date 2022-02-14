
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct brcmf_pub {size_t* if2bss; struct brcmf_if** iflist; } ;
struct brcmf_if {int ifidx; TYPE_1__* ndev; int ndoffload_work; int multicast_work; } ;
typedef size_t s32 ;
struct TYPE_4__ {int * netdev_ops; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,size_t) ;
 int FUNC_1 (int ,char*,size_t,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct brcmf_if*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct brcmf_if*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct brcmf_pub *VAR_3, s32 VAR_4,
    bool VAR_5)
{
 struct brcmf_if *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->iflist[VAR_4];
 if (!VAR_6) {
  FUNC_0(VAR_3, "Null interface, bsscfgidx=%d\n", VAR_4);
  return;
 }
 FUNC_1(VAR_1, "Enter, bsscfgidx=%d, ifidx=%d\n", VAR_4,
    VAR_6->ifidx);
 VAR_7 = VAR_6->ifidx;

 if (VAR_6->ndev) {
  if (VAR_4 == 0) {
   if (VAR_6->ndev->netdev_ops == &VAR_2) {
    FUNC_8();
    FUNC_3(VAR_6->ndev);
    FUNC_9();
   }
  } else {
   FUNC_7(VAR_6->ndev);
  }

  if (VAR_6->ndev->netdev_ops == &VAR_2) {
   FUNC_5(&VAR_6->multicast_work);
   FUNC_5(&VAR_6->ndoffload_work);
  }
  FUNC_2(VAR_6->ndev, VAR_5);
 } else {







  FUNC_4(VAR_6, VAR_5);
  FUNC_6(VAR_6);
 }

 VAR_3->iflist[VAR_4] = ((void*)0);
 if (VAR_3->if2bss[VAR_7] == VAR_4)
  VAR_3->if2bss[VAR_7] = VAR_0;
}
