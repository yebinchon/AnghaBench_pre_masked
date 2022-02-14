
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entries; int * e; } ;
struct mt7601u_dev {TYPE_1__ rx_q; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct mt7601u_dev *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->rx_q.entries; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, &VAR_1->rx_q.e[VAR_2], VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
