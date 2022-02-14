
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct netup_ci_state {int ci_i2c_addr; int i2c_adap; } ;
struct dvb_ca_en50221 {struct netup_ci_state* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int ,int*,int) ;

int FUNC_2(struct dvb_ca_en50221 *VAR_1, int VAR_2)
{
 struct netup_ci_state *VAR_3 = VAR_1->data;
 u8 VAR_4;

 if (0 != VAR_2)
  return -VAR_0;

 FUNC_0(VAR_3->i2c_adap, VAR_3->ci_i2c_addr,
   0, &VAR_4, 1);
 VAR_4 |= 0x60;

 return FUNC_1(VAR_3->i2c_adap, VAR_3->ci_i2c_addr,
       0, &VAR_4, 1);
}
