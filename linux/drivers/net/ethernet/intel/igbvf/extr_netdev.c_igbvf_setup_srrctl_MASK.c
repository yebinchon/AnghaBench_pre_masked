
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {int rx_buffer_len; int rx_ps_hdr_size; struct e1000_hw hw; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct igbvf_adapter *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10 = 0;

 VAR_10 &= ~(VAR_6 |
      VAR_1 |
      VAR_2);


 VAR_10 |= VAR_7;


 VAR_10 |= FUNC_0(VAR_8->rx_buffer_len, 1024) >>
    VAR_3;

 if (VAR_8->rx_buffer_len < 2048) {
  VAR_8->rx_ps_hdr_size = 0;
  VAR_10 |= VAR_4;
 } else {
  VAR_8->rx_ps_hdr_size = 128;
  VAR_10 |= VAR_8->rx_ps_hdr_size <<
     VAR_0;
  VAR_10 |= VAR_5;
 }

 FUNC_2(FUNC_1(0), VAR_10);
}
