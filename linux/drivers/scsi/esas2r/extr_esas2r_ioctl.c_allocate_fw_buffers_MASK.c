
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int * data; int phys; scalar_t__ orig_len; } ;
struct esas2r_adapter {TYPE_2__ firmware; TYPE_1__* pcid; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct esas2r_adapter*) ;

__attribute__((used)) static int FUNC_3(struct esas2r_adapter *VAR_1, u32 VAR_2)
{
 FUNC_2(VAR_1);

 VAR_1->firmware.orig_len = VAR_2;

 VAR_1->firmware.data = (u8 *)FUNC_0(&VAR_1->pcid->dev,
          (size_t)VAR_2,
          (dma_addr_t *)&VAR_1->firmware.
          phys,
          VAR_0);

 if (!VAR_1->firmware.data) {
  FUNC_1("buffer alloc failed!");
  return 0;
 }

 return 1;
}
