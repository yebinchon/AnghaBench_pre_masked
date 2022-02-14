
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_sysfs_class {int dummy; } ;
struct TYPE_2__ {int check_func; } ;
struct pvr2_sysfs {TYPE_1__ channel; } ;
struct pvr2_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_sysfs*,struct pvr2_sysfs_class*) ;
 struct pvr2_sysfs* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,struct pvr2_context*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,struct pvr2_sysfs*) ;

struct pvr2_sysfs *FUNC_4(struct pvr2_context *VAR_3,
         struct pvr2_sysfs_class *VAR_4)
{
 struct pvr2_sysfs *VAR_5;
 VAR_5 = FUNC_1(sizeof(*VAR_5),VAR_0);
 if (!VAR_5) return VAR_5;
 FUNC_3(VAR_1,"Creating pvr2_sysfs id=%p",VAR_5);
 FUNC_2(&VAR_5->channel,VAR_3);
 VAR_5->channel.check_func = VAR_2;

 FUNC_0(VAR_5,VAR_4);
 return VAR_5;
}
