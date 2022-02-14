
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {scalar_t__ loopback_mode; } ;
typedef int ef4_oword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*,int *,int ) ;
 int FUNC_3 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_4(struct ef4_nic *VAR_4)
{
 ef4_oword_t VAR_5;

 if ((FUNC_1(VAR_4) < VAR_0) ||
     (VAR_4->loopback_mode != VAR_3))
  return;

 FUNC_2(VAR_4, &VAR_5, VAR_2);

 if (FUNC_0(VAR_5, VAR_1))
  return;

 FUNC_3(VAR_4);
}
