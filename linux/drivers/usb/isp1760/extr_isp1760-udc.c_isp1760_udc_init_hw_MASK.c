
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_udc {int isp; scalar_t__ connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct isp1760_udc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct isp1760_udc *VAR_13)
{
 FUNC_2(VAR_13, VAR_11, VAR_1 | VAR_2 |
     VAR_3);

 FUNC_2(VAR_13, VAR_12, FUNC_0(7) | FUNC_0(6) |
     FUNC_0(5) | FUNC_0(4) | FUNC_0(3) |
     FUNC_0(2) | FUNC_0(1) | FUNC_0(0) |
     VAR_7 | VAR_10 | VAR_8 | VAR_9 |
     VAR_6 | VAR_5);

 if (VAR_13->connected)
  FUNC_1(VAR_13->isp, 1);

 FUNC_2(VAR_13, VAR_0, VAR_4);
}
