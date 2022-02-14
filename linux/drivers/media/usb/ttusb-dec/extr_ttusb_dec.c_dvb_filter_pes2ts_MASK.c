
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_filter_pes2ts {unsigned char* buf; int (* cb ) (int ,unsigned char*) ;int priv; int cc; } ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (int ,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct dvb_filter_pes2ts *VAR_0,
        unsigned char *VAR_1, int VAR_2, int VAR_3)
{
 unsigned char *VAR_4=VAR_0->buf;
 int VAR_5=0, VAR_6;



 if (VAR_3)
  VAR_4[1]|=0x40;
 else
  VAR_4[1]&=~0x40;
 while (VAR_2>=184) {
  VAR_4[3]=0x10|((VAR_0->cc++)&0x0f);
  FUNC_0(VAR_4+4, VAR_1, 184);
  if ((VAR_5=VAR_0->cb(VAR_0->priv, VAR_4)))
   return VAR_5;
  VAR_2-=184; VAR_1+=184;
  VAR_4[1]&=~0x40;
 }
 if (!VAR_2)
  return 0;
 VAR_4[3]=0x30|((VAR_0->cc++)&0x0f);
 VAR_6=183-VAR_2;
 if (VAR_6) {
  VAR_4[5]=0x00;
  if (VAR_6-1)
   FUNC_1(VAR_4+6, 0xff, VAR_6-1);
 }
 VAR_4[4]=VAR_6;
 FUNC_0(VAR_4+5+VAR_6, VAR_1, VAR_2);
 return VAR_0->cb(VAR_0->priv, VAR_4);
}
