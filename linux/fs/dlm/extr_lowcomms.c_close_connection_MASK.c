
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int flags; int sock_mutex; scalar_t__ retries; int * rx_page; struct connection* othercon; int * sock; int nodeid; int rwork; int swork; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct connection *VAR_3, bool VAR_4,
        bool VAR_5, bool VAR_6)
{
 bool VAR_7 = FUNC_8(VAR_0, &VAR_3->flags);

 if (VAR_5 && !VAR_7 && FUNC_1(&VAR_3->swork)) {
  FUNC_3("canceled swork for node %d", VAR_3->nodeid);
  FUNC_2(VAR_2, &VAR_3->flags);
 }
 if (VAR_6 && !VAR_7 && FUNC_1(&VAR_3->rwork)) {
  FUNC_3("canceled rwork for node %d", VAR_3->nodeid);
  FUNC_2(VAR_1, &VAR_3->flags);
 }

 FUNC_4(&VAR_3->sock_mutex);
 if (VAR_3->sock) {
  FUNC_6(VAR_3->sock);
  FUNC_7(VAR_3->sock);
  VAR_3->sock = ((void*)0);
 }
 if (VAR_3->othercon && VAR_4) {

  FUNC_9(VAR_3->othercon, 0, 1, 1);
 }
 if (VAR_3->rx_page) {
  FUNC_0(VAR_3->rx_page);
  VAR_3->rx_page = ((void*)0);
 }

 VAR_3->retries = 0;
 FUNC_5(&VAR_3->sock_mutex);
 FUNC_2(VAR_0, &VAR_3->flags);
}
