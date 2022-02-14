
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entries; TYPE_1__* e; } ;
struct mt7601u_dev {TYPE_2__ rx_q; } ;
struct TYPE_3__ {int urb; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mt7601u_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rx_q.entries; VAR_1++)
  FUNC_0(VAR_0->rx_q.e[VAR_1].urb);
}
