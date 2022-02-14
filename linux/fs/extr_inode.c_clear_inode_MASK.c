
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nrpages; int nrexceptional; int private_list; int i_pages; } ;
struct inode {int i_state; int i_wb_list; TYPE_1__ i_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_2)
{





 FUNC_2(&VAR_2->i_data.i_pages);
 FUNC_0(VAR_2->i_data.nrpages);
 FUNC_0(VAR_2->i_data.nrexceptional);
 FUNC_3(&VAR_2->i_data.i_pages);
 FUNC_0(!FUNC_1(&VAR_2->i_data.private_list));
 FUNC_0(!(VAR_2->i_state & VAR_1));
 FUNC_0(VAR_2->i_state & VAR_0);
 FUNC_0(!FUNC_1(&VAR_2->i_wb_list));

 VAR_2->i_state = VAR_1 | VAR_0;
}
