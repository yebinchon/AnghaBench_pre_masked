
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int frame_number; int (* configure_hc ) (struct uhci_hcd*) ;int frame_dma_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uhci_hcd*) ;
 int FUNC_1 (struct uhci_hcd*,int ,int ) ;
 int FUNC_2 (struct uhci_hcd*,int ,int ) ;
 int FUNC_3 (struct uhci_hcd*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct uhci_hcd *VAR_5)
{

 FUNC_1(VAR_5, VAR_4, VAR_3);


 FUNC_2(VAR_5, VAR_5->frame_dma_handle, VAR_1);


 FUNC_3(VAR_5, VAR_5->frame_number & VAR_0,
   VAR_2);


 if (VAR_5->configure_hc)
  VAR_5->configure_hc(VAR_5);
}
