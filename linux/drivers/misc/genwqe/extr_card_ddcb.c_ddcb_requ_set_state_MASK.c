
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddcb_requ {int req_state; } ;
typedef enum genwqe_requ_state { ____Placeholder_genwqe_requ_state } genwqe_requ_state ;



__attribute__((used)) static inline void FUNC_0(struct ddcb_requ *VAR_0,
           enum genwqe_requ_state VAR_1)
{
 VAR_0->req_state = VAR_1;
}
