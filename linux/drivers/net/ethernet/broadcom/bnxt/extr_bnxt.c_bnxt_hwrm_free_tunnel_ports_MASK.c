
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {scalar_t__ nge_port_cnt; scalar_t__ vxlan_port_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_2)
{
 if (VAR_2->vxlan_port_cnt) {
  FUNC_0(
   VAR_2, VAR_1);
 }
 VAR_2->vxlan_port_cnt = 0;
 if (VAR_2->nge_port_cnt) {
  FUNC_0(
   VAR_2, VAR_0);
 }
 VAR_2->nge_port_cnt = 0;
}
