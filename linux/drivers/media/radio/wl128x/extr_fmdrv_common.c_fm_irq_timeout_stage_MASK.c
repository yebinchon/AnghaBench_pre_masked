
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int timer; int stage; } ;
struct fmdev {TYPE_1__ irq_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct fmdev *VAR_2, u8 VAR_3)
{
 VAR_2->irq_info.stage = VAR_3;
 FUNC_0(&VAR_2->irq_info.timer, VAR_1 + VAR_0);
}
