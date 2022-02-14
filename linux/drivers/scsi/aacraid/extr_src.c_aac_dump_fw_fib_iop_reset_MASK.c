
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int supported_options3; } ;
struct aac_dev {TYPE_1__ supplement_adapter_info; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_dev*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct aac_dev *VAR_3)
{
 __le32 VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = VAR_3->supplement_adapter_info.supported_options3;
 if (!(VAR_4 & VAR_0))
  return;

 FUNC_0(VAR_3, VAR_1,
   0, 0, 0, 0, 0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
}
