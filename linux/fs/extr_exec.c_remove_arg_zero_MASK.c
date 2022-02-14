
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct linux_binprm {unsigned long p; int argc; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct page* FUNC_0 (struct linux_binprm*,unsigned long,int ) ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct page*) ;

int FUNC_4(struct linux_binprm *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;
 char *VAR_6;
 struct page *VAR_7;

 if (!VAR_3->argc)
  return 0;

 do {
  VAR_5 = VAR_3->p & ~VAR_1;
  VAR_7 = FUNC_0(VAR_3, VAR_3->p, 0);
  if (!VAR_7) {
   VAR_4 = -VAR_0;
   goto out;
  }
  VAR_6 = FUNC_1(VAR_7);

  for (; VAR_5 < VAR_2 && VAR_6[VAR_5];
    VAR_5++, VAR_3->p++)
   ;

  FUNC_2(VAR_6);
  FUNC_3(VAR_7);
 } while (VAR_5 == VAR_2);

 VAR_3->p++;
 VAR_3->argc--;
 VAR_4 = 0;

out:
 return VAR_4;
}
