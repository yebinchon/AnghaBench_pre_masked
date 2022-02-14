
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esas2r_adapter {int int_mask; int int_stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (struct esas2r_adapter*,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct esas2r_adapter *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->int_mask == 0)
  return 0;

 VAR_2 = FUNC_1(VAR_1, VAR_0);

 if ((VAR_2 & VAR_1->int_mask) == 0)
  return 0;

 FUNC_0(VAR_1);

 VAR_1->int_stat = VAR_2;
 VAR_1->int_mask = 0;

 return 1;
}
