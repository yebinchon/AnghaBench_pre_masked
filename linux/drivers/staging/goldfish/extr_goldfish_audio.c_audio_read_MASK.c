
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goldfish_audio {scalar_t__ reg_base; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(const struct goldfish_audio *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->reg_base + VAR_1);
}
