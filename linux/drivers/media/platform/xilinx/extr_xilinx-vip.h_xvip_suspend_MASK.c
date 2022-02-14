
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_device {int saved_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xvip_device*,int ) ;
 int FUNC_1 (struct xvip_device*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct xvip_device *VAR_2)
{
 VAR_2->saved_ctrl = FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_0,
     VAR_2->saved_ctrl & ~VAR_1);
}
