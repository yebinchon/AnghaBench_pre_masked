
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ca_en50221 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_ca_en50221*,int ,int*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_ca_en50221 *VAR_4,
     int VAR_5,
     int VAR_6)
{
 u8 VAR_7[1];
 int VAR_8;

 if (0 != VAR_5)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_4, VAR_3, VAR_7, 0, 1);
 if (0 != VAR_8)
  return VAR_8;

 if (1 == VAR_7[0])
  return VAR_0 |
   VAR_1;

 return 0;

}
