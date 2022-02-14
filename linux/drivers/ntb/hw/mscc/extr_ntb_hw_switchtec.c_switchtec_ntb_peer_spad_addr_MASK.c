
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchtec_ntb {TYPE_2__* stdev; TYPE_1__* peer_shared; } ;
struct ntb_dev {int pdev; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_4__ {scalar_t__ mmio; } ;
struct TYPE_3__ {int * spad; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct switchtec_ntb* FUNC_0 (struct ntb_dev*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_2, int VAR_3,
     int VAR_4, phys_addr_t *VAR_5)
{
 struct switchtec_ntb *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;

 if (VAR_3 != VAR_1)
  return -VAR_0;

 VAR_7 = (unsigned long)&VAR_6->peer_shared->spad[VAR_4] -
  (unsigned long)VAR_6->stdev->mmio;

 if (VAR_5)
  *VAR_5 = FUNC_1(VAR_2->pdev, 0) + VAR_7;

 return 0;
}
