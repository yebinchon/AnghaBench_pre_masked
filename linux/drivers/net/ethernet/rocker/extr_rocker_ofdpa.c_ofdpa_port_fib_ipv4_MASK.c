
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ofdpa_port {scalar_t__ dev; int internal_vlan_id; } ;
struct fib_nh {scalar_t__ fib_nh_dev; int fib_nh_gw4; } ;
struct fib_info {int fib_priority; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct fib_nh* FUNC_2 (struct fib_info*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,char*,int,int *) ;
 int FUNC_6 (struct ofdpa_port*,int ,int ,int ,int ,int,int ,struct fib_info*,int) ;
 int FUNC_7 (struct ofdpa_port*,int,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct ofdpa_port *VAR_2, __be32 VAR_3,
          int VAR_4, struct fib_info *VAR_5, u32 VAR_6,
          int VAR_7)
{
 const struct fib_nh *VAR_8;
 __be16 VAR_9 = FUNC_3(VAR_0);
 __be32 VAR_10 = FUNC_4(VAR_4);
 __be16 VAR_11 = VAR_2->internal_vlan_id;
 u32 VAR_12 = VAR_5->fib_priority;
 enum rocker_of_dpa_table_id VAR_13 =
  VAR_1;
 u32 VAR_14;
 bool VAR_15;
 bool VAR_16;
 u32 VAR_17;
 int VAR_18;



 VAR_8 = FUNC_2(VAR_5, 0);
 VAR_15 = (VAR_8->fib_nh_dev == VAR_2->dev);
 VAR_16 = !!VAR_8->fib_nh_gw4;

 if (VAR_16 && VAR_15) {
  VAR_18 = FUNC_7(VAR_2, VAR_7,
      VAR_8->fib_nh_gw4, &VAR_17);
  if (VAR_18)
   return VAR_18;

  VAR_14 = FUNC_1(VAR_17);
 } else {

  VAR_14 = FUNC_0(VAR_11, 0);
 }

 VAR_18 = FUNC_6(VAR_2, VAR_9, VAR_3,
         VAR_10, VAR_12, VAR_13,
         VAR_14, VAR_5, VAR_7);
 if (VAR_18)
  FUNC_5(VAR_2->dev, "Error (%d) IPv4 route %pI4\n",
      VAR_18, &VAR_3);

 return VAR_18;
}
