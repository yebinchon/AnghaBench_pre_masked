
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2fb_par {scalar_t__ type; int mem_control; int boot_address; int mem_config; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct pm2fb_par*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct pm2fb_par*,int ) ;
 int FUNC_5 (struct pm2fb_par*,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct pm2fb_par *VAR_8)
{
 if (VAR_8->type == VAR_7)
  FUNC_5(VAR_8, VAR_6, 0);
 FUNC_5(VAR_8, VAR_5, 0);
 FUNC_3();
 while (FUNC_4(VAR_8, VAR_5) & VAR_0)
  FUNC_2();
 FUNC_3();







 FUNC_1(VAR_8, 3);
 FUNC_5(VAR_8, VAR_4, VAR_8->mem_control);
 FUNC_5(VAR_8, VAR_1, VAR_8->boot_address);
 FUNC_6();
 FUNC_5(VAR_8, VAR_3, VAR_8->mem_config);
}
