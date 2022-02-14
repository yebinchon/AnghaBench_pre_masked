
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct dst_entry*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);
 struct dst_entry *VAR_2;
 int VAR_3;

 FUNC_3();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_1);
 FUNC_4();

 return VAR_3;
}
