
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {scalar_t__ loopback_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ef4_nic*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct ef4_nic *VAR_4)
{
 FUNC_0(VAR_4, VAR_2, VAR_3,
     1 << VAR_0,
     VAR_4->loopback_mode == VAR_1);
}
