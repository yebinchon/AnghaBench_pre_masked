
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusb {scalar_t__ running_feed_count; } ;
struct dvb_demux_feed {int index; scalar_t__ demux; } ;


 int FUNC_0 (struct ttusb*,int ) ;
 int FUNC_1 (struct ttusb*) ;

__attribute__((used)) static int FUNC_2(struct dvb_demux_feed *VAR_0)
{
 struct ttusb *VAR_1 = (struct ttusb *) VAR_0->demux;

 FUNC_0(VAR_1, VAR_0->index);

 if (--VAR_1->running_feed_count == 0)
  FUNC_1(VAR_1);

 return 0;
}
