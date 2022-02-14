
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int spi; int dip; int sip; } ;
struct mlx5_ifc_fpga_ipsec_sa {TYPE_1__ ipsec_sa_v1; } ;
struct mlx5_core_dev {int dummy; } ;
struct mlx5_accel_esp_xfrm_attrs {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_accel_esp_xfrm_attrs*,struct mlx5_ifc_fpga_ipsec_sa*) ;

__attribute__((used)) static void
FUNC_2(struct mlx5_core_dev *VAR_1,
       struct mlx5_accel_esp_xfrm_attrs *VAR_2,
       const __be32 VAR_3[4],
       const __be32 VAR_4[4],
       const __be32 VAR_5, bool VAR_6,
       struct mlx5_ifc_fpga_ipsec_sa *VAR_7)
{
 FUNC_1(VAR_1, VAR_2, VAR_7);


 FUNC_0(VAR_7->ipsec_sa_v1.sip, VAR_3, sizeof(VAR_7->ipsec_sa_v1.sip));
 FUNC_0(VAR_7->ipsec_sa_v1.dip, VAR_4, sizeof(VAR_7->ipsec_sa_v1.dip));


 VAR_7->ipsec_sa_v1.spi = VAR_5;


 if (VAR_6)
  VAR_7->ipsec_sa_v1.flags |= VAR_0;
}
