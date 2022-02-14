
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct w1_slave {int flags; } ;
struct w1_reg_num {scalar_t__ crc; } ;
struct w1_master {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct w1_master*,struct w1_reg_num*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 struct w1_slave* FUNC_6 (struct w1_master*,struct w1_reg_num*) ;

void FUNC_7(struct w1_master *VAR_1, u64 VAR_2)
{
 struct w1_slave *VAR_3;
 struct w1_reg_num *VAR_4;
 u64 VAR_5 = FUNC_2(VAR_2);

 FUNC_1(&VAR_1->refcnt);

 VAR_4 = (struct w1_reg_num *) &VAR_2;

 VAR_3 = FUNC_6(VAR_1, VAR_4);
 if (VAR_3) {
  FUNC_3(VAR_0, &VAR_3->flags);
 } else {
  if (VAR_2 && VAR_4->crc == FUNC_5((u8 *)&VAR_5, 7))
   FUNC_4(VAR_1, VAR_4);
 }

 FUNC_0(&VAR_1->refcnt);
}
