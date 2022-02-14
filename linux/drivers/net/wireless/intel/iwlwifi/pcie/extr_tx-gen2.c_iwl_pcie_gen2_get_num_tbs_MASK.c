
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans {int dummy; } ;
struct iwl_tfh_tfd {int num_tbs; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct iwl_trans *VAR_0,
        struct iwl_tfh_tfd *VAR_1)
{
 return FUNC_0(VAR_1->num_tbs) & 0x1f;
}
