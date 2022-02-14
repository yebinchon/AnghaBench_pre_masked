
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8xxxu_priv {scalar_t__ ep_tx_normal_queue; scalar_t__ ep_tx_low_queue; scalar_t__ ep_tx_high_queue; struct rtl8xxxu_fileops* fops; } ;
struct rtl8xxxu_fileops {int page_num_hi; int page_num_lo; int page_num_norm; int total_page_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rtl8xxxu_priv *VAR_8)
{
 struct rtl8xxxu_fileops *VAR_9 = VAR_8->fops;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15;

 VAR_10 = 0;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = 0;

 if (VAR_8->ep_tx_high_queue)
  VAR_10 = VAR_9->page_num_hi;
 if (VAR_8->ep_tx_low_queue)
  VAR_11 = VAR_9->page_num_lo;
 if (VAR_8->ep_tx_normal_queue)
  VAR_12 = VAR_9->page_num_norm;

 VAR_15 = (VAR_12 << VAR_6) | (VAR_13 << VAR_2);
 FUNC_0(VAR_8, VAR_1, VAR_15);

 VAR_14 = VAR_9->total_page_num - VAR_10 - VAR_11 - VAR_12 - 1;

 VAR_15 = VAR_4;
 VAR_15 |= (VAR_10 << VAR_3);
 VAR_15 |= (VAR_11 << VAR_5);
 VAR_15 |= (VAR_14 << VAR_7);

 FUNC_0(VAR_8, VAR_0, VAR_15);
}
