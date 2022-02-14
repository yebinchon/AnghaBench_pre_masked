
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_pin_config {unsigned int* pins; } ;



__attribute__((used)) static inline bool FUNC_0(unsigned int VAR_0,
  const struct aspeed_pin_config *VAR_1)
{
 return VAR_0 >= VAR_1->pins[0] && VAR_0 <= VAR_1->pins[1];
}
