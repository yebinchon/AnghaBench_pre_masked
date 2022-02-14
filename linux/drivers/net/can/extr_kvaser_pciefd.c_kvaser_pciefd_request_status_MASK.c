
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvaser_pciefd_can {int cmd_seq; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvaser_pciefd_can *VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_2;
 VAR_4 |= ++VAR_3->cmd_seq << VAR_1;
 FUNC_0(VAR_4, VAR_3->reg_base + VAR_0);
}
