
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_mbox_info {int gmbox_sz; int gmbox_addr; int block_size; int htc_ext_sz; int htc_ext_addr; int htc_addr; } ;
struct ath6kl {struct ath6kl_mbox_info mbox_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct ath6kl *VAR_6)
{
 struct ath6kl_mbox_info *VAR_7 = &VAR_6->mbox_info;


 VAR_7->htc_addr = VAR_4;
 VAR_7->htc_ext_addr = VAR_2;
 VAR_7->htc_ext_sz = VAR_3;
 VAR_7->block_size = VAR_5;
 VAR_7->gmbox_addr = VAR_0;
 VAR_7->gmbox_sz = VAR_1;
}
