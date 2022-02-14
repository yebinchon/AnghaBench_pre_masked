
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ringbuffer {int queue; } ;


 int FUNC_0 (struct dvb_ringbuffer*,int) ;
 int FUNC_1 (struct dvb_ringbuffer*) ;
 int FUNC_2 (struct dvb_ringbuffer*,int *,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dvb_ringbuffer *VAR_0, u8 *VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_0) < VAR_2 + 2)
  return;

 FUNC_0(VAR_0, VAR_2 >> 8);
 FUNC_0(VAR_0, VAR_2 & 0xff);
 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_0->queue);
}
