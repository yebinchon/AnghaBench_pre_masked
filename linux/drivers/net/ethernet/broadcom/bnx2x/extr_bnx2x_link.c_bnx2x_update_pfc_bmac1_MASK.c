
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_vars {int flow_ctrl; } ;
struct link_params {int feature_config_flags; scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnx2x*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct link_params *VAR_7,
       struct link_vars *VAR_8)
{
 u32 VAR_9[2];
 struct bnx2x *VAR_10 = VAR_7->bp;
 u32 VAR_11 = VAR_7->port ? VAR_6 :
  VAR_5;

 u32 VAR_12 = 0x14;
 if ((!(VAR_7->feature_config_flags &
       VAR_4)) &&
  (VAR_8->flow_ctrl & VAR_2))

  VAR_12 |= (1<<5);
 VAR_9[0] = VAR_12;
 VAR_9[1] = 0;
 FUNC_0(VAR_10, VAR_11 + VAR_0, VAR_9, 2);


 VAR_12 = 0xc0;
 if (!(VAR_7->feature_config_flags &
       VAR_4) &&
  (VAR_8->flow_ctrl & VAR_3))
  VAR_12 |= 0x800000;
 VAR_9[0] = VAR_12;
 VAR_9[1] = 0;
 FUNC_0(VAR_10, VAR_11 + VAR_1, VAR_9, 2);
}
