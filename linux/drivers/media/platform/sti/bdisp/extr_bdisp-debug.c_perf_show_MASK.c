
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct bdisp_dev* private; } ;
struct bdisp_request {int nb_req; } ;
struct TYPE_2__ {int min_duration; int max_duration; int last_duration; int tot_duration; struct bdisp_request copy_request; } ;
struct bdisp_dev {TYPE_1__ dbg; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct bdisp_dev *VAR_3 = VAR_1->private;
 struct bdisp_request *VAR_4 = &VAR_3->dbg.copy_request;
 s64 VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (!VAR_4->nb_req) {
  FUNC_2(VAR_1, "No request\n");
  return 0;
 }

 VAR_5 = FUNC_0(VAR_3->dbg.tot_duration, VAR_4->nb_req);
 if (VAR_5 > VAR_0)
  VAR_6 = 0;
 else
  VAR_6 = VAR_0 / (s32)VAR_5;

 if (VAR_3->dbg.min_duration > VAR_0)
  VAR_7 = 0;
 else
  VAR_7 = VAR_0 / (s32)VAR_3->dbg.min_duration;

 if (VAR_3->dbg.max_duration > VAR_0)
  VAR_8 = 0;
 else
  VAR_8 = VAR_0 / (s32)VAR_3->dbg.max_duration;

 if (VAR_3->dbg.last_duration > VAR_0)
  VAR_9 = 0;
 else
  VAR_9 = VAR_0 / (s32)VAR_3->dbg.last_duration;

 FUNC_1(VAR_1, "HW processing (%d requests):\n", VAR_4->nb_req);
 FUNC_1(VAR_1, " Average: %5lld us  (%3d fps)\n",
     VAR_5, VAR_6);
 FUNC_1(VAR_1, " Min-Max: %5lld us  (%3d fps) - %5lld us  (%3d fps)\n",
     VAR_3->dbg.min_duration, VAR_7,
     VAR_3->dbg.max_duration, VAR_8);
 FUNC_1(VAR_1, " Last:    %5lld us  (%3d fps)\n",
     VAR_3->dbg.last_duration, VAR_9);

 return 0;
}
