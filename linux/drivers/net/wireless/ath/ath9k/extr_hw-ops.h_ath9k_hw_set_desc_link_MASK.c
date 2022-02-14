
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {int dummy; } ;
struct TYPE_2__ {int (* set_desc_link ) (void*,int ) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0, void *VAR_1,
       u32 VAR_2)
{
 FUNC_0(VAR_0)->set_desc_link(VAR_1, VAR_2);
}
