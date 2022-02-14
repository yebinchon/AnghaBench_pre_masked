
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_cec {scalar_t__ tx_buf_cur; scalar_t__ tx_buf_cnt; scalar_t__ rx_buf_cnt; } ;
struct cec_adapter {struct tegra_cec* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (struct tegra_cec*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct cec_adapter *VAR_39, bool VAR_40)
{
 struct tegra_cec *VAR_41 = VAR_39->priv;

 VAR_41->rx_buf_cnt = 0;
 VAR_41->tx_buf_cnt = 0;
 VAR_41->tx_buf_cur = 0;

 FUNC_0(VAR_41, VAR_1, 0);
 FUNC_0(VAR_41, VAR_3, 0);
 FUNC_0(VAR_41, VAR_11, 0xffffffff);
 FUNC_0(VAR_41, VAR_24, 0);

 if (!VAR_40)
  return 0;

 FUNC_0(VAR_41, VAR_2, (1U << 31) | 0x20);

 FUNC_0(VAR_41, VAR_21,
    (0x7a << VAR_13) |
    (0x6d << VAR_15) |
    (0x93 << VAR_12) |
    (0x86 << VAR_14));

 FUNC_0(VAR_41, VAR_22,
    (0x35 << VAR_17) |
    (0x21 << VAR_19) |
    (0x56 << VAR_16) |
    (0x40 << VAR_18));

 FUNC_0(VAR_41, VAR_23,
    (0x50 << VAR_20));

 FUNC_0(VAR_41, VAR_36,
    (0x74 << VAR_28) |
    (0x8d << VAR_27) |
    (0x08 << VAR_26) |
    (0x71 << VAR_25));

 FUNC_0(VAR_41, VAR_37,
    (0x2f << VAR_32) |
    (0x13 << VAR_31) |
    (0x4b << VAR_30) |
    (0x21 << VAR_29));

 FUNC_0(VAR_41, VAR_38,
    (0x07 << VAR_33) |
    (0x05 << VAR_34) |
    (0x03 << VAR_35));

 FUNC_0(VAR_41, VAR_3,
    VAR_10 |
    VAR_8 |
    VAR_6 |
    VAR_7 |
    VAR_9 |
    VAR_4 |
    VAR_5);

 FUNC_0(VAR_41, VAR_1, VAR_0);
 return 0;
}
