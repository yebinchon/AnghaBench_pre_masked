
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct visorchannel {int remove_lock; scalar_t__ needs_lock; } ;


 int FUNC_0 (struct visorchannel*,int ,void*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct visorchannel *VAR_0, u32 VAR_1,
         void *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 if (VAR_0->needs_lock) {
  FUNC_1(&VAR_0->remove_lock, VAR_4);
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_2(&VAR_0->remove_lock, VAR_4);
 } else {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 return VAR_3;
}
