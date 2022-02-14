
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct family_route_values {char* family; } ;
typedef scalar_t__ register_type ;
typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_4 (struct family_route_values const*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*,...) ;
 int VAR_2 ;

void FUNC_8(const struct family_route_values *VAR_3, FILE *VAR_4)
{
 FUNC_7(VAR_4,
  "  \"%s\" : {\n"
  "    # dest -> {src0:val0, src1:val1, ...}\n"
  , VAR_3->family);
 for (unsigned int VAR_5 = VAR_0;
      VAR_5 < (VAR_0 + VAR_1);
      ++VAR_5) {
  unsigned int VAR_6 = VAR_0;

  for (; VAR_6 < (VAR_0 + VAR_1) &&
       FUNC_4(VAR_3, FUNC_0(VAR_6), FUNC_0(VAR_5)) == 0; ++VAR_6)
   ;

  if (VAR_6 >= (VAR_0 + VAR_1))
   continue;

  FUNC_7(VAR_4, "    %u : {\n", VAR_5);
  for (VAR_6 = VAR_0; VAR_6 < (VAR_0 + VAR_1);
       ++VAR_6) {
   register_type VAR_7 = FUNC_4(VAR_3, FUNC_0(VAR_6), FUNC_0(VAR_5));
   const char *VAR_8;

   if (VAR_7 == 0) {
    continue;
   } else if (FUNC_3(VAR_7)) {
    VAR_8 = "V";
   } else if (FUNC_1(VAR_7)) {
    VAR_8 = "I";
   } else if (FUNC_2(VAR_7)) {
    VAR_8 = "U";
   } else {
    FUNC_7(&VAR_2,
     "Invalid register marking %s[%u][%u] = %u\n",
     VAR_3->family, VAR_5, VAR_6, VAR_7);
    FUNC_6(1);
   }

   FUNC_7(VAR_4, "      %u : \"%s(%u)\",\n",
    VAR_6, VAR_8, FUNC_5(VAR_7));
  }
  FUNC_7(VAR_4, "    },\n");
 }
 FUNC_7(VAR_4, "  },\n\n");
}
