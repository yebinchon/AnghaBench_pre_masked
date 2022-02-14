
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int cmd; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union ism_cmd_simple {TYPE_2__ request; } ;
typedef int u32 ;
struct ism_dev {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (struct ism_dev*,union ism_cmd_simple*) ;
 int FUNC_1 (union ism_cmd_simple*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ism_dev *VAR_0, u32 VAR_1)
{
 union ism_cmd_simple VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.request.hdr.cmd = VAR_1;
 VAR_2.request.hdr.len = sizeof(VAR_2.request);

 return FUNC_0(VAR_0, &VAR_2);
}
