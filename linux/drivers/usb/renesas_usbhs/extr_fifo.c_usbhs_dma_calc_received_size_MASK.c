
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pkt {size_t length; int cookie; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct dma_tx_state {size_t residue; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct usbhs_pipe*) ;

__attribute__((used)) static size_t FUNC_2(struct usbhs_pkt *VAR_1,
        struct dma_chan *VAR_2, int VAR_3)
{
 struct usbhs_pipe *VAR_4 = VAR_1->pipe;
 struct dma_tx_state VAR_5;
 size_t VAR_6;
 int VAR_7 = FUNC_1(VAR_4);

 FUNC_0(VAR_2, VAR_1->cookie, &VAR_5);
 VAR_6 = VAR_1->length - VAR_5.residue;

 if (VAR_3) {
  VAR_6 -= VAR_0;
  VAR_6 &= ~(VAR_7 - 1);
  VAR_6 += VAR_3;
 }

 return VAR_6;
}
