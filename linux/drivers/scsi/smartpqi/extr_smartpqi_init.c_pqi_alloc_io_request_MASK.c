
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct pqi_io_request {int refcount; } ;
struct pqi_ctrl_info {size_t next_io_request_slot; size_t max_io_slots; struct pqi_io_request* io_request_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pqi_io_request*) ;

__attribute__((used)) static struct pqi_io_request *FUNC_3(
 struct pqi_ctrl_info *VAR_0)
{
 struct pqi_io_request *VAR_1;
 u16 VAR_2 = VAR_0->next_io_request_slot;

 while (1) {
  VAR_1 = &VAR_0->io_request_pool[VAR_2];
  if (FUNC_1(&VAR_1->refcount) == 1)
   break;
  FUNC_0(&VAR_1->refcount);
  VAR_2 = (VAR_2 + 1) % VAR_0->max_io_slots;
 }


 VAR_0->next_io_request_slot = (VAR_2 + 1) % VAR_0->max_io_slots;

 FUNC_2(VAR_1);

 return VAR_1;
}
