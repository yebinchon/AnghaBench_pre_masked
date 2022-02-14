
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int * cec_tx_adap; int cec_rx_adap; } ;
struct cec_msg {int dummy; } ;
typedef int ktime_t ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct cec_msg const*,int) ;

__attribute__((used)) static void FUNC_2(struct vivid_dev *VAR_1,
     const struct cec_msg *VAR_2, bool VAR_3)
{
 ktime_t VAR_4 = FUNC_0();
 unsigned int VAR_5;

 FUNC_1(VAR_1->cec_rx_adap, VAR_4, VAR_2, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(VAR_1->cec_tx_adap[VAR_5], VAR_4, VAR_2, VAR_3);
}
