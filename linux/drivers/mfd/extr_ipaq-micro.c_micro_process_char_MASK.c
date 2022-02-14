
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipaq_micro_rxdev {int state; int id; int len; size_t index; int chksum; int* buf; } ;
struct ipaq_micro {struct ipaq_micro_rxdev rx; } ;


 int VAR_0 ;




 int FUNC_0 (struct ipaq_micro*,int,size_t,int*) ;

__attribute__((used)) static void FUNC_1(struct ipaq_micro *VAR_1, u8 VAR_2)
{
 struct ipaq_micro_rxdev *VAR_3 = &VAR_1->rx;

 switch (VAR_3->state) {
 case 128:
  if (VAR_2 == VAR_0)
   VAR_3->state = 129;
  break;
 case 129:
  VAR_3->id = (VAR_2 & 0xf0) >> 4;
  VAR_3->len = (VAR_2 & 0x0f);
  VAR_3->index = 0;
  VAR_3->chksum = VAR_2;
  VAR_3->state = (VAR_3->len > 0) ? 130 : 131;
  break;
 case 130:
  VAR_3->chksum += VAR_2;
  VAR_3->buf[VAR_3->index] = VAR_2;
  if (++VAR_3->index == VAR_3->len)
   VAR_3->state = 131;
  break;
 case 131:
  if (VAR_2 == VAR_3->chksum)
   FUNC_0(VAR_1, VAR_3->id, VAR_3->len, VAR_3->buf);
  VAR_3->state = 128;
  break;
 }
}
