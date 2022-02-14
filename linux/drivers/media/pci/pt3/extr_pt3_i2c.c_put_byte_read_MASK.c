
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt3_i2cbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt3_i2cbuf*,int ) ;

__attribute__((used)) static void FUNC_1(struct pt3_i2cbuf *VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
   FUNC_0(VAR_3, VAR_1);
  FUNC_0(VAR_3, (VAR_5 == VAR_4 - 1) ? VAR_0 : VAR_2);
 }
}
