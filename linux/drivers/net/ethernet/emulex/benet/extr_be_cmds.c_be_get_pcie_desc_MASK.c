
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_pcie_res_desc {scalar_t__ pf_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct be_pcie_res_desc *FUNC_0(u8 *VAR_3, u32 VAR_4,
       u8 VAR_5)
{
 struct be_res_desc_hdr *VAR_6 = (struct be_res_desc_hdr *)VAR_3;
 struct be_pcie_res_desc *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_6->desc_type == VAR_0 ||
      VAR_6->desc_type == VAR_1) {
   VAR_7 = (struct be_pcie_res_desc *)VAR_6;
   if (VAR_7->pf_num == VAR_5)
    return VAR_7;
  }

  VAR_6->desc_len = VAR_6->desc_len ? : VAR_2;
  VAR_6 = (void *)VAR_6 + VAR_6->desc_len;
 }
 return ((void*)0);
}
