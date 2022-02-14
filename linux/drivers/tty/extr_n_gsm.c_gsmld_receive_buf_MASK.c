
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_mux* disc_data; } ;
struct gsm_mux {int (* error ) (struct gsm_mux*,unsigned char const,char) ;int (* receive ) (struct gsm_mux*,unsigned char const) ;} ;


 int VAR_0 ;





 int FUNC_0 (int,char*,int ,char) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,unsigned char const*,int) ;
 int FUNC_2 (struct gsm_mux*,unsigned char const) ;
 int FUNC_3 (struct gsm_mux*,unsigned char const,char) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2, const unsigned char *VAR_3,
         char *VAR_4, int VAR_5)
{
 struct gsm_mux *VAR_6 = VAR_2->disc_data;
 const unsigned char *VAR_7;
 char *VAR_8;
 int VAR_9;
 char VAR_10 = 130;

 if (VAR_1 & 4)
  FUNC_1("gsmld_receive: ", VAR_0,
         VAR_3, VAR_5);

 for (VAR_9 = VAR_5, VAR_7 = VAR_3, VAR_8 = VAR_4; VAR_9; VAR_9--, VAR_7++) {
  if (VAR_8)
   VAR_10 = *VAR_8++;
  switch (VAR_10) {
  case 130:
   VAR_6->receive(VAR_6, *VAR_7);
   break;
  case 129:
  case 132:
  case 128:
  case 131:
   VAR_6->error(VAR_6, *VAR_7, VAR_10);
   break;
  default:
   FUNC_0(1, "%s: unknown flag %d\n",
          FUNC_4(VAR_2), VAR_10);
   break;
  }
 }


}
