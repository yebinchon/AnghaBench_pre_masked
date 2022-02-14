
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_ep {int addr; int udc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct isp1760_ep *VAR_4, int VAR_5)
{
 FUNC_1(VAR_4->udc, VAR_1,
     FUNC_0(VAR_4->addr & VAR_3) |
     (VAR_5 == VAR_2 ? VAR_0 : 0));
}
