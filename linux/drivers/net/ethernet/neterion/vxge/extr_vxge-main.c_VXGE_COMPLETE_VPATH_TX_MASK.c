
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_fifo {int txq; int handle; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff***,int,int*) ;

__attribute__((used)) static inline void FUNC_4(struct vxge_fifo *VAR_1)
{
 struct sk_buff **VAR_2 = ((void*)0);
 struct sk_buff **VAR_3;

 struct sk_buff *VAR_4[128];
 int VAR_5;

 do {
  VAR_5 = 0;
  VAR_2 = VAR_4;

  if (FUNC_0(VAR_1->txq)) {
   FUNC_3(VAR_1->handle, &VAR_2,
      128, &VAR_5);
   FUNC_1(VAR_1->txq);
  }


  for (VAR_3 = VAR_4; VAR_3 != VAR_2; VAR_3++)
   FUNC_2(*VAR_3);
 } while (VAR_5);
}
