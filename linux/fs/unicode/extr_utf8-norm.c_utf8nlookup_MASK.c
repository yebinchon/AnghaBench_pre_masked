
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8trie_t ;
typedef int utf8leaf_t ;
struct utf8data {int offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__* FUNC_1 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int* FUNC_2 (char const*,unsigned char*) ;

__attribute__((used)) static utf8leaf_t *FUNC_3(const struct utf8data *VAR_11,
          unsigned char *VAR_12, const char *VAR_13, size_t VAR_14)
{
 utf8trie_t *VAR_15 = ((void*)0);
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 if (!VAR_11)
  return ((void*)0);
 if (VAR_14 == 0)
  return ((void*)0);

 VAR_15 = VAR_10 + VAR_11->offset;
 VAR_19 = 1;
 while (VAR_19) {
  VAR_16 = (*VAR_15 & VAR_5) >> VAR_6;
  if (*VAR_15 & VAR_4) {
   if (--VAR_14 == 0)
    return ((void*)0);
   VAR_13++;
  }
  VAR_18 = 1 << (*VAR_15 & VAR_0);
  if (*VAR_13 & VAR_18) {

   if (VAR_16) {

    VAR_19 = (*VAR_15 & VAR_7);
    VAR_17 = VAR_15[VAR_16];
    while (--VAR_16) {
     VAR_17 <<= 8;
     VAR_17 |= VAR_15[VAR_16];
    }
    VAR_15 += VAR_17;
   } else if (*VAR_15 & VAR_8) {

    VAR_19 = (*VAR_15 & VAR_9);
    VAR_15++;
   } else {

    return ((void*)0);
   }
  } else {

   if (VAR_16) {

    VAR_19 = (*VAR_15 & VAR_3);
    VAR_15 += VAR_16 + 1;
   } else if (*VAR_15 & VAR_8) {

    return ((void*)0);
   } else {

    VAR_19 = (*VAR_15 & VAR_9);
    VAR_15++;
   }
  }
 }






 if (FUNC_0(VAR_15) == VAR_1 && FUNC_1(VAR_15)[0] == VAR_2)
  VAR_15 = FUNC_2(VAR_13 - 2, VAR_12);
 return VAR_15;
}
