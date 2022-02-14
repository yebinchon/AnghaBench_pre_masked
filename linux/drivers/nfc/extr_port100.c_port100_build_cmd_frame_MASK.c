
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct port100 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_5(struct port100 *VAR_2, u8 VAR_3,
        struct sk_buff *VAR_4)
{

 int VAR_5 = VAR_4->len;

 FUNC_3(VAR_4, VAR_0);
 FUNC_4(VAR_4, VAR_1);

 FUNC_1(VAR_4->data, VAR_3);
 FUNC_2(VAR_4->data, VAR_5);
 FUNC_0(VAR_4->data);
}
