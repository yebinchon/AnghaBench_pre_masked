
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kona_pwmc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct kona_pwmc *VAR_1,
 unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_3(VAR_1->base + VAR_0);

 VAR_3 |= 1 << FUNC_0(VAR_2);
 VAR_3 &= ~(1 << FUNC_1(VAR_2));
 FUNC_4(VAR_3, VAR_1->base + VAR_0);





 FUNC_2(400);
}
