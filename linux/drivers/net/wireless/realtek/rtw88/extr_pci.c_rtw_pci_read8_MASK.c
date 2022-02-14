
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtw_pci {scalar_t__ mmap; } ;
struct rtw_dev {scalar_t__ priv; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct rtw_dev *VAR_0, u32 VAR_1)
{
 struct rtw_pci *VAR_2 = (struct rtw_pci *)VAR_0->priv;

 return FUNC_0(VAR_2->mmap + VAR_1);
}
