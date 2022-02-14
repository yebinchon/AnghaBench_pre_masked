
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pid {int dummy; } ;
typedef int pvnr ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct pid*) ;

__attribute__((used)) static int FUNC_3(struct pid *VAR_2)
{
 pid_t VAR_3;
 struct sk_buff *VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(0, VAR_0, 0, 0, &VAR_3, sizeof(VAR_3));
 if (!VAR_4)
  return -VAR_1;
 return FUNC_1(VAR_4);
}
