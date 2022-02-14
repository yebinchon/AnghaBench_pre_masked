
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int debugfs_entry; } ;
struct hva_dev {int instance_id; TYPE_1__ dbg; } ;
struct TYPE_4__ {int debugfs_entry; void* min_bitrate; void* min_period; void* min_duration; } ;
struct hva_ctx {TYPE_2__ dbg; struct hva_dev* hva_dev; } ;
typedef int name ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,struct hva_ctx*,int *) ;
 int FUNC_1 (char*,int,char*,int) ;

void FUNC_2(struct hva_ctx *VAR_2)
{
 struct hva_dev *VAR_3 = VAR_2->hva_dev;
 char VAR_4[4] = "";

 VAR_2->dbg.min_duration = VAR_0;
 VAR_2->dbg.min_period = VAR_0;
 VAR_2->dbg.min_bitrate = VAR_0;

 FUNC_1(VAR_4, sizeof(VAR_4), "%d", VAR_3->instance_id);

 VAR_2->dbg.debugfs_entry = FUNC_0(VAR_4, 0444,
           VAR_3->dbg.debugfs_entry,
           VAR_2, &VAR_1);
}
