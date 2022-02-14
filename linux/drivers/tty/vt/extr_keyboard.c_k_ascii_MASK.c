
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vc_data *VAR_1, unsigned char VAR_2, char VAR_3)
{
 int VAR_4;

 if (VAR_3)
  return;

 if (VAR_2 < 10) {

  VAR_4 = 10;
 } else {

  VAR_2 -= 10;
  VAR_4 = 16;
 }

 if (VAR_0 == -1)
  VAR_0 = VAR_2;
 else
  VAR_0 = VAR_0 * VAR_4 + VAR_2;
}
