
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mmc_request {int tag; int host; TYPE_1__* data; } ;
struct TYPE_2__ {int flags; scalar_t__ blk_addr; int blocks; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_14(struct mmc_request *VAR_6,
     u64 *VAR_7, bool VAR_8)
{
 u32 VAR_9 = VAR_6->data->flags;

 *VAR_7 = FUNC_11(1) |
  FUNC_5(1) |
  FUNC_7(VAR_8) |
  FUNC_0(0x5) |
  FUNC_6(!!(VAR_9 & VAR_1)) |
  FUNC_4(!!(VAR_9 & VAR_0)) |
  FUNC_3(!!(VAR_9 & VAR_4)) |
  FUNC_8(!!(VAR_9 & VAR_2)) |
  FUNC_9(!!(VAR_9 & VAR_3)) |
  FUNC_10(!!(VAR_9 & VAR_5)) |
  FUNC_2(VAR_6->data->blocks) |
  FUNC_1((u64)VAR_6->data->blk_addr);

 FUNC_13("%s: cqhci: tag %d task descriptor 0x016%llx\n",
   FUNC_12(VAR_6->host), VAR_6->tag, (unsigned long long)*VAR_7);
}
