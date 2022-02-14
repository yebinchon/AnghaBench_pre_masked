
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dvb_frontend*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_5)
{
 int VAR_6;
 u8 VAR_7[] = { VAR_3, 0x3d };
 u8 VAR_8[] = { VAR_2, 0x30 };
 u8 VAR_9[] = { VAR_4, 0x80 };
 u8 VAR_10[] = { VAR_0, 0x40 };
 u8 VAR_11[] = { VAR_1, 0x1c, 0x20 };
 u8 VAR_12[] = { 0x69, 0x00, 0xff, 0xff, 0x40, 0xff, 0x00, 0x40, 0x40 };
 u8 VAR_13[] = { 0x93, 0x1a };
 u8 VAR_14[] = { 0xb5, 0x7a };

 FUNC_1("Demod init!\n");

 if ((VAR_6 = FUNC_2(VAR_5, VAR_7, FUNC_0(VAR_7))) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_8, FUNC_0(VAR_8))) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_9, FUNC_0(VAR_9))) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_10, FUNC_0(VAR_10))) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_11, FUNC_0(VAR_11))) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_12, FUNC_0(VAR_12))) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_13, FUNC_0(VAR_13))) != 0)
  return VAR_6;
 if ((VAR_6 = FUNC_2(VAR_5, VAR_14, FUNC_0(VAR_14))) != 0)
  return VAR_6;

 return 0;
}
