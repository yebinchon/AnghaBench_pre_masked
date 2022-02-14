
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int address; } ;
struct visorchipset_device {struct visorchannel* controlvm_channel; TYPE_1__ controlvm_params; } ;
struct visorchannel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 struct visorchannel* FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct visorchipset_device *VAR_4)
{
 struct visorchannel *VAR_5;
 u64 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2,
       FUNC_1(&VAR_4->controlvm_params));
 if (VAR_7)
  return VAR_7;
 VAR_6 = VAR_4->controlvm_params.address;
 VAR_5 = FUNC_2(VAR_6, VAR_1,
       &VAR_3, 1);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->controlvm_channel = VAR_5;
 return 0;
}
