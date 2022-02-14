
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userfaultfd_wait_queue {int dummy; } ;
struct userfaultfd_ctx {int event_wqh; } ;


 struct userfaultfd_wait_queue* FUNC_0 (int *) ;

__attribute__((used)) static inline struct userfaultfd_wait_queue *FUNC_1(
  struct userfaultfd_ctx *VAR_0)
{
 return FUNC_0(&VAR_0->event_wqh);
}
