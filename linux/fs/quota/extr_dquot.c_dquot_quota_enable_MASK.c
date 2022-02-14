
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quota_info {int flags; TYPE_1__* info; int * files; } ;
struct TYPE_2__ {int dqi_fmt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct super_block*,int,int ) ;
 int FUNC_1 (int ,int,int ,int ) ;
 unsigned int FUNC_2 (int) ;
 struct quota_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_10, unsigned int VAR_11)
{
 int VAR_12;
 int VAR_13;
 struct quota_info *VAR_14 = FUNC_3(VAR_10);

 if (!(VAR_14->flags & VAR_1))
  return -VAR_5;

 VAR_11 &= ~(VAR_8 | VAR_6 | VAR_7);
 if (!VAR_11)
  return -VAR_4;
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  if (!(VAR_11 & FUNC_2(VAR_13)))
   continue;

  if (!FUNC_4(VAR_10, VAR_13))
   return -VAR_4;
  VAR_12 = FUNC_1(VAR_14->files[VAR_13], VAR_13,
       VAR_14->info[VAR_13].dqi_fmt_id,
       VAR_0);
  if (VAR_12 < 0)
   goto out_err;
 }
 return 0;
out_err:

 for (VAR_13--; VAR_13 >= 0; VAR_13--) {
  if (VAR_11 & FUNC_2(VAR_13))
   FUNC_0(VAR_10, VAR_13, VAR_0);
 }

 if (VAR_12 == -VAR_2)
  VAR_12 = -VAR_3;
 return VAR_12;
}
