
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int data; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (void*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct nicvf *VAR_1,
        u64 VAR_2, int VAR_3)
{
 void *VAR_4;
 struct sk_buff *VAR_5;

 VAR_4 = FUNC_1(VAR_2);


 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if (!VAR_5) {
  FUNC_3(FUNC_4(VAR_4));
  return ((void*)0);
 }

 FUNC_2(VAR_5->data);
 return VAR_5;
}
