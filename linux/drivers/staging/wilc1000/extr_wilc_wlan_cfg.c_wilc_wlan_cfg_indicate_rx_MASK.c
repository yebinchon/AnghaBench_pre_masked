
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_cfg_rsp {int seq_no; scalar_t__ type; } ;
struct wilc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wilc*,int*,int) ;
 int FUNC_1 (struct wilc*,int*,int) ;
 int FUNC_2 (struct wilc*,int*,int) ;
 int FUNC_3 (struct wilc*,int*) ;
 int FUNC_4 (struct wilc*,int*,int) ;

void FUNC_5(struct wilc *VAR_2, u8 *VAR_3, int VAR_4,
          struct wilc_cfg_rsp *VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;

 VAR_6 = VAR_3[0];
 VAR_7 = VAR_3[1];
 VAR_3 += 4;
 VAR_4 -= 4;
 VAR_5->type = 0;
 switch (VAR_6) {
 case 'R':
  FUNC_4(VAR_2, VAR_3, VAR_4);
  VAR_5->type = VAR_0;
  VAR_5->seq_no = VAR_7;
  break;

 case 'I':
  FUNC_3(VAR_2, VAR_3);
  VAR_5->type = VAR_1;
  VAR_5->seq_no = VAR_7;

  FUNC_0(VAR_2, VAR_3 - 4, VAR_4 + 4);
  break;

 case 'N':
  FUNC_1(VAR_2, VAR_3 - 4, VAR_4 + 4);
  break;

 case 'S':
  FUNC_2(VAR_2, VAR_3 - 4, VAR_4 + 4);
  break;

 default:
  VAR_5->seq_no = VAR_7;
  break;
 }
}
