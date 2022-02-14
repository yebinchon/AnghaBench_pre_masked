
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* firmware_path; } ;
struct TYPE_3__ {scalar_t__ fw_alternative_path; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(void)
{




 FUNC_0(VAR_2.firmware_path, VAR_1,
  VAR_0);
 if ((VAR_3) && (VAR_3->fw_alternative_path) &&
     (VAR_2.firmware_path[0] == '\0')) {
  FUNC_0(VAR_2.firmware_path,
   VAR_3->fw_alternative_path,
   VAR_0);
 }
}
