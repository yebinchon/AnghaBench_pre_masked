
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_demux_feed*,int) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_demux_feed *VAR_1)
{
 FUNC_1(VAR_0, "start pid: 0x%04x", VAR_1->pid);
 return FUNC_0(VAR_1, 1);
}
