
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_port {int first_port; int port_cnt; struct ksz_hw* hw; } ;
struct ksz_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_hw*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ksz_port *VAR_2, int VAR_3)
{
 struct ksz_hw *VAR_4 = VAR_2->hw;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0, VAR_6 = VAR_2->first_port; VAR_5 < VAR_2->port_cnt; VAR_5++, VAR_6++)
  FUNC_0(VAR_4, VAR_6,
   VAR_0, VAR_1, VAR_3);
}
