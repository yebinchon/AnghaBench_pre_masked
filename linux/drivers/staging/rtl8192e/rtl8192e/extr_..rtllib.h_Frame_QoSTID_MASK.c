
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tid; } ;
union frameqos {TYPE_1__ field; } ;
typedef int u8 ;
typedef int u16 ;
struct rtllib_hdr_3addr {int frame_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(u8 *VAR_2)
{
 struct rtllib_hdr_3addr *VAR_3;
 u16 VAR_4;

 VAR_3 = (struct rtllib_hdr_3addr *)VAR_2;
 VAR_4 = FUNC_0(VAR_3->frame_ctl);
 return (u8)((union frameqos *)(VAR_2 + (((VAR_4 & VAR_1) &&
      (VAR_4 & VAR_0)) ? 30 : 24)))->field.tid;
}
