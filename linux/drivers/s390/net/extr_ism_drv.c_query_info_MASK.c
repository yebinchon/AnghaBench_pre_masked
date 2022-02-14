
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int cmd; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union ism_qi {int response; TYPE_2__ request; } ;
struct ism_dev {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ FUNC_2 (struct ism_dev*,union ism_qi*) ;
 int VAR_1 ;
 int FUNC_3 (union ism_qi*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ism_dev *VAR_2)
{
 union ism_qi VAR_3;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.request.hdr.cmd = VAR_0;
 VAR_3.request.hdr.len = sizeof(VAR_3.request);

 if (FUNC_2(VAR_2, &VAR_3))
  goto out;

 FUNC_1(VAR_1, 3, "query info");
 FUNC_0(VAR_1, 3, &VAR_3.response, sizeof(VAR_3.response));
out:
 return 0;
}
