
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct brcmf_msgbuf {int rx_dataoffset; } ;
struct brcmf_commonring {scalar_t__ r_ptr; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct brcmf_commonring*,scalar_t__*) ;
 int FUNC_1 (struct brcmf_commonring*) ;
 int FUNC_2 (struct brcmf_commonring*,scalar_t__) ;
 int FUNC_3 (struct brcmf_msgbuf*,void*) ;

__attribute__((used)) static void FUNC_4(struct brcmf_msgbuf *VAR_1,
        struct brcmf_commonring *VAR_2)
{
 void *VAR_3;
 u16 VAR_4;
 u16 VAR_5;

again:
 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_3 == ((void*)0))
  return;

 VAR_5 = 0;
 while (VAR_4) {
  FUNC_3(VAR_1,
          VAR_3 + VAR_1->rx_dataoffset);
  VAR_3 += FUNC_1(VAR_2);
  VAR_5++;
  if (VAR_5 == VAR_0) {
   FUNC_2(VAR_2, VAR_5);
   VAR_5 = 0;
  }
  VAR_4--;
 }
 if (VAR_5)
  FUNC_2(VAR_2, VAR_5);

 if (VAR_2->r_ptr == 0)
  goto again;
}
