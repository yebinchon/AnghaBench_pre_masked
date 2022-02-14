
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_ppm {int refcnt; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

int FUNC_1(struct cxgbi_ppm *VAR_1)
{
 if (VAR_1) {
  int VAR_2;

  VAR_2 = FUNC_0(&VAR_1->refcnt, VAR_0);
  return VAR_2;
 }
 return 1;
}
