
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct Outgoing {int segnum; int numsegs; int dataleft; scalar_t__ length; TYPE_2__* pkt; } ;
struct arcnet_local {struct Outgoing outgoing; } ;
struct arc_rfc1201 {int split_flag; int sequence; int proto; } ;
struct arc_hardware {int dummy; } ;
struct TYPE_3__ {scalar_t__ raw; struct arc_rfc1201 rfc1201; } ;
struct TYPE_4__ {TYPE_1__ soft; struct arc_hardware hard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*,char*,int,int,int ) ;
 int FUNC_1 (struct net_device*,struct arc_hardware*,struct arc_rfc1201*,int,int) ;
 struct arcnet_local* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 struct arcnet_local *VAR_5 = FUNC_2(VAR_3);
 struct Outgoing *VAR_6 = &VAR_5->outgoing;
 struct arc_hardware *VAR_7 = &VAR_6->pkt->hard;
 struct arc_rfc1201 *VAR_8 = &VAR_6->pkt->soft.rfc1201, *VAR_9;
 int VAR_10 = VAR_2 - VAR_1;
 int VAR_11;

 FUNC_0(VAR_0, VAR_3,
     "rfc1201 continue_tx: loading segment %d(+1) of %d (seq=%d)\n",
     VAR_6->segnum, VAR_6->numsegs, VAR_8->sequence);


 VAR_9 = (struct arc_rfc1201 *)
     (VAR_6->pkt->soft.raw + VAR_6->length - VAR_6->dataleft);

 if (!VAR_6->segnum)
  VAR_9->split_flag = ((VAR_6->numsegs - 2) << 1) | 1;
 else {
  VAR_9->split_flag = VAR_6->segnum << 1;
  VAR_9->proto = VAR_8->proto;
  VAR_9->sequence = VAR_8->sequence;
 }

 VAR_11 = VAR_10;
 if (VAR_11 > VAR_6->dataleft)
  VAR_11 = VAR_6->dataleft;
 VAR_6->dataleft -= VAR_11;

 FUNC_1(VAR_3, VAR_7, VAR_9, VAR_11 + VAR_1, VAR_4);

 VAR_6->segnum++;
 if (VAR_6->segnum >= VAR_6->numsegs)
  return 1;
 else
  return 0;
}
