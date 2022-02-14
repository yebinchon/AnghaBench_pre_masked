
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct fm10k_mbx_info {int mbx_hdr; TYPE_1__ rx; scalar_t__ head; int mbx_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct fm10k_mbx_info *VAR_5)
{
 VAR_5->mbx_lock |= VAR_1;

 VAR_5->mbx_hdr = FUNC_0(VAR_2, VAR_4) |
         FUNC_0(VAR_5->head, VAR_3) |
         FUNC_0(VAR_5->rx.size - 1, VAR_0);
}
