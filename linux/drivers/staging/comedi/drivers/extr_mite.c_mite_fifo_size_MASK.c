
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct mite *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_0->mmio + FUNC_0(VAR_1));
 unsigned int VAR_3 = (VAR_2 >> 16) & 0xff;
 unsigned int VAR_4 = VAR_2 & 0xff;

 return VAR_3 + VAR_4;
}
