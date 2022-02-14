
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wbcir_data {scalar_t__ irqmask; scalar_t__ sbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct wbcir_data*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct wbcir_data *VAR_2, u8 VAR_3)
{
 if (VAR_2->irqmask == VAR_3)
  return;

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_3, VAR_2->sbase + VAR_1);
 VAR_2->irqmask = VAR_3;
}
