
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_mbox_msg {int cmd; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_0(const struct tegra_xusb_mbox_msg *VAR_4)
{
 return (VAR_4->cmd & VAR_2) << VAR_3 |
        (VAR_4->data & VAR_0) << VAR_1;
}
