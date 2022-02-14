
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fw_hdr; int * fw_bin; } ;
struct brcms_info {TYPE_1__ fw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct brcms_info *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->fw.fw_bin[VAR_2]);
  FUNC_0(VAR_1->fw.fw_hdr[VAR_2]);
 }
}
