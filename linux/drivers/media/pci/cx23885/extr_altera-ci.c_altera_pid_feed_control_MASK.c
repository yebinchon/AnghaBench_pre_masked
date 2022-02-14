
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netup_hw_pid_filter {int (* stop_feed ) (struct dvb_demux_feed*) ;int (* start_feed ) (struct dvb_demux_feed*) ;} ;
struct fpga_internal {struct netup_hw_pid_filter** pid_filt; } ;
struct fpga_inode {struct fpga_internal* internal; } ;
struct dvb_demux_feed {int pid; } ;


 int FUNC_0 (struct netup_hw_pid_filter*,int,int) ;
 int FUNC_1 (struct netup_hw_pid_filter*,int,int) ;
 struct fpga_inode* FUNC_2 (void*) ;
 int FUNC_3 (struct dvb_demux_feed*) ;
 int FUNC_4 (struct dvb_demux_feed*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, int VAR_1,
  struct dvb_demux_feed *VAR_2, int VAR_3)
{
 struct fpga_inode *VAR_4 = FUNC_2(VAR_0);
 struct fpga_internal *VAR_5 = VAR_4->internal;
 struct netup_hw_pid_filter *VAR_6 = VAR_5->pid_filt[VAR_1 - 1];

 FUNC_0(VAR_6, VAR_2->pid, VAR_3 ? 0 : 1);

 if (VAR_3)
  VAR_6->start_feed(VAR_2);
 else
  VAR_6->stop_feed(VAR_2);

 if (VAR_2->pid == 0x2000)
  FUNC_1(VAR_6, VAR_1,
      VAR_3 ? 0 : 1);

 return 0;
}
