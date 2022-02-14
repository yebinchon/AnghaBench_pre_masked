
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qm_mr_entry {int dummy; } qm_mr_entry ;


 uintptr_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const union qm_mr_entry *VAR_2)
{
 return ((uintptr_t)VAR_2 >> VAR_0) & (VAR_1 - 1);
}
