
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_krule {int* mask; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(const struct audit_krule *VAR_1, unsigned long VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 > 0xffffffff)
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 >= VAR_0)
  return 0;

 VAR_4 = FUNC_0(VAR_2);

 return VAR_1->mask[VAR_3] & VAR_4;
}
