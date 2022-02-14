
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ daddr; } ;
struct TYPE_3__ {scalar_t__ daddr; } ;
struct ave_private {int desc_size; scalar_t__ base; TYPE_2__ rx; TYPE_1__ tx; } ;
typedef enum desc_id { ____Placeholder_desc_id } desc_id ;


 int VAR_0 ;
 struct ave_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, enum desc_id VAR_2,
      int VAR_3, int VAR_4, u32 VAR_5)
{
 struct ave_private *VAR_6 = FUNC_0(VAR_1);
 u32 VAR_7;

 VAR_7 = ((VAR_2 == VAR_0) ? VAR_6->tx.daddr : VAR_6->rx.daddr)
  + VAR_3 * VAR_6->desc_size + VAR_4;

 FUNC_1(VAR_5, VAR_6->base + VAR_7);
}
