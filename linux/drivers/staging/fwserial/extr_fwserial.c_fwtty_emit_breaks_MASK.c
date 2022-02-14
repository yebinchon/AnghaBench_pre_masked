
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {int brk; } ;
struct fwtty_port {unsigned long break_last; unsigned long cps; int mstatus; TYPE_1__ icount; int emit_breaks; int port; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fwtty_port*,char*,int) ;
 unsigned long VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct work_struct*) ;
 struct fwtty_port* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_6)
{
 struct fwtty_port *VAR_7 = FUNC_4(FUNC_3(VAR_6), VAR_4);
 static const char VAR_8[16];
 unsigned long VAR_9 = VAR_5;
 unsigned long VAR_10 = VAR_9 - VAR_7->break_last;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;


 VAR_11 = (VAR_10 * VAR_7->cps) / VAR_1 + 1;
 VAR_7->break_last = VAR_9;

 FUNC_0(VAR_7, "sending %d brks\n", VAR_11);

 while (VAR_11) {
  VAR_12 = FUNC_1(VAR_11, 16);
  VAR_13 = FUNC_6(&VAR_7->port, VAR_8,
            VAR_2, VAR_12);
  VAR_11 -= VAR_13;
  VAR_14 += VAR_13;
  if (VAR_13 < VAR_12)
   break;
 }
 FUNC_5(&VAR_7->port);

 if (VAR_7->mstatus & (VAR_3 << 24))
  FUNC_2(&VAR_7->emit_breaks, VAR_0);
 VAR_7->icount.brk += VAR_14;
}
