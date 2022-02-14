
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ nr_to_write; int range_start; int range_end; scalar_t__ range_cyclic; } ;
struct address_space {void* writeback_index; } ;
typedef void* pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct address_space*,struct writeback_control*,void*,void*,void**) ;

int FUNC_3(struct address_space *VAR_2,
     struct writeback_control *VAR_3)
{
 pgoff_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 FUNC_0("");

 if (VAR_3->range_cyclic) {
  VAR_4 = VAR_2->writeback_index;
  VAR_5 = -1;
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
  if (VAR_4 > 0 && VAR_3->nr_to_write > 0 && VAR_7 == 0)
   VAR_7 = FUNC_2(VAR_2, VAR_3, 0, VAR_4,
          &VAR_6);
  VAR_2->writeback_index = VAR_6;
 } else if (VAR_3->range_start == 0 && VAR_3->range_end == VAR_0) {
  VAR_5 = (pgoff_t)(VAR_0 >> VAR_1);
  VAR_7 = FUNC_2(VAR_2, VAR_3, 0, VAR_5, &VAR_6);
  if (VAR_3->nr_to_write > 0)
   VAR_2->writeback_index = VAR_6;
 } else {
  VAR_4 = VAR_3->range_start >> VAR_1;
  VAR_5 = VAR_3->range_end >> VAR_1;
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
 }

 FUNC_1(" = %d", VAR_7);
 return VAR_7;
}
