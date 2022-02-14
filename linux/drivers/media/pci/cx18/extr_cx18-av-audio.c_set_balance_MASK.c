
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18 {int dummy; } ;


 int FUNC_0 (struct cx18*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct cx18 *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 >> 8;
 if (VAR_2 > 0x80) {

  FUNC_0(VAR_0, 0x8d5, 0x7f, 0x80);

  FUNC_0(VAR_0, 0x8d5, ~0x7f, VAR_2 & 0x7f);
 } else {

  FUNC_0(VAR_0, 0x8d5, 0x7f, 0x00);

  FUNC_0(VAR_0, 0x8d5, ~0x7f, 0x80 - VAR_2);
 }
}
