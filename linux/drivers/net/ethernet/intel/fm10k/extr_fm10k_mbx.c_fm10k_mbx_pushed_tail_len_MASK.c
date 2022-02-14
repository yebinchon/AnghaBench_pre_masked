
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int * buffer; } ;
struct fm10k_mbx_info {int pushed; TYPE_1__ rx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct fm10k_mbx_info *VAR_0)
{
 u32 *VAR_1 = VAR_0->rx.buffer + FUNC_1(&VAR_0->rx, 0);


 if (!VAR_0->pushed)
  return 0;

 return FUNC_0(*VAR_1);
}
