
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct fc_ct_hdr {int ct_cmd; void* ct_fs_subtype; void* ct_fs_type; int ct_rev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint16_t VAR_4)
{
 struct fc_ct_hdr *VAR_5 = (struct fc_ct_hdr *)VAR_1;
 VAR_5->ct_rev = VAR_0;
 VAR_5->ct_fs_type = VAR_2;
 VAR_5->ct_fs_subtype = VAR_3;
 VAR_5->ct_cmd = FUNC_0(VAR_4);
}
