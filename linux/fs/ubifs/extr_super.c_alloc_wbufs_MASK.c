
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_jhead {int dummy; } ;
struct ubifs_info {int jhead_cnt; TYPE_2__* jheads; } ;
struct TYPE_3__ {int jhead; int no_timer; int * sync_callback; } ;
struct TYPE_4__ {int grouped; int log_hash; TYPE_1__ wbuf; int buds_list; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_4->jheads = FUNC_2(VAR_4->jhead_cnt, sizeof(struct ubifs_jhead),
       VAR_2);
 if (!VAR_4->jheads)
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_4->jhead_cnt; VAR_5++) {
  FUNC_0(&VAR_4->jheads[VAR_5].buds_list);
  VAR_6 = FUNC_5(VAR_4, &VAR_4->jheads[VAR_5].wbuf);
  if (VAR_6)
   return VAR_6;

  VAR_4->jheads[VAR_5].wbuf.sync_callback = &VAR_3;
  VAR_4->jheads[VAR_5].wbuf.jhead = VAR_5;
  VAR_4->jheads[VAR_5].grouped = 1;
  VAR_4->jheads[VAR_5].log_hash = FUNC_4(VAR_4);
  if (FUNC_1(VAR_4->jheads[VAR_5].log_hash))
   goto out;
 }





 VAR_4->jheads[VAR_1].wbuf.no_timer = 1;
 VAR_4->jheads[VAR_1].grouped = 0;

 return 0;

out:
 while (VAR_5--)
  FUNC_3(VAR_4->jheads[VAR_5].log_hash);

 return VAR_6;
}
