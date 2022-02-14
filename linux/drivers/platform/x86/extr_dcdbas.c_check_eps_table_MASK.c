
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smm_eps_table {int length; int smm_comm_buff_anchor; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline struct smm_eps_table *FUNC_2(u8 *VAR_1)
{
 struct smm_eps_table *VAR_2 = (struct smm_eps_table *)VAR_1;

 if (FUNC_1(VAR_2->smm_comm_buff_anchor, VAR_0, 4) != 0)
  return ((void*)0);

 if (FUNC_0(VAR_1, VAR_2->length) != 0)
  return ((void*)0);

 return VAR_2;
}
