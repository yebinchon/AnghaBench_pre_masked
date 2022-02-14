
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int tmp_hdr ;
struct TYPE_2__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {int dummy; } ;
struct qlcnic_83xx_dump_template_hdr {int version; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int *,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct qlcnic_adapter *VAR_2,
           struct qlcnic_cmd_args *VAR_3)
{
 struct qlcnic_83xx_dump_template_hdr VAR_4;
 u32 VAR_5 = sizeof(VAR_4) / sizeof(u32);
 int VAR_6 = 0;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2,
      VAR_1,
      (u8 *)&VAR_4, VAR_5);

 FUNC_3(VAR_2);

 VAR_3->rsp.arg[2] = VAR_4.size;
 VAR_3->rsp.arg[3] = VAR_4.version;

 return VAR_6;
}
