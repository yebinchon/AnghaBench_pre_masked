
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int cmd_bufs; } ;
struct ar9170 {int cmd_seq; TYPE_2__ fw; TYPE_1__* hw; } ;
struct TYPE_3__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar9170*,int ) ;
 int FUNC_1 (int ,char*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ar9170 *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->cmd_seq < -1)
  return 0;




 if (VAR_2->cmd_seq < 0)
  VAR_2->cmd_seq = VAR_3;







 if (VAR_3 != VAR_2->cmd_seq) {
  int VAR_4;

  VAR_4 = (VAR_3 - VAR_2->cmd_seq) % VAR_2->fw.cmd_bufs;

  FUNC_1(VAR_2->hw->wiphy, "lost %d command responses/traps! "
     "w:%d g:%d\n", VAR_4, VAR_2->cmd_seq, VAR_3);

  FUNC_0(VAR_2, VAR_0);
  return -VAR_1;
 }

 VAR_2->cmd_seq = (VAR_2->cmd_seq + 1) % VAR_2->fw.cmd_bufs;
 return 0;
}
