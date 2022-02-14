
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 char* FUNC_0 (unsigned char,unsigned char,char const**) ;
 char* FUNC_1 (unsigned char) ;
 int FUNC_2 (struct us_data const*,char*,char const*,char const*,...) ;

void FUNC_3(const struct us_data *VAR_0,
    unsigned char VAR_1,
    unsigned char VAR_2,
    unsigned char VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6;

 VAR_5 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_3, &VAR_6);

 if (VAR_5 == ((void*)0))
  VAR_5 = "(Unknown Key)";
 if (VAR_4 == ((void*)0))
  VAR_4 = "(unknown ASC/ASCQ)";

 if (VAR_6)
  FUNC_2(VAR_0, "%s: %s (%s%x)\n", VAR_5, VAR_4, VAR_6, VAR_3);
 else
  FUNC_2(VAR_0, "%s: %s\n", VAR_5, VAR_4);
}
