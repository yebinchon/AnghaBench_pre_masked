
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entries; TYPE_1__* e; } ;
struct mt7601u_dev {TYPE_2__ rx_q; } ;
struct TYPE_3__ {int urb; int p; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mt7601u_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->rx_q.entries; VAR_2++) {
  FUNC_0(VAR_1->rx_q.e[VAR_2].p, VAR_0);
  FUNC_1(VAR_1->rx_q.e[VAR_2].urb);
 }
}
