
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {size_t conn_state; int id; } ;
typedef size_t VCHIQ_CONNSTATE_T ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct vchiq_state*,size_t,size_t) ;

inline void
FUNC_2(struct vchiq_state *VAR_2, VCHIQ_CONNSTATE_T VAR_3)
{
 VCHIQ_CONNSTATE_T VAR_4 = VAR_2->conn_state;

 FUNC_0(VAR_1, "%d: %s->%s", VAR_2->id,
  VAR_0[VAR_4],
  VAR_0[VAR_3]);
 VAR_2->conn_state = VAR_3;
 FUNC_1(VAR_2, VAR_4, VAR_3);
}
