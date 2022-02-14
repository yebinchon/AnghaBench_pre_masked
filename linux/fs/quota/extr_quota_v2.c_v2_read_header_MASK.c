
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v2_disk_dqheader {int dummy; } ;
struct super_block {TYPE_1__* s_op; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* quota_read ) (struct super_block*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,char*,int,int) ;
 int FUNC_1 (struct super_block*,int,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_1, int VAR_2,
     struct v2_disk_dqheader *VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = VAR_1->s_op->quota_read(VAR_1, VAR_2, (char *)VAR_3,
        sizeof(struct v2_disk_dqheader), 0);
 if (VAR_4 != sizeof(struct v2_disk_dqheader)) {
  FUNC_0(VAR_1, "Failed header read: expected=%zd got=%zd",
       sizeof(struct v2_disk_dqheader), VAR_4);
  if (VAR_4 < 0)
   return VAR_4;
  return -VAR_0;
 }
 return 0;
}
