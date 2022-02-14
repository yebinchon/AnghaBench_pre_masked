
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct kvec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,size_t,size_t) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_3, struct kvec *VAR_4,
         size_t VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct msghdr VAR_8 = {.msg_flags = 0,};

 if (VAR_3 == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_3, &VAR_8, VAR_4, VAR_5, VAR_6);
 if (FUNC_1(VAR_7 == VAR_6))
  return 0;
 FUNC_2(VAR_2, "sendmsg returned %d instead of %zu\n", VAR_7, VAR_6);
 if (VAR_7 >= 0)
  VAR_7 = -VAR_1;
out:
 FUNC_2(0, "returning error: %d\n", VAR_7);
 return VAR_7;
}
