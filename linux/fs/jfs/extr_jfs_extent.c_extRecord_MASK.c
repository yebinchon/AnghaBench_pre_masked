
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xad_t ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int commit_mutex; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct inode*,int *) ;

int FUNC_5(struct inode *VAR_0, xad_t * VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0->i_sb);

 FUNC_1(&FUNC_0(VAR_0)->commit_mutex);


 VAR_2 = FUNC_4(0, VAR_0, VAR_1);

 FUNC_2(&FUNC_0(VAR_0)->commit_mutex);
 return VAR_2;
}
