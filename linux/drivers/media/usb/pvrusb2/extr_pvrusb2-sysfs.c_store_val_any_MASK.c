
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvr2_sysfs_ctl_item {TYPE_2__* chptr; int cptr; } ;
struct TYPE_3__ {int hdw; } ;
struct TYPE_4__ {TYPE_1__ channel; } ;


 int FUNC_0 (int ,char const*,unsigned int,int*,int*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,char const*,unsigned int,int*,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pvr2_sysfs_ctl_item *VAR_0, int VAR_1,
    const char *VAR_2,unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5,VAR_6;
 if (VAR_1) {
  VAR_4 = FUNC_0(VAR_0->cptr, VAR_2, VAR_3,
          &VAR_5, &VAR_6);
 } else {
  VAR_4 = FUNC_2(VAR_0->cptr, VAR_2, VAR_3,
          &VAR_5, &VAR_6);
 }
 if (VAR_4 < 0) return VAR_4;
 VAR_4 = FUNC_1(VAR_0->cptr, VAR_5, VAR_6);
 FUNC_3(VAR_0->chptr->channel.hdw);
 return VAR_4;
}
