
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 scalar_t__ FUNC_0 (struct dvb_frontend*,unsigned char*) ;
 int FUNC_1 (struct dvb_frontend*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 unsigned char VAR_2[16];

 *VAR_1 = 0;

 if (0 == FUNC_0(VAR_0, VAR_2))
  *VAR_1 = FUNC_1(VAR_0, VAR_2);

 return 0;
}
