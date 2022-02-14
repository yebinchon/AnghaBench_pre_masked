
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum iwl_amsdu_size { ____Placeholder_iwl_amsdu_size } iwl_amsdu_size ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(enum iwl_amsdu_size VAR_0)
{
 switch (VAR_0) {
 case 130:
  return FUNC_1(2 * 1024);
 case 129:
  return FUNC_1(4 * 1024);
 case 128:
  return FUNC_1(8 * 1024);
 case 131:
  return FUNC_1(12 * 1024);
 default:
  FUNC_0(1);
  return -1;
 }
}
