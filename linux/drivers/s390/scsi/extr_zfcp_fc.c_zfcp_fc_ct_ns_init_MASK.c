
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fc_ct_hdr {void* ct_mr_size; void* ct_cmd; int ct_fs_subtype; int ct_fs_type; int ct_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct fc_ct_hdr *VAR_3, u16 VAR_4, u16 VAR_5)
{
 VAR_3->ct_rev = VAR_0;
 VAR_3->ct_fs_type = VAR_1;
 VAR_3->ct_fs_subtype = VAR_2;
 VAR_3->ct_cmd = FUNC_0(VAR_4);
 VAR_3->ct_mr_size = FUNC_0(VAR_5 / 4);
}
