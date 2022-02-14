
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_sample {int event; int eip; } ;
struct mm_struct {int dummy; } ;
typedef int off_t ;
struct TYPE_2__ {int sample_lost_no_mapping; int sample_lost_no_mm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_3 (struct mm_struct*,int ,int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct mm_struct *VAR_3, struct op_sample *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 off_t VAR_7;

 if (VAR_5) {
  FUNC_1(VAR_4->eip, VAR_4->event);
  return 1;
 }



 if (!VAR_3) {
  FUNC_2(&VAR_2.sample_lost_no_mm);
  return 0;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4->eip, &VAR_7);

 if (VAR_6 == VAR_0) {
  FUNC_2(&VAR_2.sample_lost_no_mapping);
  return 0;
 }

 if (VAR_6 != VAR_1) {
  FUNC_0(VAR_6);
  VAR_1 = VAR_6;
 }

 FUNC_1(VAR_7, VAR_4->event);

 return 1;
}
