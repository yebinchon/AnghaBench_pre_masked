
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct o2quo_state {scalar_t__ qs_holds; int qs_hold_bm; int qs_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct o2quo_state *VAR_1, u8 VAR_2)
{
 FUNC_0(&VAR_1->qs_lock);

 if (!FUNC_3(VAR_2, VAR_1->qs_hold_bm)) {
  VAR_1->qs_holds++;
  FUNC_2(VAR_1->qs_holds == VAR_0,
           "node %u\n", VAR_2);
  FUNC_1(0, "node %u, %d total\n", VAR_2, VAR_1->qs_holds);
 }
}
