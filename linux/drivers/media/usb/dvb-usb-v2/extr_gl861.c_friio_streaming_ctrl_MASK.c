
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_3 ? VAR_0 : VAR_1;
 return FUNC_1(FUNC_0(VAR_2), VAR_4, 1);
}
