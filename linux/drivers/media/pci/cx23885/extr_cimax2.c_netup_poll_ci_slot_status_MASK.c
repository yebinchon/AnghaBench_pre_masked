
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netup_ci_state {int status; } ;
struct dvb_ca_en50221 {struct netup_ci_state* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dvb_ca_en50221*,int) ;

int FUNC_2(struct dvb_ca_en50221 *VAR_2,
         int VAR_3, int VAR_4)
{
 struct netup_ci_state *VAR_5 = VAR_2->data;

 if (0 != VAR_3)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_4 ? (VAR_1 | FUNC_0())
   : VAR_1);

 return VAR_5->status;
}
