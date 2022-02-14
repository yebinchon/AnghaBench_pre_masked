
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct aspeed_sig_expr aspeed_sig_expr ;
struct aspeed_pin_desc {struct aspeed_sig_expr*** prios; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,size_t,int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const struct aspeed_pin_desc *VAR_1,
       const char *(*VAR_2)(
        const struct aspeed_sig_expr *))
{
 char *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;
 const struct aspeed_sig_expr ***VAR_5, **VAR_6, *VAR_7;

 VAR_5 = VAR_1->prios;

 while ((VAR_6 = *VAR_5)) {
  while ((VAR_7 = *VAR_6)) {
   const char *VAR_8 = VAR_2(VAR_7);
   size_t VAR_9 = FUNC_3(VAR_8) + 2;
   char *VAR_10;

   VAR_10 = FUNC_1(VAR_3, VAR_4 + VAR_9 + 1, VAR_0);
   if (!VAR_10) {
    FUNC_0(VAR_3);
    return VAR_10;
   }

   VAR_3 = VAR_10;
   VAR_3[VAR_4] = '\0';
   VAR_4 += VAR_9;

   FUNC_2(VAR_3, VAR_8);
   FUNC_2(VAR_3, ", ");

   VAR_6++;
  }
  VAR_5++;
 }

 if (VAR_4 < 2) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3[VAR_4 - 2] = '\0';

 return VAR_3;
}
