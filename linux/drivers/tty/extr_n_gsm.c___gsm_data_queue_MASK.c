
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gsm_mux {scalar_t__ encoding; int tx_bytes; int tx_list; scalar_t__ initiator; } ;
struct gsm_msg {int* data; int len; int ctrl; int addr; int list; } ;
struct gsm_dlci {struct gsm_mux* gsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gsm_mux*) ;
 int FUNC_1 (int,int*,int) ;
 int FUNC_2 (char*,int,scalar_t__,int,int*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct gsm_dlci *VAR_4, struct gsm_msg *VAR_5)
{
 struct gsm_mux *VAR_6 = VAR_4->gsm;
 u8 *VAR_7 = VAR_5->data;
 u8 *VAR_8 = VAR_7 + VAR_5->len;


 if (VAR_6->encoding == 0) {
  if (VAR_5->len < 128)
   *--VAR_7 = (VAR_5->len << 1) | VAR_0;
  else {
   *--VAR_7 = (VAR_5->len >> 7);
   *--VAR_7 = (VAR_5->len & 127) << 1;
  }
 }

 *--VAR_7 = VAR_5->ctrl;
 if (VAR_6->initiator)
  *--VAR_7 = (VAR_5->addr << 2) | 2 | VAR_0;
 else
  *--VAR_7 = (VAR_5->addr << 2) | VAR_0;
 *VAR_8 = FUNC_1(VAR_1, VAR_7 , VAR_5->data - VAR_7);

 if (VAR_5->ctrl == VAR_3 || VAR_5->ctrl == (VAR_3|VAR_2))
  *VAR_8 = FUNC_1(*VAR_8, VAR_5->data, VAR_5->len);
 *VAR_8 = 0xFF - *VAR_8;

 FUNC_2("Q> ", VAR_5->addr, VAR_6->initiator, VAR_5->ctrl,
       VAR_5->data, VAR_5->len);



 VAR_5->len += (VAR_5->data - VAR_7) + 1;
 VAR_5->data = VAR_7;


 FUNC_3(&VAR_5->list, &VAR_6->tx_list);
 VAR_6->tx_bytes += VAR_5->len;
 FUNC_0(VAR_6);
}
