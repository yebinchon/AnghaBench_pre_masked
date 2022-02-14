
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {unsigned int flags; } ;
struct mtdswap_dev {scalar_t__ curr_write_pos; struct swap_eb* curr_write; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_1 (struct mtdswap_dev*,struct swap_eb*,int ) ;

__attribute__((used)) static int FUNC_2(struct mtdswap_dev *VAR_2, struct swap_eb *VAR_3)
{
 unsigned int VAR_4 = VAR_3->flags & VAR_0;
 struct swap_eb *VAR_5 = VAR_2->curr_write;

 VAR_3->flags |= VAR_0;
 if (VAR_5 == VAR_3) {
  VAR_2->curr_write = ((void*)0);

  if (!VAR_4 && VAR_2->curr_write_pos != 0) {
   FUNC_1(VAR_2, VAR_3, VAR_1);
   return 0;
  }
 }

 return FUNC_0(VAR_2, VAR_3);
}
