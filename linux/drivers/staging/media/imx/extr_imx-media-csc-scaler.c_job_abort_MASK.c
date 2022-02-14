
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_csc_scaler_ctx {scalar_t__ icc; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct ipu_csc_scaler_ctx *VAR_1 = VAR_0;

 if (VAR_1->icc)
  FUNC_0(VAR_1->icc);
}
