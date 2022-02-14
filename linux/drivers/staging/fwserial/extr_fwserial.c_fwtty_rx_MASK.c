
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lost; int reads; } ;
struct TYPE_3__ {size_t rx; int overrun; } ;
struct fwtty_port {int mstatus; int overrun; unsigned int status_mask; unsigned int ignore_mask; TYPE_2__ stats; TYPE_1__ icount; int port; scalar_t__ write_only; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct fwtty_port*,char*,int) ;
 int FUNC_1 (struct fwtty_port*,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct fwtty_port*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct fwtty_port *VAR_6, unsigned char *VAR_7, size_t VAR_8)
{
 int VAR_9, VAR_10 = VAR_8;
 unsigned int VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_6, "%d\n", VAR_10);
 FUNC_2(VAR_6->stats.reads, VAR_10);

 if (VAR_6->write_only) {
  VAR_10 = 0;
  goto out;
 }


 VAR_11 = (VAR_6->mstatus >> 24) & ~VAR_4;

 if (VAR_6->overrun)
  VAR_11 |= VAR_5;

 if (VAR_11 & VAR_5)
  ++VAR_6->icount.overrun;

 VAR_11 &= VAR_6->status_mask;
 if (VAR_11 & ~VAR_6->ignore_mask & VAR_5) {
  if (!FUNC_6(&VAR_6->port, 0, VAR_3)) {
   VAR_12 = -VAR_0;
   goto out;
  }
 }
 VAR_6->overrun = 0;

 if (VAR_11 & VAR_6->ignore_mask & ~VAR_5) {

  VAR_10 = 0;
  goto out;
 }

 VAR_9 = FUNC_7(&VAR_6->port, VAR_7, VAR_2, VAR_10);
 if (VAR_9 > 0)
  FUNC_5(&VAR_6->port);
 VAR_10 -= VAR_9;

 if (VAR_10) {
  VAR_6->overrun = 1;
  VAR_12 = -VAR_0;
  FUNC_1(VAR_6, "flip buffer overrun\n");

 } else {





  if (FUNC_4(&VAR_6->port) < VAR_1)
   FUNC_3(VAR_6);
 }

out:
 VAR_6->icount.rx += VAR_8;
 VAR_6->stats.lost += VAR_10;
 return VAR_12;
}
