
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct msghdr {int msg_iter; } ;
struct kvec {unsigned int iov_len; scalar_t__ iov_base; } ;
struct TYPE_6__ {scalar_t__ base; int len; } ;
struct connection {scalar_t__ nodeid; int sock_mutex; int rwork; int flags; int * rx_page; TYPE_1__ cb; int * sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (struct connection*,int,int,int) ;
 int FUNC_8 (scalar_t__,scalar_t__,unsigned int,int ,scalar_t__) ;
 int FUNC_9 (int *,int ,struct kvec*,int,unsigned int) ;
 int FUNC_10 (char*,scalar_t__,unsigned int,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int VAR_9 ;
 int FUNC_15 (int *,struct msghdr*,int) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct connection *VAR_10)
{
 int VAR_11 = 0;
 struct msghdr VAR_12 = {};
 struct kvec VAR_13[2];
 unsigned VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17;

 FUNC_11(&VAR_10->sock_mutex);

 if (VAR_10->sock == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto out_close;
 }
 if (VAR_10->nodeid == 0) {
  VAR_11 = -VAR_3;
  goto out_close;
 }

 if (VAR_10->rx_page == ((void*)0)) {




  VAR_10->rx_page = FUNC_1(VAR_4);
  if (VAR_10->rx_page == ((void*)0))
   goto out_resched;
  FUNC_6(&VAR_10->cb, VAR_7);
 }





 VAR_13[0].iov_len = VAR_10->cb.base - FUNC_3(&VAR_10->cb);
 VAR_13[0].iov_base = FUNC_13(VAR_10->rx_page) + FUNC_3(&VAR_10->cb);
 VAR_13[1].iov_len = 0;
 VAR_17 = 1;





 if (FUNC_3(&VAR_10->cb) >= VAR_10->cb.base) {
  VAR_13[0].iov_len = VAR_7 - FUNC_3(&VAR_10->cb);
  VAR_13[1].iov_len = VAR_10->cb.base;
  VAR_13[1].iov_base = FUNC_13(VAR_10->rx_page);
  VAR_17 = 2;
 }
 VAR_14 = VAR_13[0].iov_len + VAR_13[1].iov_len;
 FUNC_9(&VAR_12.msg_iter, VAR_8, VAR_13, VAR_17, VAR_14);

 VAR_15 = VAR_11 = FUNC_15(VAR_10->sock, &VAR_12, VAR_5 | VAR_6);
 if (VAR_11 <= 0)
  goto out_close;
 else if (VAR_11 == VAR_14)
  VAR_16 = 1;

 FUNC_2(&VAR_10->cb, VAR_11);
 VAR_11 = FUNC_8(VAR_10->nodeid,
       FUNC_13(VAR_10->rx_page),
       VAR_10->cb.base, VAR_10->cb.len,
       VAR_7);
 if (VAR_11 == -VAR_2) {
  FUNC_10("lowcomms: addr=%p, base=%u, len=%u, read=%d",
     FUNC_13(VAR_10->rx_page), VAR_10->cb.base,
     VAR_10->cb.len, VAR_15);
 }
 if (VAR_11 < 0)
  goto out_close;
 FUNC_4(&VAR_10->cb, VAR_11);

 if (FUNC_5(&VAR_10->cb) && !VAR_16) {
  FUNC_0(VAR_10->rx_page);
  VAR_10->rx_page = ((void*)0);
 }

 if (VAR_16)
  goto out_resched;
 FUNC_12(&VAR_10->sock_mutex);
 return 0;

out_resched:
 if (!FUNC_16(VAR_0, &VAR_10->flags))
  FUNC_14(VAR_9, &VAR_10->rwork);
 FUNC_12(&VAR_10->sock_mutex);
 return -VAR_1;

out_close:
 FUNC_12(&VAR_10->sock_mutex);
 if (VAR_11 != -VAR_1) {
  FUNC_7(VAR_10, 1, 1, 0);

 }

 if (VAR_11 == 0)
  VAR_11 = -VAR_1;

 return VAR_11;
}
