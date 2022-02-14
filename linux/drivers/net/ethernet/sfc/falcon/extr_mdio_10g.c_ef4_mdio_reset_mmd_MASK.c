
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ef4_nic {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ef4_nic*,int,int ) ;
 int FUNC_2 (struct ef4_nic*,int,int ,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct ef4_nic *VAR_3, int VAR_4,
       int VAR_5, int VAR_6)
{
 u32 VAR_7;


 FUNC_0(VAR_5 * VAR_6 >= 5000);

 FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2);

 do {
  FUNC_3(VAR_6);
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_1);
  VAR_5--;

 } while (VAR_5 && (VAR_7 & VAR_2));

 return VAR_5 ? VAR_5 : -VAR_0;
}
