
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wpwd ;
struct nls_table {int dummy; } ;
typedef scalar_t__ __le16 ;


 int FUNC_0 (scalar_t__*,unsigned char const*,int,struct nls_table const*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (scalar_t__*,int) ;

int
FUNC_3(const unsigned char *VAR_0, unsigned char *VAR_1,
 const struct nls_table *VAR_2)
{
 int VAR_3;
 int VAR_4;
 __le16 VAR_5[129];


 if (VAR_0)
  VAR_4 = FUNC_0(VAR_5, VAR_0, 128, VAR_2);
 else {
  VAR_4 = 0;
  *VAR_5 = 0;
 }

 VAR_3 = FUNC_1(VAR_1, (unsigned char *) VAR_5, VAR_4 * sizeof(__le16));
 FUNC_2(VAR_5, sizeof(VAR_5));

 return VAR_3;
}
