
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct stfsm {int dev; int stfsm_seq_write; int stfsm_seq_read; TYPE_1__* info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct stfsm*,int *) ;
 int FUNC_2 (struct stfsm*,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct stfsm *VAR_3)
{
 uint32_t VAR_4 = VAR_3->info->flags;
 int VAR_5;


 VAR_5 = FUNC_2(VAR_3, &VAR_3->stfsm_seq_read,
       VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_3->dev,
   "failed to prep READ sequence with flags [0x%08x]\n",
   VAR_4);
  return VAR_5;
 }


 VAR_5 = FUNC_2(VAR_3, &VAR_3->stfsm_seq_write,
       VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_3->dev,
   "failed to prep WRITE sequence with flags [0x%08x]\n",
   VAR_4);
  return VAR_5;
 }


 FUNC_1(VAR_3, &VAR_2);

 return 0;
}
