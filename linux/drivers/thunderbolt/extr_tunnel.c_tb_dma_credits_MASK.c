
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nfc_credits; } ;
struct tb_port {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static u32 FUNC_1(struct tb_port *VAR_2)
{
 u32 VAR_3;

 VAR_3 = (VAR_2->config.nfc_credits & VAR_0) >>
  VAR_1;
 return FUNC_0(VAR_3, 13U);
}
