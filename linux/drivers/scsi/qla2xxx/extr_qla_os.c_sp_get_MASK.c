
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srb {int ref_count; } ;
typedef int refcount_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct srb *VAR_1)
{
 if (!FUNC_0((refcount_t *)&VAR_1->ref_count))

  return VAR_0;
 else
  return 0;
}
