
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__* p_completion_word; } ;
struct qed_hwfn {TYPE_1__ dmae_info; int cdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_3)
{
 u32 VAR_4 = 10000, VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_1();
 while (*VAR_3->dmae_info.p_completion_word != VAR_0) {
  FUNC_2(VAR_1);
  if (++VAR_5 > VAR_4) {
   FUNC_0(VAR_3->cdev,
      "Timed-out waiting for operation to complete. Completion word is 0x%08x expected 0x%08x.\n",
      *VAR_3->dmae_info.p_completion_word,
     VAR_0);
   VAR_6 = -VAR_2;
   break;
  }




  FUNC_1();
 }

 if (VAR_6 == 0)
  *VAR_3->dmae_info.p_completion_word = 0;

 return VAR_6;
}
