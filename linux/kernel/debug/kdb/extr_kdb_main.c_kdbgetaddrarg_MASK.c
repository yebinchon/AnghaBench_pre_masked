
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long sym_start; } ;
typedef TYPE_1__ kdb_symtab_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (char const*,unsigned long*) ;
 int FUNC_4 (char*,unsigned long*) ;
 int FUNC_5 (unsigned long,TYPE_1__*) ;
 char* FUNC_6 (char*,char*) ;

int FUNC_7(int VAR_7, const char **VAR_8, int *VAR_9,
    unsigned long *VAR_10, long *VAR_11,
    char **VAR_12)
{
 unsigned long VAR_13;
 unsigned long VAR_14 = 0;
 int VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 char *VAR_18;
 char VAR_19 = '\0';
 char *VAR_20;
 kdb_symtab_t VAR_21;






 if (!FUNC_0(VAR_2 | VAR_1,
        VAR_6, 0))
  return VAR_4;
 if (*VAR_9 > VAR_7)
  return VAR_0;

 VAR_18 = (char *)VAR_8[*VAR_9];







 VAR_20 = FUNC_6(VAR_18, "+-");
 if (VAR_20 != ((void*)0)) {
  VAR_19 = *VAR_20;
  *VAR_20++ = '\0';
 }

 if (VAR_18[0] == '$') {
  VAR_16 = FUNC_4(&VAR_18[1], &VAR_13);
  if (VAR_16)
   return VAR_16;
 } else if (VAR_18[0] == '%') {
  VAR_16 = FUNC_1();
  if (VAR_16)
   return VAR_16;



  return VAR_5;
 } else {
  VAR_17 = FUNC_2(VAR_18, &VAR_21);
  if (VAR_17) {
   VAR_13 = VAR_21.sym_start;
  } else {
   VAR_16 = FUNC_3(VAR_8[*VAR_9], &VAR_13);
   if (VAR_16)
    return VAR_16;
  }
 }

 if (!VAR_17)
  VAR_17 = FUNC_5(VAR_13, &VAR_21);

 (*VAR_9)++;

 if (VAR_12)
  *VAR_12 = VAR_18;
 if (VAR_10)
  *VAR_10 = VAR_13;
 if (VAR_11 && VAR_12 && *VAR_12)
  *VAR_11 = VAR_13 - VAR_21.sym_start;

 if ((*VAR_9 > VAR_7)
  && (VAR_19 == '\0'))
  return 0;





 if (VAR_19 == '\0') {
  if ((VAR_8[*VAR_9][0] != '+')
   && (VAR_8[*VAR_9][0] != '-')) {



   return 0;
  } else {
   VAR_15 = (VAR_8[*VAR_9][0] == '+');
   (*VAR_9)++;
  }
 } else
  VAR_15 = (VAR_19 == '+');




 if ((*VAR_9 > VAR_7)
  && (VAR_19 == '\0')) {
  return VAR_3;
 }

 if (!VAR_19) {
  VAR_20 = (char *)VAR_8[*VAR_9];
  (*VAR_9)++;
 }

 VAR_16 = FUNC_3(VAR_20, &VAR_14);
 if (VAR_16)
  return VAR_16;

 if (!VAR_15)
  VAR_14 = -VAR_14;

 if (VAR_11)
  *VAR_11 += VAR_14;

 if (VAR_10)
  *VAR_10 += VAR_14;

 return 0;
}
