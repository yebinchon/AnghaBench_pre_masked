
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct be_res_desc_hdr {scalar_t__ desc_type; int desc_len; } ;
struct be_port_res_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct be_port_res_desc *FUNC_0(u8 *VAR_2, u32 VAR_3)
{
 struct be_res_desc_hdr *VAR_4 = (struct be_res_desc_hdr *)VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4->desc_type == VAR_0)
   return (struct be_port_res_desc *)VAR_4;

  VAR_4->desc_len = VAR_4->desc_len ? : VAR_1;
  VAR_4 = (void *)VAR_4 + VAR_4->desc_len;
 }
 return ((void*)0);
}
