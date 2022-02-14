
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nfp_app {int ctrl; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,void*,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct nfp_app*,int ,int ,int ) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_5(struct nfp_app *VAR_1, u8 VAR_2, u16 VAR_3, void *VAR_4,
    gfp_t VAR_5)
{
 struct sk_buff *VAR_6;
 unsigned char *VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_2, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_6);
 FUNC_0(VAR_7, VAR_4, FUNC_4(VAR_6));

 FUNC_1(VAR_1->ctrl, VAR_6);
 return 0;
}
