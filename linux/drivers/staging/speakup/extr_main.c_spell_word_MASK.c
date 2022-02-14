
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ value; } ;
struct TYPE_4__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (struct vc_data*) ;
 scalar_t__ FUNC_2 (int) ;
 char** VAR_5 ;
 char** VAR_6 ;
 struct var_t* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int VAR_7 ;
 size_t VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_7(struct vc_data *VAR_12)
{
 static char const *VAR_13[] = { "", ",", ".", ". .", ". . ." };
 u16 *VAR_14 = VAR_4;
 char *VAR_15;
 char *VAR_16 = VAR_10;
 char *VAR_17 = VAR_10;
 struct var_t *VAR_18 = FUNC_3(VAR_1);
 u16 VAR_19;

 if (!FUNC_1(VAR_12))
  return;
 while ((VAR_19 = *VAR_14)) {
  if (VAR_14 != VAR_4)
   FUNC_5(" %s ", VAR_13[VAR_8]);

  if (VAR_19 < 0x100 && FUNC_0(VAR_19, VAR_0)) {
   VAR_16 = VAR_9;
   if (*VAR_10)
    VAR_7++;
   else
    VAR_17 = VAR_10;
  } else {
   VAR_16 = VAR_10;
  }
  if (VAR_16 != VAR_17) {
   FUNC_5("%s", VAR_16);
   VAR_17 = VAR_16;
  }
  if (VAR_19 >= 0x100 || (VAR_18 && VAR_18->u.n.value)) {
   FUNC_6(VAR_19);
  } else if (VAR_11 == VAR_3 &&
      VAR_19 <= 0x7f && FUNC_2(VAR_19)) {
   VAR_19 &= 0x1f;
   VAR_15 = VAR_5[--VAR_19];
   FUNC_5("%s", VAR_15);
  } else {
   VAR_15 = VAR_6[VAR_19];
   if (*VAR_15 == '^') {
    FUNC_5("%s", FUNC_4(VAR_2));
    VAR_15++;
   }
   FUNC_5("%s", VAR_15);
  }
  VAR_14++;
 }
 if (VAR_16 != VAR_10)
  FUNC_5("%s", VAR_10);
}
