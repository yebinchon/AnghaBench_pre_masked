
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int dummy; } ;
struct nilfs_sc_info {int sc_write_logs; int sc_segbufs; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct the_nilfs*) ;

__attribute__((used)) static int FUNC_2(struct nilfs_sc_info *VAR_0,
          struct the_nilfs *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->sc_segbufs, VAR_1);
 FUNC_0(&VAR_0->sc_segbufs, &VAR_0->sc_write_logs);
 return VAR_2;
}
