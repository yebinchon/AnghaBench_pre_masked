
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct visorchannel {int remove_lock; int needs_lock; } ;


 int FUNC_0 (struct visorchannel*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

bool FUNC_3(struct visorchannel *VAR_0, u32 VAR_1)
{
 bool VAR_2;
 unsigned long VAR_3;

 if (!VAR_0->needs_lock)
  return FUNC_0(VAR_0, VAR_1);
 FUNC_1(&VAR_0->remove_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->remove_lock, VAR_3);
 return VAR_2;
}
