
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_data_lanes; } ;
struct csi_state {TYPE_1__ bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csi_state*,int ) ;
 int FUNC_1 (struct csi_state*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct csi_state *VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_0);
 if (VAR_5)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_0, VAR_6);

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_6 &= ~VAR_3;
 if (VAR_5) {
  VAR_7 = (1 << (VAR_4->bus.num_data_lanes + 1)) - 1;
  VAR_6 |= (VAR_7 & VAR_3);
 }
 FUNC_1(VAR_4, VAR_2, VAR_6);
}
