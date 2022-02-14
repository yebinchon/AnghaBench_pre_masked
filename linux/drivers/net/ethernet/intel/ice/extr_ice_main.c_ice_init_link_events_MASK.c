
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_port_info {int lport; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct ice_port_info*,int,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ice_port_info *VAR_4)
{
 u16 VAR_5;

 VAR_5 = ~((u16)(VAR_3 | VAR_1 |
         VAR_2));

 if (FUNC_2(VAR_4->hw, VAR_4->lport, VAR_5, ((void*)0))) {
  FUNC_0(FUNC_3(VAR_4->hw),
   "Failed to set link event mask for port %d\n",
   VAR_4->lport);
  return -VAR_0;
 }

 if (FUNC_1(VAR_4, 1, ((void*)0), ((void*)0))) {
  FUNC_0(FUNC_3(VAR_4->hw),
   "Failed to enable link events for port %d\n",
   VAR_4->lport);
  return -VAR_0;
 }

 return 0;
}
