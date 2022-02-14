
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {unsigned long p; int * page; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (void*,char*,unsigned int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct linux_binprm *VAR_5,
      unsigned long *VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_8 = VAR_5->p >> VAR_3;
 VAR_9 = *VAR_6;

 for (VAR_7 = VAR_1 - 1; VAR_7 >= VAR_8; VAR_7--) {
  unsigned int VAR_11 = VAR_7 == VAR_8 ? VAR_5->p & ~VAR_2 : 0;
  char *VAR_12 = FUNC_1(VAR_5->page[VAR_7]) + VAR_11;
  VAR_9 -= VAR_4 - VAR_11;
  if (FUNC_0((void *) VAR_9, VAR_12, VAR_4 - VAR_11) != 0)
   VAR_10 = -VAR_0;
  FUNC_2(VAR_5->page[VAR_7]);
  if (VAR_10)
   goto out;
 }

 *VAR_6 = VAR_9;

out:
 return VAR_10;
}
