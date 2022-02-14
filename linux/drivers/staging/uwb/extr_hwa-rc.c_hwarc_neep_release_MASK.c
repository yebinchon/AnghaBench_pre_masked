
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {struct hwarc* priv; } ;
struct hwarc {int * rd_buffer; int * neep_urb; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct uwb_rc *VAR_0)
{
 struct hwarc *VAR_1 = VAR_0->priv;

 FUNC_2(VAR_1->neep_urb);
 FUNC_1(VAR_1->neep_urb);
 VAR_1->neep_urb = ((void*)0);

 FUNC_0((unsigned long)VAR_1->rd_buffer);
 VAR_1->rd_buffer = ((void*)0);
}
