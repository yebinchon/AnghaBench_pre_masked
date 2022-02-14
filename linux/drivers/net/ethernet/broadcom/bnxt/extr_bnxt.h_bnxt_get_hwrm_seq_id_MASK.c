
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnxt {int hwrm_cmd_kong_seq; int hwrm_cmd_seq; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(struct bnxt *VAR_1, u16 VAR_2)
{
 u16 VAR_3;

 if (VAR_2 == VAR_0)
  VAR_3 = VAR_1->hwrm_cmd_seq++;
 else
  VAR_3 = VAR_1->hwrm_cmd_kong_seq++;
 return VAR_3;
}
