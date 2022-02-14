
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tty_port {int dummy; } ;
struct gsm_mux {TYPE_1__** dlci; } ;
struct TYPE_2__ {struct tty_port port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gsm_mux*,int ,int const*,int) ;
 scalar_t__ FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (struct tty_port*) ;
 int FUNC_3 (struct tty_port*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gsm_mux *VAR_5, const u8 *VAR_6, int VAR_7)
{
 struct tty_port *VAR_8;
 unsigned int VAR_9 = 0;
 u8 VAR_10;
 int VAR_11 = VAR_7;
 const u8 *VAR_12 = VAR_6;

 while (FUNC_1(&VAR_9, *VAR_12++) == 0) {
  VAR_11--;
  if (VAR_11 == 0)
   return;
 }

 VAR_11--;
 if (VAR_11 <= 0)
  return;
 VAR_9 >>= 1;

 if (VAR_9 == 0 || VAR_9 >= VAR_1 || VAR_5->dlci[VAR_9] == ((void*)0))
  return;

 VAR_10 = *VAR_12;
 if ((VAR_10 & 1) == 0)
  return;

 VAR_8 = &VAR_5->dlci[VAR_9]->port;

 if (VAR_10 & 2)
  FUNC_3(VAR_8, 0, VAR_3);
 if (VAR_10 & 4)
  FUNC_3(VAR_8, 0, VAR_4);
 if (VAR_10 & 8)
  FUNC_3(VAR_8, 0, VAR_2);

 FUNC_2(VAR_8);

 FUNC_0(VAR_5, VAR_0, VAR_6, VAR_7);
}
