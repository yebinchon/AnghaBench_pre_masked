
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ udf_pblk_t ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_sb; } ;
struct extent_position {int bh; } ;
typedef int sector_t ;
struct TYPE_2__ {int i_data_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,int ,struct extent_position*,struct kernel_lb_addr*,int *,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,struct kernel_lb_addr*,int ) ;
 int FUNC_7 (int *) ;

udf_pblk_t FUNC_8(struct inode *VAR_2, sector_t VAR_3)
{
 struct kernel_lb_addr VAR_4;
 uint32_t VAR_5;
 sector_t VAR_6;
 struct extent_position VAR_7 = {};
 udf_pblk_t VAR_8;

 FUNC_3(&FUNC_0(VAR_2)->i_data_sem);

 if (FUNC_4(VAR_2, VAR_3, &VAR_7, &VAR_4, &VAR_5, &VAR_6) ==
      (VAR_0 >> 30))
  VAR_8 = FUNC_6(VAR_2->i_sb, &VAR_4, VAR_6);
 else
  VAR_8 = 0;

 FUNC_7(&FUNC_0(VAR_2)->i_data_sem);
 FUNC_2(VAR_7.bh);

 if (FUNC_1(VAR_2->i_sb, VAR_1))
  return FUNC_5(VAR_8);
 else
  return VAR_8;
}
