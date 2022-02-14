
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct myri10ge_rx_buffer_state {int page_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct myri10ge_rx_buffer_state*,int ) ;
 int FUNC_1 (struct pci_dev*,int,int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct pci_dev *VAR_3,
         struct myri10ge_rx_buffer_state *VAR_4, int VAR_5)
{

 if (VAR_5 >= VAR_0 / 2 ||
     (VAR_4->page_offset + 2 * VAR_5) > VAR_0) {
  FUNC_1(VAR_3, (FUNC_0(VAR_4, VAR_2)
          & ~(VAR_0 - 1)),
          VAR_0, VAR_1);
 }
}
