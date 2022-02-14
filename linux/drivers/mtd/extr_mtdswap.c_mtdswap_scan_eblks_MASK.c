
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int flags; } ;
struct mtdswap_dev {unsigned int eblks; struct swap_eb* eb_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct mtdswap_dev*) ;
 int FUNC_1 (struct mtdswap_dev*,struct swap_eb*,unsigned int) ;
 int FUNC_2 (struct mtdswap_dev*,struct swap_eb*) ;

__attribute__((used)) static void FUNC_3(struct mtdswap_dev *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9, VAR_10;
 struct swap_eb *VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_7->eblks; VAR_9++) {
  VAR_11 = VAR_7->eb_data + VAR_9;

  VAR_8 = FUNC_2(VAR_7, VAR_11);
  if (VAR_8 < 0)
   VAR_11->flags |= VAR_2;
  else if (VAR_8 == VAR_6) {
   VAR_11->flags |= VAR_0;
   continue;
  }

  switch (VAR_8) {
  case 129:
   VAR_10 = VAR_3;
   break;
  case 128:
  case 130:
   VAR_10 = VAR_4;
   break;
  default:
   VAR_10 = VAR_5;
  }

  VAR_11->flags |= (VAR_10 << VAR_1);
 }

 FUNC_0(VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_7->eblks; VAR_9++) {
  VAR_11 = VAR_7->eb_data + VAR_9;

  if (VAR_11->flags & VAR_0)
   continue;

  VAR_10 = VAR_11->flags >> VAR_1;
  FUNC_1(VAR_7, VAR_11, VAR_10);
 }
}
