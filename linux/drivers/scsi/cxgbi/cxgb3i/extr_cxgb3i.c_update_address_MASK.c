
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cxgbi_hba {scalar_t__ ipv4addr; TYPE_1__* ndev; TYPE_1__* vdev; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (char*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct cxgbi_hba *VAR_0)
{
 if (VAR_0->ipv4addr) {
  if (VAR_0->vdev &&
      VAR_0->ipv4addr != FUNC_0(VAR_0->vdev)) {
   FUNC_1(VAR_0->vdev, VAR_0->ipv4addr);
   FUNC_1(VAR_0->ndev, 0);
   FUNC_2("%s set %pI4.\n",
    VAR_0->vdev->name, &VAR_0->ipv4addr);
  } else if (VAR_0->ipv4addr !=
    FUNC_0(VAR_0->ndev)) {
   FUNC_1(VAR_0->ndev, VAR_0->ipv4addr);
   FUNC_2("%s set %pI4.\n",
    VAR_0->ndev->name, &VAR_0->ipv4addr);
  }
 } else if (FUNC_0(VAR_0->ndev)) {
  if (VAR_0->vdev)
   FUNC_1(VAR_0->vdev, 0);
  FUNC_1(VAR_0->ndev, 0);
 }
}
