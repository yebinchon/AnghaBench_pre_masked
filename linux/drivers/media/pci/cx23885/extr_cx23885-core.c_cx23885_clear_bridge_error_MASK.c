
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cx23885_dev {TYPE_1__* pci; int need_dma_reset; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cx23885_dev *VAR_6)
{
 uint32_t VAR_7, VAR_8;

 if (!VAR_6->need_dma_reset)
  return;

 VAR_7 = FUNC_0(VAR_0);
 VAR_8 = FUNC_0(VAR_1);

 if (VAR_7 && VAR_8) {
  FUNC_1(VAR_0, VAR_7);
  FUNC_1(VAR_1, VAR_8);
  FUNC_0(VAR_4);
  FUNC_0(VAR_2);
  FUNC_0(VAR_5);
  FUNC_0(VAR_3);

  FUNC_2(&VAR_6->pci->dev,
   "dma in progress detected 0x%08x 0x%08x, clearing\n",
   VAR_7, VAR_8);
 }
}
