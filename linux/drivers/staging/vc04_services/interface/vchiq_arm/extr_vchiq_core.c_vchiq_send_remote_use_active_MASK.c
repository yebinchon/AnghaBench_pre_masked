
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {scalar_t__ conn_state; } ;
typedef int VCHIQ_STATUS_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vchiq_state*,int *,int ,int *,int *,int ,int ) ;

VCHIQ_STATUS_T FUNC_2(struct vchiq_state *VAR_3)
{
 VCHIQ_STATUS_T VAR_4 = VAR_2;

 if (VAR_3->conn_state != VAR_0)
  VAR_4 = FUNC_1(VAR_3, ((void*)0),
   FUNC_0(VAR_1, 0, 0),
   ((void*)0), ((void*)0), 0, 0);
 return VAR_4;
}
