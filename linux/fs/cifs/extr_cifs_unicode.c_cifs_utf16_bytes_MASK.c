
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
typedef scalar_t__ __u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__*,struct nls_table const*,int ) ;
 scalar_t__ FUNC_1 (int const*) ;

int
FUNC_2(const __le16 *VAR_2, int VAR_3,
  const struct nls_table *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7 = 0;
 int VAR_8 = VAR_3 / 2;
 char VAR_9[VAR_0];
 __u16 VAR_10[3];

 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  VAR_10[0] = FUNC_1(&VAR_2[VAR_5]);
  if (VAR_10[0] == 0)
   break;
  if (VAR_5 + 1 < VAR_8)
   VAR_10[1] = FUNC_1(&VAR_2[VAR_5 + 1]);
  else
   VAR_10[1] = 0;
  if (VAR_5 + 2 < VAR_8)
   VAR_10[2] = FUNC_1(&VAR_2[VAR_5 + 2]);
  else
   VAR_10[2] = 0;

  VAR_6 = FUNC_0(VAR_9, VAR_10, VAR_4, VAR_1);
  VAR_7 += VAR_6;
 }

 return VAR_7;
}
