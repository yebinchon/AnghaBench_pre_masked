
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ksz_switch {int* p_802_1p; TYPE_1__* port_cfg; scalar_t__* diffserv; } ;
struct ksz_hw {struct ksz_switch* ksz_switch; } ;
struct TYPE_2__ {scalar_t__ port_prio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_hw*,int,scalar_t__) ;
 int FUNC_1 (struct ksz_hw*,int ) ;
 int FUNC_2 (struct ksz_hw*,int,int ) ;
 int FUNC_3 (struct ksz_hw*,int) ;
 int FUNC_4 (struct ksz_hw*,int) ;
 int FUNC_5 (struct ksz_hw*,int) ;

__attribute__((used)) static void FUNC_6(struct ksz_hw *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct ksz_switch *VAR_5 = VAR_2->ksz_switch;





 VAR_5->p_802_1p[0] = 0;
 VAR_5->p_802_1p[1] = 0;
 VAR_5->p_802_1p[2] = 1;
 VAR_5->p_802_1p[3] = 1;
 VAR_5->p_802_1p[4] = 2;
 VAR_5->p_802_1p[5] = 2;
 VAR_5->p_802_1p[6] = 3;
 VAR_5->p_802_1p[7] = 3;





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_5->diffserv[VAR_4] = 0;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_5(VAR_2, VAR_3);
  FUNC_4(VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_3);
  FUNC_2(VAR_2, VAR_3, 0);

  VAR_5->port_cfg[VAR_3].port_prio = 0;
  FUNC_0(VAR_2, VAR_3, VAR_5->port_cfg[VAR_3].port_prio);
 }
 FUNC_1(VAR_2, 0);
}
