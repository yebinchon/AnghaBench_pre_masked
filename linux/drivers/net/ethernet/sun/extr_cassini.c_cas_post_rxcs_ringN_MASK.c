
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cas_rx_comp {int dummy; } ;
struct cas {int* rx_cur; int* rx_new; int cas_flags; scalar_t__ regs; struct cas_rx_comp** init_rxcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct cas_rx_comp*) ;
 int VAR_4 ;
 int FUNC_3 (struct cas*,int ,int ,struct net_device*,char*,int,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5,
    struct cas *VAR_6, int VAR_7)
{
 struct cas_rx_comp *VAR_8 = VAR_6->init_rxcs[VAR_7];
 int VAR_9, VAR_10;

 VAR_9 = VAR_6->rx_cur[VAR_7];
 VAR_10 = VAR_6->rx_new[VAR_7];
 FUNC_3(VAR_6, VAR_4, VAR_1, VAR_5,
       "rxc[%d] interrupt, done: %d/%d\n",
       VAR_7, FUNC_4(VAR_6->regs + VAR_2), VAR_10);


 while (VAR_9 != VAR_10) {
  FUNC_2(VAR_8 + VAR_9);
  VAR_9 = FUNC_1(VAR_7, VAR_9 + 1);
 }
 VAR_6->rx_cur[VAR_7] = VAR_9;

 if (VAR_7 == 0)
  FUNC_5(VAR_9, VAR_6->regs + VAR_3);
 else if (VAR_6->cas_flags & VAR_0)
  FUNC_5(VAR_9, VAR_6->regs + FUNC_0(VAR_7));
}
