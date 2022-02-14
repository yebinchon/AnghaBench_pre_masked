
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct nfp_app {int ctrl; int pf; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ,int ) ;

__attribute__((used)) static inline bool FUNC_3(struct nfp_app *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_2(FUNC_1(VAR_0->pf), 0, 0,
       VAR_1->data, VAR_1->len);

 return FUNC_0(VAR_0->ctrl, VAR_1);
}
