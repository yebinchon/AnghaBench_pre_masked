
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_pwmc {scalar_t__ base; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct iproc_pwmc *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_1->base + VAR_0);
 VAR_3 &= ~(1 << FUNC_0(VAR_2));
 FUNC_3(VAR_3, VAR_1->base + VAR_0);


 FUNC_1(400);
}
