
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pluto {int full_ts_users; int users; } ;
struct dvb_demux_feed {int pid; scalar_t__ index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct pluto* FUNC_1 (struct dvb_demux_feed*) ;
 int FUNC_2 (struct pluto*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_demux_feed *VAR_5)
{
 struct pluto *VAR_6 = FUNC_1(VAR_5);


 if (VAR_6->users++ == 0)
  FUNC_2(VAR_6, FUNC_0(0), VAR_1 | VAR_2, 0);

 if ((VAR_5->pid < 0x2000) && (VAR_5->index < VAR_0))
  FUNC_2(VAR_6, FUNC_0(VAR_5->index), VAR_3 | VAR_4, VAR_3 | VAR_5->pid);
 else if (VAR_6->full_ts_users++ == 0)
  FUNC_2(VAR_6, FUNC_0(0), VAR_2, VAR_2);

 return 0;
}
