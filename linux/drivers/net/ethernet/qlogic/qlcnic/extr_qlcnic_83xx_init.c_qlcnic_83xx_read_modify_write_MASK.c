
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;
struct qlc_83xx_rmw {int dummy; } ;
struct qlc_83xx_entry_hdr {int count; scalar_t__ delay; } ;
struct qlc_83xx_entry {int arg2; int arg1; } ;


 int FUNC_0 (struct qlcnic_adapter*,int ,int ,struct qlc_83xx_rmw*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0,
       struct qlc_83xx_entry_hdr *VAR_1)
{
 int VAR_2;
 struct qlc_83xx_entry *VAR_3;
 struct qlc_83xx_rmw *VAR_4;

 VAR_4 = (struct qlc_83xx_rmw *)((char *)VAR_1 +
       sizeof(struct qlc_83xx_entry_hdr));

 VAR_3 = (struct qlc_83xx_entry *)((char *)VAR_4 +
       sizeof(struct qlc_83xx_rmw));

 for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++, VAR_3++) {
  FUNC_0(VAR_0, VAR_3->arg1,
     VAR_3->arg2, VAR_4);
  if (VAR_1->delay)
   FUNC_1((u32)(VAR_1->delay));
 }
}
