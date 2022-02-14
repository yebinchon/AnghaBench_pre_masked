
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct tp_fcoe_stats {int dummy; } ;
struct seq_file {struct adapter* private; } ;
struct TYPE_3__ {size_t nchan; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {int stats_lock; TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,size_t,struct tp_fcoe_stats*,int) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_4)
{
 struct adapter *VAR_5 = VAR_4->private;
 struct tp_fcoe_stats VAR_6[VAR_0];
 u8 VAR_7;

 FUNC_1(&VAR_5->stats_lock);
 for (VAR_7 = 0; VAR_7 < VAR_5->params.arch.nchan; VAR_7++)
  FUNC_3(VAR_5, VAR_7, &VAR_6[VAR_7], 0);
 FUNC_2(&VAR_5->stats_lock);

 FUNC_0("fcoe_octets_ddp", VAR_3);
 FUNC_0("fcoe_frames_ddp", VAR_1);
 FUNC_0("fcoe_frames_drop", VAR_2);
}
