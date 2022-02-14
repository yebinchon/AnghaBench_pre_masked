
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int flags; } ;
struct mtdswap_dev {scalar_t__ spare_eblks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_2 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_3 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_4 (struct mtdswap_dev*,struct swap_eb*) ;
 struct swap_eb* FUNC_5 (struct mtdswap_dev*,unsigned int) ;
 int FUNC_6 (struct mtdswap_dev*,struct swap_eb*,int ) ;
 int FUNC_7 (struct mtdswap_dev*,struct swap_eb*,int ) ;

__attribute__((used)) static int FUNC_8(struct mtdswap_dev *VAR_9, unsigned int VAR_10)
{
 struct swap_eb *VAR_11;
 int VAR_12;

 if (VAR_9->spare_eblks < VAR_5)
  return 1;

 VAR_11 = FUNC_5(VAR_9, VAR_10);
 if (!VAR_11)
  return 1;

 VAR_12 = FUNC_3(VAR_9, VAR_11);
 if (VAR_12 == -VAR_4)
  return 1;

 if (VAR_11->flags & VAR_1) {
  FUNC_4(VAR_9, VAR_11);
  return 0;
 }

 VAR_11->flags &= ~VAR_0;
 VAR_12 = FUNC_2(VAR_9, VAR_11);
 if ((VAR_11->flags & VAR_2) &&
  (VAR_12 || !FUNC_1(VAR_9, VAR_11)))
  return 0;

 if (VAR_12 == 0)
  VAR_12 = FUNC_7(VAR_9, VAR_11, VAR_8);

 if (VAR_12 == 0)
  FUNC_6(VAR_9, VAR_11, VAR_6);
 else if (VAR_12 != -VAR_3 && !FUNC_0(VAR_12))
  FUNC_6(VAR_9, VAR_11, VAR_7);

 return 0;
}
