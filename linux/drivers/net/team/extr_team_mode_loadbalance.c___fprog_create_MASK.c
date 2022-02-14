
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock_fprog_kern {int len; int filter; } ;
struct sock_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock_fprog_kern*) ;
 struct sock_fprog_kern* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sock_filter*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct sock_fprog_kern **VAR_3, u32 VAR_4,
     const void *VAR_5)
{
 struct sock_fprog_kern *VAR_6;
 struct sock_filter *VAR_7 = (struct sock_filter *) VAR_5;

 if (VAR_4 % sizeof(struct sock_filter))
  return -VAR_0;
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_6->filter = FUNC_2(VAR_7, VAR_4, VAR_2);
 if (!VAR_6->filter) {
  FUNC_0(VAR_6);
  return -VAR_1;
 }
 VAR_6->len = VAR_4 / sizeof(struct sock_filter);
 *VAR_3 = VAR_6;
 return 0;
}
