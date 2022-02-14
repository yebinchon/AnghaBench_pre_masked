
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_state {int n_msgout; int* msgout; int conn_tgt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_1(struct mesh_state *VAR_4)
{
 int VAR_5 = VAR_4->n_msgout;

 VAR_4->msgout[VAR_5] = VAR_0;
 VAR_4->msgout[VAR_5+1] = 3;
 VAR_4->msgout[VAR_5+2] = VAR_1;
 VAR_4->msgout[VAR_5+3] = VAR_3/4;
 VAR_4->msgout[VAR_5+4] = (FUNC_0(VAR_4->conn_tgt)? VAR_2: 0);
 VAR_4->n_msgout = VAR_5 + 5;
}
