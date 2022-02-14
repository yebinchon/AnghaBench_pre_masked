
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcs_request {int num_cmds; TYPE_1__* cmds; } ;
struct tcs_group {int num_tcs; int ncpt; int offset; int * cmd_cache; int slots; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct tcs_group*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(struct tcs_group *VAR_2, const struct tcs_request *VAR_3,
        int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = 0;


 VAR_6 = FUNC_2(VAR_2, VAR_3->cmds, VAR_3->num_cmds);
 if (VAR_6 >= 0)
  goto copy_data;


 do {
  VAR_6 = FUNC_0(VAR_2->slots, VAR_1,
        VAR_8, VAR_3->num_cmds, 0);
  if (VAR_6 >= VAR_2->num_tcs * VAR_2->ncpt)
   return -VAR_0;
  VAR_8 += VAR_2->ncpt;
 } while (VAR_6 + VAR_3->num_cmds - 1 >= VAR_8);

copy_data:
 FUNC_1(VAR_2->slots, VAR_6, VAR_3->num_cmds);

 for (VAR_8 = 0; VAR_8 < VAR_3->num_cmds; VAR_8++)
  VAR_2->cmd_cache[VAR_6 + VAR_8] = VAR_3->cmds[VAR_8].addr;

 VAR_7 = VAR_6 / VAR_2->ncpt;
 *VAR_4 = VAR_7 + VAR_2->offset;
 *VAR_5 = VAR_6 % VAR_2->ncpt;

 return 0;
}
