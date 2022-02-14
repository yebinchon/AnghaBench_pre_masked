
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdos_sb_info {int cluster_bits; } ;
struct inode {int i_size; int i_sb; } ;
struct TYPE_2__ {scalar_t__ i_start; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1)
{
 struct msdos_sb_info *VAR_2 = FUNC_1(VAR_1->i_sb);
 int VAR_3, VAR_4, VAR_5;

 VAR_1->i_size = 0;
 if (FUNC_0(VAR_1)->i_start == 0)
  return 0;

 VAR_3 = FUNC_2(VAR_1, VAR_0, &VAR_4, &VAR_5);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_1->i_size = (VAR_4 + 1) << VAR_2->cluster_bits;

 return 0;
}
