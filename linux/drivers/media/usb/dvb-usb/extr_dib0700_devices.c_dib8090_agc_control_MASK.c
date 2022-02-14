
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct dvb_frontend*,scalar_t__) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_0, u8 VAR_1)
{
 FUNC_0("AGC control callback: %i\n", VAR_1);
 FUNC_1(VAR_0, VAR_1);

 if (VAR_1 == 0)
  FUNC_2(VAR_0, 1);
}
