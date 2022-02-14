
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_ext_path {scalar_t__ p_bh; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_data_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,unsigned int,int *,struct inode*,scalar_t__) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *,struct inode*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

int FUNC_7(const char *VAR_0, unsigned int VAR_1, handle_t *VAR_2,
       struct inode *VAR_3, struct ext4_ext_path *VAR_4)
{
 int VAR_5;

 FUNC_1(!FUNC_6(&FUNC_0(VAR_3)->i_data_sem));
 if (VAR_4->p_bh) {
  FUNC_3(VAR_3, FUNC_5(VAR_4->p_bh));

  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4->p_bh);
 } else {

  VAR_5 = FUNC_4(VAR_2, VAR_3);
 }
 return VAR_5;
}
