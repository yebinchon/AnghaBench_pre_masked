
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union v4l2_ctrl_ptr {int p; } ;
struct v4l2_ctrl {int elems; int elem_size; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_ctrl *VAR_0,
         union v4l2_ctrl_ptr VAR_1, union v4l2_ctrl_ptr VAR_2)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_2.p, VAR_1.p, VAR_0->elems * VAR_0->elem_size);
}
