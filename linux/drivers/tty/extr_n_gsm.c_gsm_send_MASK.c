
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gsm_mux {int encoding; int (* output ) (struct gsm_mux*,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (char*,int,int,int,int *,int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct gsm_mux*,int*,int) ;

__attribute__((used)) static void FUNC_5(struct gsm_mux *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 u8 VAR_9[10];
 u8 VAR_10[3];

 switch (VAR_4->encoding) {
 case 0:
  VAR_9[0] = VAR_1;
  VAR_9[1] = (VAR_5 << 2) | (VAR_6 << 1) | VAR_0;
  VAR_9[2] = VAR_7;
  VAR_9[3] = VAR_0;
  VAR_9[4] = 0xFF - FUNC_1(VAR_3, VAR_9 + 1, 3);
  VAR_9[5] = VAR_1;
  VAR_8 = 6;
  break;
 case 1:
 case 2:

  VAR_10[0] = (VAR_5 << 2) | (VAR_6 << 1) | VAR_0;
  VAR_10[1] = VAR_7;
  VAR_10[2] = 0xFF - FUNC_1(VAR_3, VAR_10, 2);

  VAR_8 = FUNC_3(VAR_10, VAR_9 + 1, 3);

  VAR_9[0] = VAR_2;
  VAR_9[VAR_8 + 1] = VAR_2;

  VAR_8 += 2;
  break;
 default:
  FUNC_0(1);
  return;
 }
 VAR_4->output(VAR_4, VAR_9, VAR_8);
 FUNC_2("-->", VAR_5, VAR_6, VAR_7, ((void*)0), 0);
}
