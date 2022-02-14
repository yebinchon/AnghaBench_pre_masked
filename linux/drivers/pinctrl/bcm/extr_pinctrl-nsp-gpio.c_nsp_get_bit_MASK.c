
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsp_gpio {scalar_t__ base; scalar_t__ io_ctrl; } ;
typedef enum base_type { ____Placeholder_base_type } base_type ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(struct nsp_gpio *VAR_1, enum base_type VAR_2,
          unsigned int VAR_3, unsigned VAR_4)
{
 if (VAR_2 == VAR_0)
  return !!(FUNC_1(VAR_1->io_ctrl + VAR_3) & FUNC_0(VAR_4));
 else
  return !!(FUNC_1(VAR_1->base + VAR_3) & FUNC_0(VAR_4));
}
