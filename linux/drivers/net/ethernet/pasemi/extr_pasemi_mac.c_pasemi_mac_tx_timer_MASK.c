
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pasemi_mac_txring {int clean_timer; struct pasemi_mac* mac; } ;
struct pasemi_mac {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pasemi_mac_txring* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct pasemi_mac_txring*) ;
 int FUNC_3 (struct pasemi_mac*) ;
 struct pasemi_mac_txring* VAR_3 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct pasemi_mac_txring *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_1);
 struct pasemi_mac *VAR_6 = VAR_5->mac;

 FUNC_2(VAR_5);

 FUNC_1(&VAR_5->clean_timer, VAR_2 + VAR_0);

 FUNC_3(VAR_6);
}
