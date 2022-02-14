
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ca_en50221 {struct altera_ci_state* data; } ;
struct altera_ci_state {int status; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_ca_en50221 *VAR_1,
          int VAR_2, int VAR_3)
{
 struct altera_ci_state *VAR_4 = VAR_1->data;

 if (0 != VAR_2)
  return -VAR_0;

 return VAR_4->status;
}
