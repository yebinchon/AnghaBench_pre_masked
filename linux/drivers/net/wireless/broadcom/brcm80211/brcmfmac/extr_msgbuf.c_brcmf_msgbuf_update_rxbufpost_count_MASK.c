
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct brcmf_msgbuf {scalar_t__ rxbufpost; scalar_t__ max_rxbufpost; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct brcmf_msgbuf*) ;

__attribute__((used)) static void
FUNC_1(struct brcmf_msgbuf *VAR_1, u16 VAR_2)
{
 VAR_1->rxbufpost -= VAR_2;
 if (VAR_1->rxbufpost <= (VAR_1->max_rxbufpost -
      VAR_0))
  FUNC_0(VAR_1);
}
