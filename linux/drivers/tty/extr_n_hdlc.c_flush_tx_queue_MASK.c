
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct n_hdlc_buf {int dummy; } ;
struct n_hdlc {int tx_free_buf_list; int tx_buf_list; } ;


 struct n_hdlc_buf* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct n_hdlc_buf*) ;
 struct n_hdlc* FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct n_hdlc *VAR_1 = FUNC_2(VAR_0);
 struct n_hdlc_buf *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->tx_buf_list)))
  FUNC_1(&VAR_1->tx_free_buf_list, VAR_2);
}
