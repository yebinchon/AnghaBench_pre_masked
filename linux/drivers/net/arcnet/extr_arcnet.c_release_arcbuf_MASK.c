
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct arcnet_local {int* buf_queue; int first_free_buf; int next_buf; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,struct net_device*,char*,int) ;
 struct arcnet_local* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct arcnet_local *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 VAR_3->buf_queue[VAR_3->first_free_buf++] = VAR_2;
 VAR_3->first_free_buf %= 5;

 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, VAR_1, "release_arcbuf: freed #%d; buffer queue is now: ",
      VAR_2);
  for (VAR_4 = VAR_3->next_buf; VAR_4 != VAR_3->first_free_buf; VAR_4 = (VAR_4 + 1) % 5)
   FUNC_1(VAR_0, "#%d ", VAR_3->buf_queue[VAR_4]);
  FUNC_1(VAR_0, "\n");
 }
}
