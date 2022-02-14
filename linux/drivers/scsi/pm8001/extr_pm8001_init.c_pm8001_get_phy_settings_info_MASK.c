
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pm8001_ioctl_payload {int minor_function; int length; int func_specific; scalar_t__ offset; } ;
struct pm8001_hba_info {int * nvmd_completion; } ;
struct TYPE_2__ {int (* get_nvmd_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_6 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct pm8001_hba_info *VAR_4)
{
 return 0;
}
