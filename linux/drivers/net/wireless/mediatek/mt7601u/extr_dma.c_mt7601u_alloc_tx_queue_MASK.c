
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7601u_tx_queue {int entries; TYPE_1__* e; struct mt7601u_dev* dev; } ;
struct mt7601u_dev {int dummy; } ;
struct TYPE_2__ {int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mt7601u_dev *VAR_3,
      struct mt7601u_tx_queue *VAR_4)
{
 int VAR_5;

 VAR_4->dev = VAR_3;
 VAR_4->entries = VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->e[VAR_5].urb = FUNC_0(0, VAR_1);
  if (!VAR_4->e[VAR_5].urb)
   return -VAR_0;
 }

 return 0;
}
