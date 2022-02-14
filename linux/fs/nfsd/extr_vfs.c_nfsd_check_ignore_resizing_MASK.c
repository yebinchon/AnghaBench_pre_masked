
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; scalar_t__ ia_size; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct iattr *VAR_1)
{
 if ((VAR_1->ia_valid & VAR_0) && (VAR_1->ia_size == 0))
  VAR_1->ia_valid &= ~VAR_0;
}
