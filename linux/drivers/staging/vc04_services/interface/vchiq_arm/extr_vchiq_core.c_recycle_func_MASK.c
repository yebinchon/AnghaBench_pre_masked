
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int recycle_event; struct vchiq_shared_state* local; } ;
struct vchiq_shared_state {int recycle; } ;
typedef int BITSET_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct vchiq_state*,int *,size_t) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(void *VAR_3)
{
 struct vchiq_state *VAR_4 = VAR_3;
 struct vchiq_shared_state *VAR_5 = VAR_4->local;
 BITSET_T *VAR_6;
 size_t VAR_7;

 VAR_7 = sizeof(*VAR_6) * FUNC_0(VAR_2);

 VAR_6 = FUNC_1(FUNC_0(VAR_2), sizeof(*VAR_6),
         VAR_1);
 if (!VAR_6)
  return -VAR_0;

 while (1) {
  FUNC_3(&VAR_4->recycle_event, &VAR_5->recycle);

  FUNC_2(VAR_4, VAR_6, VAR_7);
 }
 return 0;
}
