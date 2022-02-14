
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventfd_ctx {scalar_t__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct eventfd_ctx*) ;

__attribute__((used)) static void FUNC_2(struct eventfd_ctx *VAR_1)
{
 if (VAR_1->id >= 0)
  FUNC_0(&VAR_0, VAR_1->id);
 FUNC_1(VAR_1);
}
