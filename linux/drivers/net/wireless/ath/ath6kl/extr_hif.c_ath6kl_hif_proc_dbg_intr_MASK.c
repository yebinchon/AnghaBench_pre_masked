
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl_device {int ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_5(struct ath6kl_device *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 FUNC_3("firmware crashed\n");





 VAR_5 = FUNC_4(VAR_3->ar, VAR_1,
         (u8 *)&VAR_4, 4, VAR_2);
 if (VAR_5)
  FUNC_3("Failed to clear debug interrupt: %d\n", VAR_5);

 FUNC_0(VAR_3->ar);
 FUNC_1(VAR_3->ar);
 FUNC_2(VAR_3->ar, VAR_0);

 return VAR_5;
}
