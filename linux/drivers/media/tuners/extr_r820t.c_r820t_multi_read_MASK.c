
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct r820t_priv {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct r820t_priv*,int,scalar_t__*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct r820t_priv *VAR_0)
{
 int VAR_1, VAR_2;
 u16 VAR_3 = 0;
 u8 VAR_4[2], VAR_5 = 255, VAR_6 = 0;

 FUNC_1(5000, 6000);

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, 0x00, VAR_4, sizeof(VAR_4));
  if (VAR_1 < 0)
   return VAR_1;

  VAR_3 += VAR_4[1];

  if (VAR_4[1] < VAR_5)
   VAR_5 = VAR_4[1];

  if (VAR_4[1] > VAR_6)
   VAR_6 = VAR_4[1];
 }
 VAR_1 = VAR_3 - VAR_6 - VAR_5;

 return VAR_1;
}
