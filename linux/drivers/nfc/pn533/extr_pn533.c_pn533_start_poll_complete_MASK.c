
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int len; scalar_t__* data; } ;
struct pn533 {int poll_protocols; int poll_dep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pn533*,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct pn533 *VAR_2, struct sk_buff *VAR_3)
{
 u8 VAR_4, VAR_5, *VAR_6;
 int VAR_7, VAR_8;


 if (VAR_2->poll_protocols & VAR_1)
  VAR_2->poll_dep = 1;

 VAR_4 = VAR_3->data[0];
 VAR_5 = VAR_3->data[1];
 VAR_6 = &VAR_3->data[2];
 VAR_8 = VAR_3->len - 2;

 if (VAR_4) {
  VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_6, VAR_8);


  if (VAR_7 == 0)
   return 0;
 }

 return -VAR_0;
}
