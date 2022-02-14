
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct brcmf_msgbuf {scalar_t__ rxbufpost; scalar_t__ max_rxbufpost; } ;


 scalar_t__ FUNC_0 (struct brcmf_msgbuf*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct brcmf_msgbuf *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;

 VAR_1 = VAR_0->max_rxbufpost - VAR_0->rxbufpost;

 while (VAR_1) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_2)
   break;
  VAR_0->rxbufpost += VAR_2;
  VAR_1 -= VAR_2;
 }
}
