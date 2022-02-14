
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esas2r_adapter {int flags; TYPE_1__* nvram; } ;
struct TYPE_2__ {int options2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct esas2r_adapter *VAR_4)
{
 if (!FUNC_2(VAR_1, &VAR_4->flags) &&
     !FUNC_2(VAR_0, &VAR_4->flags) &&
     (VAR_4->nvram->options2 & VAR_3))
  FUNC_1(VAR_2, &VAR_4->flags);
 else
  FUNC_0(VAR_2, &VAR_4->flags);
}
