
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iter; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct TCP_Server_Info*,struct msghdr*) ;
 int FUNC_1 (int *,int ,struct kvec*,int,unsigned int) ;

int
FUNC_2(struct TCP_Server_Info *VAR_1, char *VAR_2,
        unsigned int VAR_3)
{
 struct msghdr VAR_4;
 struct kvec VAR_5 = {.iov_base = VAR_2, .iov_len = VAR_3};
 FUNC_1(&VAR_4.msg_iter, VAR_0, &VAR_5, 1, VAR_3);

 return FUNC_0(VAR_1, &VAR_4);
}
