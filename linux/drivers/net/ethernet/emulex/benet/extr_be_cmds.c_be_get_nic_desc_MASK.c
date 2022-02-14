
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_nic_res_desc {scalar_t__ pf_num; int flags; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct be_nic_res_desc *FUNC_1(u8 *VAR_5, u32 VAR_6,
            bool VAR_7, u8 VAR_8)
{
 struct be_res_desc_hdr *VAR_9 = (struct be_res_desc_hdr *)VAR_5;
 struct be_nic_res_desc *VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  if (VAR_9->desc_type == VAR_0 ||
      VAR_9->desc_type == VAR_1) {
   VAR_10 = (struct be_nic_res_desc *)VAR_9;

   if ((VAR_8 == VAR_2 ||
        VAR_10->pf_num == VAR_8) &&
       (!VAR_7 || VAR_10->flags & FUNC_0(VAR_4)))
    return VAR_10;
  }
  VAR_9->desc_len = VAR_9->desc_len ? : VAR_3;
  VAR_9 = (void *)VAR_9 + VAR_9->desc_len;
 }
 return ((void*)0);
}
