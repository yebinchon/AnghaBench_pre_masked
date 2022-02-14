
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bnx2x_fastpath {TYPE_1__* bp; scalar_t__ index; } ;
struct TYPE_2__ {scalar_t__ base_fw_ndsb; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline u8 FUNC_1(struct bnx2x_fastpath *VAR_0)
{
 return VAR_0->bp->base_fw_ndsb + VAR_0->index + FUNC_0(VAR_0->bp);
}
