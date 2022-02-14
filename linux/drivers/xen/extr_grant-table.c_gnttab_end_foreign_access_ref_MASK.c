
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grant_ref_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(grant_ref_t VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  return 1;
 FUNC_1("WARNING: g.e. %#x still in use!\n", VAR_0);
 return 0;
}
