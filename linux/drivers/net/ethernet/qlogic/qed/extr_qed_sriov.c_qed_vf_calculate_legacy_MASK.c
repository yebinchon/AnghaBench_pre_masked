
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ eth_fp_hsi_minor; int capabilities; } ;
struct TYPE_4__ {TYPE_1__ vfdev_info; } ;
struct qed_vf_info {TYPE_2__ acquire; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct qed_vf_info *VAR_4)
{
 u8 VAR_5 = 0;

 if (VAR_4->acquire.vfdev_info.eth_fp_hsi_minor ==
     VAR_0)
  VAR_5 |= VAR_2;

 if (!(VAR_4->acquire.vfdev_info.capabilities &
       VAR_3))
  VAR_5 |= VAR_1;

 return VAR_5;
}
