
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct xenvif_queue*) ;

__attribute__((used)) static void FUNC_2(struct xenvif_queue *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_1(VAR_0)) != ((void*)0))
  FUNC_0(VAR_1);
}
