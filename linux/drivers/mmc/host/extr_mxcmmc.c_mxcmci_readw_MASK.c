
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mxcmci_host {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_3(struct mxcmci_host *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_1->base + VAR_2);
 else
  return FUNC_2(VAR_1->base + VAR_2);
}
