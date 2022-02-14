
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct seq_file {struct adapter* private; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;
typedef int buf ;


 unsigned int FUNC_0 (unsigned long long) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 unsigned int FUNC_2 (unsigned long long) ;
 unsigned int FUNC_3 (unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct seq_file*,char*,unsigned long long) ;
 unsigned long long FUNC_5 (struct adapter*,int ) ;
 unsigned long long FUNC_6 (char*,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_10, void *VAR_11)
{
 char VAR_12[32];
 struct adapter *VAR_13 = VAR_10->private;
 unsigned int VAR_14 = 1000000000 / VAR_13->params.vpd.cclk;
 u32 VAR_15 = FUNC_5(VAR_13, VAR_9);
 unsigned int VAR_16 = FUNC_2(VAR_15);
 unsigned int VAR_17 = FUNC_0(VAR_15);
 unsigned long long VAR_18 = (VAR_14 << VAR_16) / 1000000;

 FUNC_4(VAR_10, "Core clock period: %s ns\n",
     FUNC_6(VAR_12, sizeof(VAR_12), VAR_14, 1000));
 FUNC_4(VAR_10, "TP timer tick: %s us\n",
     FUNC_6(VAR_12, sizeof(VAR_12), (VAR_14 << VAR_16), 1000000));
 FUNC_4(VAR_10, "TCP timestamp tick: %s us\n",
     FUNC_6(VAR_12, sizeof(VAR_12),
        (VAR_14 << FUNC_3(VAR_15)), 1000000));
 FUNC_4(VAR_10, "DACK tick: %s us\n",
     FUNC_6(VAR_12, sizeof(VAR_12), (VAR_14 << VAR_17), 1000000));
 FUNC_4(VAR_10, "DACK timer: %u us\n",
     ((VAR_14 << VAR_17) / 1000000) *
     FUNC_5(VAR_13, VAR_0));
 FUNC_4(VAR_10, "Retransmit min: %llu us\n",
     VAR_18 * FUNC_5(VAR_13, VAR_8));
 FUNC_4(VAR_10, "Retransmit max: %llu us\n",
     VAR_18 * FUNC_5(VAR_13, VAR_7));
 FUNC_4(VAR_10, "Persist timer min: %llu us\n",
     VAR_18 * FUNC_5(VAR_13, VAR_6));
 FUNC_4(VAR_10, "Persist timer max: %llu us\n",
     VAR_18 * FUNC_5(VAR_13, VAR_5));
 FUNC_4(VAR_10, "Keepalive idle timer: %llu us\n",
     VAR_18 * FUNC_5(VAR_13, VAR_3));
 FUNC_4(VAR_10, "Keepalive interval: %llu us\n",
     VAR_18 * FUNC_5(VAR_13, VAR_4));
 FUNC_4(VAR_10, "Initial SRTT: %llu us\n",
     VAR_18 * FUNC_1(FUNC_5(VAR_13, VAR_2)));
 FUNC_4(VAR_10, "FINWAIT2 timer: %llu us\n",
     VAR_18 * FUNC_5(VAR_13, VAR_1));

 return 0;
}
