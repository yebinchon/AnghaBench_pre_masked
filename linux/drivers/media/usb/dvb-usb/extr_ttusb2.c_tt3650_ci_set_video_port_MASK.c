
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ca_en50221 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct dvb_ca_en50221*,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_ca_en50221 *VAR_3, int VAR_4, int VAR_5)
{
 u8 VAR_6[1];
 int VAR_7;

 FUNC_0("%d %d", VAR_4, VAR_5);

 if (VAR_4)
  return -VAR_0;

 VAR_6[0] = VAR_5;

 VAR_7 = FUNC_2(VAR_3, VAR_2, VAR_6, 1, 1);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_5 != VAR_6[0]) {
  FUNC_1("CI not %sabled.", VAR_5 ? "en" : "dis");
  return -VAR_1;
 }

 return 0;
}
