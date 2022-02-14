
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmitQel {int * cbuf; struct xmitQel* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_2 ;
 struct xmitQel* VAR_3 ;
 struct xmitQel* VAR_4 ;

__attribute__((used)) static void FUNC_3(struct xmitQel *VAR_5)
{
 unsigned long VAR_6;
 VAR_5->next = ((void*)0);

 FUNC_1(&VAR_2, VAR_6);
 if (VAR_4) {
  VAR_4->next = VAR_5;
 } else {
  VAR_3 = VAR_5;
 }
 VAR_4 = VAR_5;
 FUNC_2(&VAR_2, VAR_6);

 if (VAR_1 & VAR_0)
  FUNC_0("enqueued a 0x%02x command\n",VAR_5->cbuf[0]);
}
