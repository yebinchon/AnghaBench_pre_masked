
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_data_hdr {int info; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct wmi_data_hdr *VAR_2,
           u8 VAR_3)
{
 VAR_2->info &= ~(VAR_0 << VAR_1);
 VAR_2->info |= VAR_3 << VAR_1;
}
