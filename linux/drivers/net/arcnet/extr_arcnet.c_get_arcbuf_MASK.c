
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int counter; } ;
struct arcnet_local {int next_buf; int first_free_buf; int* buf_queue; TYPE_1__ buf_lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,struct net_device*,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct arcnet_local* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct arcnet_local *VAR_3 = FUNC_5(VAR_2);
 int VAR_4 = -1, VAR_5;

 if (!FUNC_3(&VAR_3->buf_lock)) {

  FUNC_2(VAR_1, VAR_2, "get_arcbuf: overlap (%d)!\n",
      VAR_3->buf_lock.counter);
 } else {
  if (VAR_3->next_buf >= 5)
   VAR_3->next_buf -= 5;

  if (VAR_3->next_buf == VAR_3->first_free_buf) {
   FUNC_2(VAR_1, VAR_2, "get_arcbuf: BUG: no buffers are available??\n");
  } else {
   VAR_4 = VAR_3->buf_queue[VAR_3->next_buf++];
   VAR_3->next_buf %= 5;
  }
 }

 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, VAR_2, "get_arcbuf: got #%d; buffer queue is now: ",
      VAR_4);
  for (VAR_5 = VAR_3->next_buf; VAR_5 != VAR_3->first_free_buf; VAR_5 = (VAR_5 + 1) % 5)
   FUNC_1(VAR_0, "#%d ", VAR_3->buf_queue[VAR_5]);
  FUNC_1(VAR_0, "\n");
 }

 FUNC_4(&VAR_3->buf_lock);
 return VAR_4;
}
