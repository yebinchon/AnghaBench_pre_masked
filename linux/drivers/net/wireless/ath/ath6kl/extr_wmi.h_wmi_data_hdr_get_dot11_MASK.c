
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_data_hdr {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u8 FUNC_0(struct wmi_data_hdr *VAR_3)
{
 u8 VAR_4;

 VAR_4 = (VAR_3->info >> VAR_2) &
       VAR_1;
 return (VAR_4 == VAR_0);
}
