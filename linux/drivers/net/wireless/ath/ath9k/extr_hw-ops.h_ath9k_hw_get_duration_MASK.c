
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct TYPE_2__ {int (* get_duration ) (struct ath_hw*,void const*,int) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,void const*,int) ;

__attribute__((used)) static inline int FUNC_2(struct ath_hw *VAR_0, const void *VAR_1,
     int VAR_2)
{
 return FUNC_0(VAR_0)->get_duration(VAR_0, VAR_1, VAR_2);
}
