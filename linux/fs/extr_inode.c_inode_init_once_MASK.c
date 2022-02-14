
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_data; int i_lru; int i_wb_list; int i_io_list; int i_devices; int i_hash; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ,int) ;

void FUNC_5(struct inode *VAR_0)
{
 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->i_hash);
 FUNC_1(&VAR_0->i_devices);
 FUNC_1(&VAR_0->i_io_list);
 FUNC_1(&VAR_0->i_wb_list);
 FUNC_1(&VAR_0->i_lru);
 FUNC_2(&VAR_0->i_data);
 FUNC_3(VAR_0);
}
