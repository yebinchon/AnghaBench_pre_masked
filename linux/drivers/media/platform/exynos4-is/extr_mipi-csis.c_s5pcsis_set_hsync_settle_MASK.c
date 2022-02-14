
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csis_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csis_state*,int ) ;
 int FUNC_1 (struct csis_state*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct csis_state *VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2, VAR_0);

 VAR_4 = (VAR_4 & ~VAR_1) | (VAR_3 << 27);
 FUNC_1(VAR_2, VAR_0, VAR_4);
}
