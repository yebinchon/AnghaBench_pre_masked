
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ttusbdecfe_state {TYPE_1__* config; } ;
struct dvb_frontend {scalar_t__ demodulator_priv; } ;
struct dvb_diseqc_master_cmd {int msg_len; int msg; } ;
typedef int b ;
struct TYPE_2__ {int (* send_command ) (struct dvb_frontend*,int,int,int*,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct dvb_frontend*,int,int,int*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_1, struct dvb_diseqc_master_cmd *VAR_2)
{
 struct ttusbdecfe_state* VAR_3 = (struct ttusbdecfe_state*) VAR_1->demodulator_priv;
 u8 VAR_4[] = { 0x00, 0xff, 0x00, 0x00,
     0x00, 0x00, 0x00, 0x00,
     0x00, 0x00 };

 if (VAR_2->msg_len > sizeof(VAR_4) - 4)
  return -VAR_0;

 FUNC_0(&VAR_4[4], VAR_2->msg, VAR_2->msg_len);

 VAR_3->config->send_command(VAR_1, 0x72,
        sizeof(VAR_4) - (6 - VAR_2->msg_len), VAR_4,
        ((void*)0), ((void*)0));

 return 0;
}
