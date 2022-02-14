
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct v9fs_session_info {int session_lock_timeout; } ;
struct p9_flock {scalar_t__ start; scalar_t__ length; scalar_t__ client_id; int flags; int proc_id; int type; } ;
struct p9_fid {TYPE_1__* clnt; } ;
struct file_lock {int fl_flags; char fl_type; scalar_t__ fl_start; scalar_t__ fl_end; int fl_pid; } ;
struct file {struct p9_fid* private_data; } ;
typedef int flock ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct file*,struct file_lock*) ;
 int FUNC_7 (struct p9_flock*,int ,int) ;
 int FUNC_8 (struct p9_fid*,struct p9_flock*,int*) ;
 scalar_t__ FUNC_9 (int ) ;
 struct v9fs_session_info* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_8, int VAR_9, struct file_lock *VAR_10)
{
 struct p9_flock VAR_11;
 struct p9_fid *VAR_12;
 uint8_t VAR_13 = 130;
 int VAR_14 = 0;
 unsigned char VAR_15;
 struct v9fs_session_info *VAR_16;

 VAR_12 = VAR_8->private_data;
 FUNC_1(VAR_12 == ((void*)0));

 if ((VAR_10->fl_flags & VAR_2) != VAR_2)
  FUNC_0();

 VAR_14 = FUNC_6(VAR_8, VAR_10);
 if (VAR_14 < 0)
  goto out;


 FUNC_7(&VAR_11, 0, sizeof(VAR_11));

 switch (VAR_10->fl_type) {
 case 134:
  VAR_11.type = VAR_5;
  break;
 case 132:
  VAR_11.type = VAR_7;
  break;
 case 133:
  VAR_11.type = VAR_6;
  break;
 }
 VAR_11.start = VAR_10->fl_start;
 if (VAR_10->fl_end == VAR_3)
  VAR_11.length = 0;
 else
  VAR_11.length = VAR_10->fl_end - VAR_10->fl_start + 1;
 VAR_11.proc_id = VAR_10->fl_pid;
 VAR_11.client_id = VAR_12->clnt->name;
 if (FUNC_2(VAR_9))
  VAR_11.flags = VAR_4;

 VAR_16 = FUNC_10(FUNC_4(VAR_8));





 for (;;) {
  VAR_14 = FUNC_8(VAR_12, &VAR_11, &VAR_13);
  if (VAR_14 < 0)
   goto out_unlock;

  if (VAR_13 != 131)
   break;
  if (VAR_13 == 131 && !FUNC_2(VAR_9))
   break;
  if (FUNC_9(VAR_16->session_lock_timeout)
    != 0)
   break;




  if (VAR_11.client_id != VAR_12->clnt->name) {
   FUNC_5(VAR_11.client_id);
   VAR_11.client_id = VAR_12->clnt->name;
  }
 }


 switch (VAR_13) {
 case 128:
  VAR_14 = 0;
  break;
 case 131:
  VAR_14 = -VAR_0;
  break;
 default:
  FUNC_3(1, "unknown lock status code: %d\n", VAR_13);

 case 130:
 case 129:
  VAR_14 = -VAR_1;
  break;
 }

out_unlock:




 if (VAR_14 < 0 && VAR_10->fl_type != 133) {
  VAR_15 = VAR_10->fl_type;
  VAR_10->fl_type = 133;

  FUNC_6(VAR_8, VAR_10);
  VAR_10->fl_type = VAR_15;
 }
 if (VAR_11.client_id != VAR_12->clnt->name)
  FUNC_5(VAR_11.client_id);
out:
 return VAR_14;
}
