
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw1 {int count; scalar_t__ cda; int flags; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ccw1 *VAR_2, int VAR_3)
{
 VAR_2->cmd_code = VAR_1;
 VAR_2->flags |= VAR_0;
 VAR_2->count = VAR_3;
 VAR_2->cda = (__u32) (addr_t) FUNC_1(FUNC_0(0));
}
