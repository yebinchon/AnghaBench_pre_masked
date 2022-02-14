
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 void* FUNC_1 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(u8 VAR_5, struct sk_buff **VAR_6, size_t VAR_7)
{
 struct sk_buff *VAR_8;
 void *VAR_9;

 VAR_8 = FUNC_0(VAR_7, VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_9 = FUNC_1(VAR_8, 0, VAR_3++, &VAR_4, 0, VAR_5);
 if (!VAR_9) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }

 *VAR_6 = VAR_8;
 return 0;
}
