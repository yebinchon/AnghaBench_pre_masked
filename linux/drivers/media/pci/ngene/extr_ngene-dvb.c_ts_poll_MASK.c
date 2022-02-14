
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngene_channel {struct ngene* dev; } ;
struct dvb_ringbuffer {int queue; } ;
struct ngene {struct dvb_ringbuffer tsout_rbuf; struct dvb_ringbuffer tsin_rbuf; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {struct ngene_channel* priv; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_ringbuffer*) ;
 int FUNC_1 (struct dvb_ringbuffer*) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct dvb_device *VAR_6 = VAR_4->private_data;
 struct ngene_channel *VAR_7 = VAR_6->priv;
 struct ngene *VAR_8 = VAR_7->dev;
 struct dvb_ringbuffer *VAR_9 = &VAR_8->tsin_rbuf;
 struct dvb_ringbuffer *VAR_10 = &VAR_8->tsout_rbuf;
 __poll_t VAR_11 = 0;

 FUNC_2(VAR_4, &VAR_9->queue, VAR_5);
 FUNC_2(VAR_4, &VAR_10->queue, VAR_5);

 if (!FUNC_0(VAR_9))
  VAR_11 |= VAR_0 | VAR_2;
 if (FUNC_1(VAR_10) >= 188)
  VAR_11 |= VAR_1 | VAR_3;

 return VAR_11;
}
