
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int cp_nr_rings; } ;


 int FUNC_0 (struct bnxt*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 scalar_t__ FUNC_3 (struct bnxt*) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = VAR_0->cp_nr_rings;

 if (!VAR_1)
  return VAR_2;

 if (FUNC_3(VAR_0) > VAR_2 + FUNC_1(VAR_0))
  return FUNC_0(VAR_0) + VAR_1;

 return VAR_2 + VAR_1;
}
