
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
typedef scalar_t__ __u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__*,struct nls_table const*,int) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (struct nls_table const*) ;

int
FUNC_3(char *VAR_1, const __le16 *VAR_2, int VAR_3, int VAR_4,
  const struct nls_table *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = FUNC_2(VAR_5);
 int VAR_12 = VAR_4 / 2;
 char VAR_13[VAR_0];
 __u16 VAR_14[3];







 VAR_9 = VAR_3 - (VAR_0 + VAR_11);

 for (VAR_7 = 0; VAR_7 < VAR_12; VAR_7++) {
  VAR_14[0] = FUNC_1(&VAR_2[VAR_7]);
  if (VAR_14[0] == 0)
   break;
  if (VAR_7 + 1 < VAR_12)
   VAR_14[1] = FUNC_1(&VAR_2[VAR_7 + 1]);
  else
   VAR_14[1] = 0;
  if (VAR_7 + 2 < VAR_12)
   VAR_14[2] = FUNC_1(&VAR_2[VAR_7 + 2]);
  else
   VAR_14[2] = 0;





  if (VAR_10 >= VAR_9) {
   VAR_8 = FUNC_0(VAR_13, VAR_14, VAR_5, VAR_6);
   if ((VAR_10 + VAR_8) > (VAR_3 - VAR_11))
    break;
  }


  VAR_8 = FUNC_0(&VAR_1[VAR_10], VAR_14, VAR_5, VAR_6);
  VAR_10 += VAR_8;






  if (VAR_8 == 4)
   VAR_7++;
  else if (VAR_8 >= 5)

   VAR_7 += 2;
 }


 for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
  VAR_1[VAR_10++] = 0;

 return VAR_10;
}
