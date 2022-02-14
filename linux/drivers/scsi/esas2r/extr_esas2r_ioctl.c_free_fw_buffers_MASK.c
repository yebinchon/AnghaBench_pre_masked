
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * data; scalar_t__ phys; scalar_t__ orig_len; } ;
struct esas2r_adapter {TYPE_2__ firmware; TYPE_1__* pcid; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,size_t,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct esas2r_adapter *VAR_0)
{
 if (VAR_0->firmware.data) {
  FUNC_0(&VAR_0->pcid->dev,
      (size_t)VAR_0->firmware.orig_len,
      VAR_0->firmware.data,
      (dma_addr_t)VAR_0->firmware.phys);

  VAR_0->firmware.data = ((void*)0);
 }
}
