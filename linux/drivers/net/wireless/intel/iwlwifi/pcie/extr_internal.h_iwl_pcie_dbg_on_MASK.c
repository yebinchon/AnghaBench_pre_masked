
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dest_tlv; } ;
struct iwl_trans {TYPE_1__ dbg; } ;


 scalar_t__ FUNC_0 (struct iwl_trans*) ;

__attribute__((used)) static inline bool FUNC_1(struct iwl_trans *VAR_0)
{
 return (VAR_0->dbg.dest_tlv || FUNC_0(VAR_0));
}
