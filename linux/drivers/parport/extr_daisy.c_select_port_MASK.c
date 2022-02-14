
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int muxport; } ;


 int FUNC_0 (struct parport*,int) ;

__attribute__((used)) static int FUNC_1(struct parport *VAR_0)
{
 int VAR_1 = VAR_0->muxport;
 return FUNC_0(VAR_0, 0x60 + VAR_1) == VAR_1;
}
