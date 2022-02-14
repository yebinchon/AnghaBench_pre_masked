
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dasd_mchunk {unsigned long size; int list; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static inline void
FUNC_2(struct list_head *VAR_0, void *VAR_1,
      unsigned long VAR_2)
{
 struct dasd_mchunk *VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = (struct dasd_mchunk *) VAR_1;
 VAR_3->size = VAR_2 - sizeof(struct dasd_mchunk);
 FUNC_1(&VAR_3->list, VAR_0);
}
