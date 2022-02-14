
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_ipip_entry {int ol_dev; int ol_lb; } ;
struct mlxsw_sp {int core; } ;
struct ip_tunnel_parm {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ,unsigned int,int,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct ip_tunnel_parm FUNC_9 (int ) ;
 int FUNC_10 (struct ip_tunnel_parm) ;
 int FUNC_11 (struct ip_tunnel_parm) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_12(struct mlxsw_sp *VAR_6,
         u32 VAR_7,
         struct mlxsw_sp_ipip_entry *VAR_8)
{
 u16 VAR_9 = FUNC_6(VAR_8->ol_lb);
 u16 VAR_10 = FUNC_7(VAR_8->ol_lb);
 char VAR_11[VAR_3];
 struct ip_tunnel_parm VAR_12;
 unsigned int VAR_13;
 bool VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 VAR_12 = FUNC_9(VAR_8->ol_dev);
 VAR_14 = FUNC_10(VAR_12);
 VAR_16 = FUNC_11(VAR_12);

 FUNC_4(VAR_11, VAR_4, VAR_7);
 FUNC_2(VAR_11, VAR_10);

 VAR_13 = VAR_14 ?
  VAR_2 :
  VAR_1;







 VAR_15 = FUNC_1(FUNC_8(VAR_8->ol_dev));
 FUNC_3(VAR_11, VAR_9,
      VAR_0,
      VAR_13, VAR_14, VAR_15, VAR_16);

 return FUNC_5(VAR_6->core, FUNC_0(VAR_5), VAR_11);
}
