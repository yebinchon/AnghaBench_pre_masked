
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ s_clustersize; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int *,int ,int ,int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1,
          handle_t *VAR_2,
          u64 VAR_3,
          u64 VAR_4,
          u32 *VAR_5)
{
 u16 VAR_6 = FUNC_3(VAR_1->i_sb);
 int VAR_7, VAR_8 = 2 * VAR_6;

 FUNC_0(VAR_0 < FUNC_1(VAR_1->i_sb)->s_clustersize);

 VAR_7 = FUNC_5(VAR_2, VAR_8);
 if (VAR_7) {
  FUNC_2(VAR_7);
  return VAR_7;
 }


 return FUNC_4(VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5, 1);
}
