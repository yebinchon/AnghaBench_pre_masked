
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {int dummy; } ;
typedef int ratio ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_frontend*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3, u32 VAR_4,
       u32 VAR_5)
{
 FUNC_0(VAR_3, 0x13, 0x98);
 FUNC_0(VAR_3, 0x14, 0x95);
 FUNC_0(VAR_3, VAR_0, (VAR_5 >> 16) & 0xff);
 FUNC_0(VAR_3, VAR_1, (VAR_5 >> 8) & 0xff);
 FUNC_0(VAR_3, VAR_2, (VAR_5) & 0xf0);
 return 0;

}
