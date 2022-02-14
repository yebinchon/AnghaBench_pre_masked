
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_ctx {int int_cond; unsigned int int_type; unsigned int int_err; int queue; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct s5p_mfc_ctx *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2)
{
 VAR_0->int_cond = 1;
 VAR_0->int_type = VAR_1;
 VAR_0->int_err = VAR_2;
 FUNC_0(&VAR_0->queue);
}
