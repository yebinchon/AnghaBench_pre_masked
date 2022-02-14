
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_pcie_res_desc {scalar_t__ pf_type; scalar_t__ pf_num; scalar_t__ pf_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u16 FUNC_0(u8 *VAR_5, u32 VAR_6, u16 *VAR_7)
{
 struct be_res_desc_hdr *VAR_8 = (struct be_res_desc_hdr *)VAR_5;
 struct be_pcie_res_desc *VAR_9 = ((void*)0);
 int VAR_10;
 u16 VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (VAR_8->desc_type == VAR_2 ||
      VAR_8->desc_type == VAR_3) {
   VAR_9 = (struct be_pcie_res_desc *)VAR_8;
   if (VAR_9->pf_state && (VAR_9->pf_type == VAR_0 ||
            VAR_9->pf_type == VAR_1)) {
    VAR_7[VAR_11++] = VAR_9->pf_num;
   }
  }

  VAR_8->desc_len = VAR_8->desc_len ? : VAR_4;
  VAR_8 = (void *)VAR_8 + VAR_8->desc_len;
 }
 return VAR_11;
}
