
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct rsi_common* private; } ;
struct TYPE_2__ {int patch_num; int release_num; int minor; int major; } ;
struct rsi_common {TYPE_1__ lmac_ver; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct rsi_common *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "LMAC   : %d.%d.%d.%d\n",
     VAR_2->lmac_ver.major,
     VAR_2->lmac_ver.minor,
     VAR_2->lmac_ver.release_num,
     VAR_2->lmac_ver.patch_num);

 return 0;
}
