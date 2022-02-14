
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tty_struct {int dummy; } ;
struct gsm_mux {struct gsm_dlci** dlci; } ;
struct gsm_dlci {int port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct gsm_mux*,int ,int const*,int) ;
 int FUNC_1 (struct tty_struct*,struct gsm_dlci*,unsigned int,int) ;
 scalar_t__ FUNC_2 (unsigned int*,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 struct tty_struct* FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct gsm_mux *VAR_2, const u8 *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 struct gsm_dlci *VAR_8;
 int VAR_9 = VAR_4;
 const u8 *VAR_10 = VAR_3;
 struct tty_struct *VAR_11;

 while (FUNC_2(&VAR_5, *VAR_10++) == 0) {
  VAR_9--;
  if (VAR_9 == 0)
   return;
 }

 VAR_9--;
 if (VAR_9 <= 0)
  return;

 VAR_5 >>= 1;

 if (VAR_5 == 0 || VAR_5 >= VAR_1 || VAR_2->dlci[VAR_5] == ((void*)0))
  return;
 VAR_8 = VAR_2->dlci[VAR_5];

 while (FUNC_2(&VAR_6, *VAR_10++) == 0) {
  VAR_9--;
  if (VAR_9 == 0)
   return;
 }
 VAR_9--;
 if (VAR_9 > 0) {
  while (FUNC_2(&VAR_7, *VAR_10++) == 0) {
   VAR_9--;
   if (VAR_9 == 0)
    return;
  }
  VAR_6 <<= 7;
  VAR_6 |= (VAR_7 & 0x7f);
 }
 VAR_11 = FUNC_4(&VAR_8->port);
 FUNC_1(VAR_11, VAR_8, VAR_6, VAR_4);
 if (VAR_11) {
  FUNC_5(VAR_11);
  FUNC_3(VAR_11);
 }
 FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4);
}
