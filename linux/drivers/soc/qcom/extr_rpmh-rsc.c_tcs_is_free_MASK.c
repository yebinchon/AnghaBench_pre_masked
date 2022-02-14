
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc_drv {int tcs_in_use; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rsc_drv*,int ,int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static bool FUNC_2(struct rsc_drv *VAR_1, int VAR_2)
{
 return !FUNC_1(VAR_2, VAR_1->tcs_in_use) &&
        FUNC_0(VAR_1, VAR_0, VAR_2, 0);
}
