
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_io_stats {int num_ios; int max_active; int active; } ;
struct snic_stats {struct snic_io_stats io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline void
FUNC_3(struct snic_stats *VAR_0)
{
 struct snic_io_stats *VAR_1 = &VAR_0->io;
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->active);
 if (FUNC_1(&VAR_1->max_active) < VAR_2)
  FUNC_2(&VAR_1->max_active, VAR_2);

 FUNC_0(&VAR_1->num_ios);
}
