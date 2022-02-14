
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpsw_common {int speed; int tx_ch_num; TYPE_1__* txv; } ;
struct TYPE_2__ {int ch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpsw_common*) ;

__attribute__((used)) static int FUNC_2(struct cpsw_common *VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3, VAR_4;


 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == VAR_0->speed || !VAR_3)
  return 0;

 VAR_0->speed = VAR_3;

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < VAR_0->tx_ch_num; VAR_1++) {
  VAR_4 = FUNC_0(VAR_0->txv[VAR_1].ch);
  if (!VAR_4)
   break;

  VAR_2++;
 }


 if (!VAR_2 || VAR_2 == VAR_0->tx_ch_num)
  return 0;

 return 1;
}
