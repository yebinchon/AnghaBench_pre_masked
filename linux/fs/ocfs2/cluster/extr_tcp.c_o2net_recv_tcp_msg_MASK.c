
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iter; int msg_flags; } ;
struct kvec {size_t iov_len; void* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct kvec*,int,size_t) ;
 int FUNC_1 (struct socket*,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_2, void *VAR_3, size_t VAR_4)
{
 struct kvec VAR_5 = { .iov_len = VAR_4, .iov_base = VAR_3, };
 struct msghdr VAR_6 = { .msg_flags = VAR_0, };
 FUNC_0(&VAR_6.msg_iter, VAR_1, &VAR_5, 1, VAR_4);
 return FUNC_1(VAR_2, &VAR_6, VAR_0);
}
