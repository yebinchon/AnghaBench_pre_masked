
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_ring_is_up; } ;
struct s_smc {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (struct s_smc*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct s_smc *VAR_7, int VAR_8)
{
 if (VAR_8) {
  FUNC_2(VAR_7) ;
  VAR_7->hw.mac_ring_is_up = VAR_6 ;
  FUNC_3(VAR_7) ;
 }
 else {

  FUNC_1(FUNC_0(VAR_5),VAR_4,VAR_1) ;


  FUNC_4(FUNC_0(VAR_2),VAR_3) ;

  VAR_7->hw.mac_ring_is_up = VAR_0 ;
 }
}
