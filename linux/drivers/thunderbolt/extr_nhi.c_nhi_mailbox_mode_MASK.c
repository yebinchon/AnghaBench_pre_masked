
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_nhi {scalar_t__ iobase; } ;
typedef enum nhi_fw_mode { ____Placeholder_nhi_fw_mode } nhi_fw_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

enum nhi_fw_mode FUNC_1(struct tb_nhi *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->iobase + VAR_0);
 VAR_4 &= VAR_1;
 VAR_4 >>= VAR_2;

 return (enum nhi_fw_mode)VAR_4;
}
