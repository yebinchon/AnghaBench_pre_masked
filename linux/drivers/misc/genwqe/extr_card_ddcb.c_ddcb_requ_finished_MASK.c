
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {scalar_t__ card_state; } ;
struct ddcb_requ {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ddcb_requ*) ;

__attribute__((used)) static int FUNC_1(struct genwqe_dev *VAR_2, struct ddcb_requ *VAR_3)
{
 return (FUNC_0(VAR_3) == VAR_1) ||
  (VAR_2->card_state != VAR_0);
}
