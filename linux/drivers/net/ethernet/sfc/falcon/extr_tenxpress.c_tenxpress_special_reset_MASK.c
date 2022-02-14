
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ef4_nic*,int ,int ) ;
 int FUNC_1 (struct ef4_nic*,int ) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,int) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_7(struct ef4_nic *VAR_4)
{
 int VAR_5, VAR_6;




 FUNC_4(VAR_4);


 VAR_6 = FUNC_0(VAR_4, VAR_0, VAR_2);
 VAR_6 |= (1 << VAR_1);
 FUNC_2(VAR_4, VAR_0, VAR_2, VAR_6);

 FUNC_5(200);


 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5 < 0)
  goto out;


 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 < 0)
  goto out;


 FUNC_5(10);
out:
 FUNC_3(VAR_4);
 return VAR_5;
}
