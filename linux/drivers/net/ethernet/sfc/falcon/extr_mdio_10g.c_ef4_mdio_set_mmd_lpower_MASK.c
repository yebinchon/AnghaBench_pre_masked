
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ef4_nic*,int,int ) ;
 int FUNC_1 (struct ef4_nic*,int,int ,int ,int) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ef4_nic *VAR_5,
        int VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_2);

 FUNC_2(VAR_5, VAR_4, VAR_5->net_dev, "Setting low power mode for MMD %d to %d\n",
    VAR_7, VAR_6);

 if (VAR_8 & VAR_3) {
  FUNC_1(VAR_5, VAR_7, VAR_0,
      VAR_1, VAR_6);
 }
}
