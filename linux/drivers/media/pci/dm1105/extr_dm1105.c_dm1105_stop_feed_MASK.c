
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {int dummy; } ;
struct dm1105_dev {scalar_t__ full_ts_users; } ;


 int FUNC_0 (struct dm1105_dev*) ;
 struct dm1105_dev* FUNC_1 (struct dvb_demux_feed*) ;

__attribute__((used)) static int FUNC_2(struct dvb_demux_feed *VAR_0)
{
 struct dm1105_dev *VAR_1 = FUNC_1(VAR_0);

 if (--VAR_1->full_ts_users == 0)
  FUNC_0(VAR_1);

 return 0;
}
