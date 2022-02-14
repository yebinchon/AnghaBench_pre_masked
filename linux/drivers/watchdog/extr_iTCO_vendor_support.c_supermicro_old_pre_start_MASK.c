
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct resource *VAR_0)
{
 unsigned long VAR_1;


 VAR_1 = FUNC_0(VAR_0->start);
 VAR_1 &= 0xffffdfff;
 FUNC_1(VAR_1, VAR_0->start);
}
