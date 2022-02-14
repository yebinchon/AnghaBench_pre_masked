
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {int jhead_cnt; TYPE_2__* jheads; } ;
struct TYPE_3__ {TYPE_2__* inodes; TYPE_2__* buf; } ;
struct TYPE_4__ {struct TYPE_4__* log_hash; TYPE_1__ wbuf; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0)
{
 int VAR_1;

 if (VAR_0->jheads) {
  for (VAR_1 = 0; VAR_1 < VAR_0->jhead_cnt; VAR_1++) {
   FUNC_0(VAR_0->jheads[VAR_1].wbuf.buf);
   FUNC_0(VAR_0->jheads[VAR_1].wbuf.inodes);
   FUNC_0(VAR_0->jheads[VAR_1].log_hash);
  }
  FUNC_0(VAR_0->jheads);
  VAR_0->jheads = ((void*)0);
 }
}
