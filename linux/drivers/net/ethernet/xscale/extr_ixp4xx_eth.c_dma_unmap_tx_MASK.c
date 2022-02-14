
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {TYPE_1__* netdev; } ;
struct desc {int data; scalar_t__ buf_len; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct port *VAR_1, struct desc *VAR_2)
{




 FUNC_1(&VAR_1->netdev->dev, VAR_2->data & ~3,
    FUNC_0((VAR_2->data & 3) + VAR_2->buf_len, 4),
    VAR_0);

}
