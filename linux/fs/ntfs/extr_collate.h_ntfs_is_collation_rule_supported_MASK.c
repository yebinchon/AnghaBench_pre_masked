
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ COLLATION_RULE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline bool FUNC_3(COLLATION_RULE VAR_2) {
 int VAR_3;






 if (FUNC_2(VAR_2 != VAR_0 && VAR_2 != VAR_1))
  return 0;
 VAR_3 = FUNC_0(VAR_2);
 if (FUNC_1(((VAR_3 >= 0) && (VAR_3 <= 0x02)) ||
   ((VAR_3 >= 0x10) && (VAR_3 <= 0x13))))
  return 1;
 return 0;
}
