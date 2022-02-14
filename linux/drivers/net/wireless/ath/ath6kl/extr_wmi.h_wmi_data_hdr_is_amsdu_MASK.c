
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_data_hdr {int info2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct wmi_data_hdr *VAR_2)
{
 return (FUNC_0(VAR_2->info2) >> VAR_1) &
          VAR_0;
}
