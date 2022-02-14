
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_1 >= FUNC_0(VAR_2)) {
  FUNC_1("mlx5_core: WARNING: Invalid module parameter prof_sel %d, valid range 0-%zu, changing back to default(%d)\n",
   VAR_1,
   FUNC_0(VAR_2) - 1,
   VAR_0);
  VAR_1 = VAR_0;
 }
}
