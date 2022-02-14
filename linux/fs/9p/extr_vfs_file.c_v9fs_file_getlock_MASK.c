
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_getlock {int type; scalar_t__ start; scalar_t__ length; scalar_t__ client_id; int proc_id; } ;
struct p9_fid {TYPE_1__* clnt; } ;
struct file_lock {scalar_t__ fl_type; scalar_t__ fl_start; scalar_t__ fl_end; int fl_pid; } ;
struct file {struct p9_fid* private_data; } ;
typedef int glock ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct p9_getlock*,int ,int) ;
 int FUNC_3 (struct p9_fid*,struct p9_getlock*) ;
 int FUNC_4 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, struct file_lock *VAR_5)
{
 struct p9_getlock VAR_6;
 struct p9_fid *VAR_7;
 int VAR_8 = 0;

 VAR_7 = VAR_4->private_data;
 FUNC_0(VAR_7 == ((void*)0));

 FUNC_4(VAR_4, VAR_5);




 if (VAR_5->fl_type != VAR_1)
  return VAR_8;


 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.type = 129;
 VAR_6.start = VAR_5->fl_start;
 if (VAR_5->fl_end == VAR_3)
  VAR_6.length = 0;
 else
  VAR_6.length = VAR_5->fl_end - VAR_5->fl_start + 1;
 VAR_6.proc_id = VAR_5->fl_pid;
 VAR_6.client_id = VAR_7->clnt->name;

 VAR_8 = FUNC_3(VAR_7, &VAR_6);
 if (VAR_8 < 0)
  goto out;

 switch (VAR_6.type) {
 case 130:
  VAR_5->fl_type = VAR_0;
  break;
 case 128:
  VAR_5->fl_type = VAR_2;
  break;
 case 129:
  VAR_5->fl_type = VAR_1;
  break;
 }
 if (VAR_6.type != 129) {
  VAR_5->fl_start = VAR_6.start;
  if (VAR_6.length == 0)
   VAR_5->fl_end = VAR_3;
  else
   VAR_5->fl_end = VAR_6.start + VAR_6.length - 1;
  VAR_5->fl_pid = -VAR_6.proc_id;
 }
out:
 if (VAR_6.client_id != VAR_7->clnt->name)
  FUNC_1(VAR_6.client_id);
 return VAR_8;
}
