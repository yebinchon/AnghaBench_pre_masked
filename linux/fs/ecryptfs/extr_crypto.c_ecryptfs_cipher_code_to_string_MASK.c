
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ cipher_code; int cipher_str; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(char *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 VAR_3[0] = '\0';
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
  if (VAR_4 == VAR_2[VAR_6].cipher_code)
   FUNC_2(VAR_3, VAR_2[VAR_6].cipher_str);
 if (VAR_3[0] == '\0') {
  FUNC_1(VAR_1, "Cipher code not recognized: "
    "[%d]\n", VAR_4);
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
