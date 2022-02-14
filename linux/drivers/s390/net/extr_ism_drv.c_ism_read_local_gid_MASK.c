
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int gid; } ;
struct TYPE_5__ {int len; int cmd; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
union ism_read_gid {TYPE_4__ response; TYPE_2__ request; } ;
struct ism_dev {TYPE_3__* smcd; } ;
typedef int cmd ;
struct TYPE_7__ {int local_gid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ism_dev*,union ism_read_gid*) ;
 int FUNC_1 (union ism_read_gid*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ism_dev *VAR_1)
{
 union ism_read_gid VAR_2;
 int VAR_3;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.request.hdr.cmd = VAR_0;
 VAR_2.request.hdr.len = sizeof(VAR_2.request);

 VAR_3 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_3)
  goto out;

 VAR_1->smcd->local_gid = VAR_2.response.gid;
out:
 return VAR_3;
}
