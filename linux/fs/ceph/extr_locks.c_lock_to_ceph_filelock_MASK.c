
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct file_lock {int fl_type; int fl_owner; scalar_t__ fl_pid; scalar_t__ fl_start; scalar_t__ fl_end; } ;
struct ceph_filelock {int type; void* owner; void* pid; void* client; void* length; void* start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file_lock *VAR_4,
     struct ceph_filelock *VAR_5)
{
 int VAR_6 = 0;
 VAR_5->start = FUNC_0(VAR_4->fl_start);
 VAR_5->length = FUNC_0(VAR_4->fl_end - VAR_4->fl_start + 1);
 VAR_5->client = FUNC_0(0);
 VAR_5->pid = FUNC_0((u64)VAR_4->fl_pid);
 VAR_5->owner = FUNC_0(FUNC_2(VAR_4->fl_owner));

 switch (VAR_4->fl_type) {
 case 130:
  VAR_5->type = VAR_1;
  break;
 case 128:
  VAR_5->type = VAR_0;
  break;
 case 129:
  VAR_5->type = VAR_2;
  break;
 default:
  FUNC_1("Have unknown lock type %d\n", VAR_4->fl_type);
  VAR_6 = -VAR_3;
 }

 return VAR_6;
}
