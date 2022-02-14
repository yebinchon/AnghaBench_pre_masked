
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {unsigned int active_count; int flags; } ;
struct mtdswap_dev {unsigned int pages_per_eblk; struct swap_eb* curr_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mtdswap_dev*,struct swap_eb*,int ) ;

__attribute__((used)) static void FUNC_1(struct mtdswap_dev *VAR_9, struct swap_eb *VAR_10)
{
 unsigned int VAR_11 = VAR_10->active_count;
 unsigned int VAR_12 = VAR_9->pages_per_eblk;

 if (VAR_10 == VAR_9->curr_write)
  return;

 if (VAR_10->flags & VAR_0)
  FUNC_0(VAR_9, VAR_10, VAR_3);
 else if (VAR_10->flags & (VAR_2 | VAR_1))
  FUNC_0(VAR_9, VAR_10, VAR_5);
 if (VAR_11 == VAR_12)
  FUNC_0(VAR_9, VAR_10, VAR_8);
 else if (VAR_11 == 0)
  FUNC_0(VAR_9, VAR_10, VAR_4);
 else if (VAR_11 > (VAR_12/2))
  FUNC_0(VAR_9, VAR_10, VAR_7);
 else
  FUNC_0(VAR_9, VAR_10, VAR_6);
}
