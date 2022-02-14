
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_port {int baudrate; } ;
struct net_device {int base_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct yam_port* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_4)
{
 struct yam_port *VAR_5 = FUNC_9(VAR_4);
 int VAR_6 = 115200 / VAR_5->baudrate;

 FUNC_10(0, FUNC_3(VAR_4->base_addr));
 FUNC_10(VAR_2 | VAR_1, FUNC_4(VAR_4->base_addr));
 FUNC_10(VAR_6, FUNC_0(VAR_4->base_addr));
 FUNC_10(0, FUNC_1(VAR_4->base_addr));
 FUNC_10(VAR_1, FUNC_4(VAR_4->base_addr));
 FUNC_10(VAR_3, FUNC_5(VAR_4->base_addr));
 FUNC_10(0x00, FUNC_2(VAR_4->base_addr));



 FUNC_8(FUNC_7(VAR_4->base_addr));
 FUNC_8(FUNC_6(VAR_4->base_addr));



 FUNC_10(VAR_0, FUNC_3(VAR_4->base_addr));
}
