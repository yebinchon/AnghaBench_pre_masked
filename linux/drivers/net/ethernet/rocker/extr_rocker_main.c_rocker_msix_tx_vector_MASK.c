
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rocker_port {int port_number; int rocker; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct rocker_port *VAR_0)
{
 return FUNC_1(VAR_0->rocker,
      FUNC_0(VAR_0->port_number));
}
