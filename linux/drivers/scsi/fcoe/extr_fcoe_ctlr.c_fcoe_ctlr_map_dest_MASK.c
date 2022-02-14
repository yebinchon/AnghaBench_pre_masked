
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr {scalar_t__ mode; int map_dest; scalar_t__ dest_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct fcoe_ctlr *VAR_3)
{
 if (VAR_3->mode == VAR_1)
  FUNC_0(VAR_3->dest_addr, VAR_2);
 else
  FUNC_0(VAR_3->dest_addr, VAR_0);
 FUNC_0(VAR_3->dest_addr + 3, 0);
 VAR_3->map_dest = 1;
}
