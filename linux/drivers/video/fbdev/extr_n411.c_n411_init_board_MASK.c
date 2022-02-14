
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hecubafb_par {int (* send_data ) (struct hecubafb_par*,int) ;int (* send_command ) (struct hecubafb_par*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hecubafb_par*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hecubafb_par*,int ) ;
 int FUNC_2 (struct hecubafb_par*,int) ;
 int FUNC_3 (struct hecubafb_par*,int ) ;
 int FUNC_4 (struct hecubafb_par*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct hecubafb_par *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->send_command(VAR_4, VAR_1);
 VAR_4->send_data(VAR_4, 0x81);


 FUNC_5(1000);


 if (!VAR_2) {
  VAR_4->send_command(VAR_4, VAR_0);
  VAR_4->send_data(VAR_4, VAR_3);
 }

 return 0;
}
