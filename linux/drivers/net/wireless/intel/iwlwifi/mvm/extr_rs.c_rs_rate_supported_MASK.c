
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_rate {int index; } ;
struct iwl_lq_sta {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_lq_sta*,struct rs_rate*) ;

__attribute__((used)) static inline bool FUNC_2(struct iwl_lq_sta *VAR_0,
         struct rs_rate *VAR_1)
{
 return FUNC_0(VAR_1->index) & FUNC_1(VAR_0, VAR_1);
}
