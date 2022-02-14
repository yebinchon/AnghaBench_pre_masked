
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u8 ;
struct nls_table {int (* char2uni ) (unsigned char const*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char const*,int,int*) ;
 int FUNC_2 (unsigned char const*,int,int ,int*,int) ;

__attribute__((used)) static int
FUNC_3(const unsigned char *VAR_4, int VAR_5, unsigned char *VAR_6,
      int *VAR_7, int *VAR_8, int VAR_9, int VAR_10,
      struct nls_table *VAR_11)
{
 const unsigned char *VAR_12;
 unsigned char *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 if (VAR_10) {
  *VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_3,
    (wchar_t *) VAR_6, VAR_2 + 2);
  if (*VAR_8 < 0)
   return *VAR_8;
  else if (*VAR_8 > VAR_2)
   return -VAR_1;

  VAR_13 = &VAR_6[*VAR_8 * sizeof(wchar_t)];
 } else {
  for (VAR_14 = 0, VAR_12 = VAR_4, VAR_13 = VAR_6, *VAR_8 = 0;
    VAR_14 < VAR_5 && *VAR_8 < VAR_2;
    *VAR_8 += 1) {
   if (VAR_9 && (*VAR_12 == ':')) {
    u8 VAR_17[2];

    if (VAR_14 > VAR_5 - 5)
     return -VAR_0;

    if (FUNC_0(VAR_17, VAR_12 + 1, 2) < 0)
     return -VAR_0;

    *(wchar_t *)VAR_13 = VAR_17[0] << 8 | VAR_17[1];

    VAR_13 += 2;
    VAR_12 += 5;
    VAR_14 += 5;
   } else {
    VAR_16 = VAR_11->char2uni(VAR_12, VAR_5 - VAR_14,
       (wchar_t *)VAR_13);
    if (VAR_16 < 0)
     return -VAR_0;
    VAR_12 += VAR_16;
    VAR_14 += VAR_16;
    VAR_13 += 2;
   }
  }
  if (VAR_14 < VAR_5)
   return -VAR_1;
 }

 *VAR_7 = *VAR_8;
 if (*VAR_8 % 13) {
  *VAR_13++ = 0;
  *VAR_13++ = 0;
  *VAR_8 += 1;
  if (*VAR_8 % 13) {
   VAR_15 = 13 - (*VAR_8 % 13);
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    *VAR_13++ = 0xff;
    *VAR_13++ = 0xff;
   }
   *VAR_8 += VAR_15;
  }
 }

 return 0;
}
