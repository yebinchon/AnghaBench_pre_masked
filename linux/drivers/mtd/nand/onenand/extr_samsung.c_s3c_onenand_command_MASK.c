
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct onenand_chip {int erase_shift; int page_shift; int page_mask; int writesize; } ;
struct mtd_info {int oobsize; int writesize; struct onenand_chip* priv; } ;
typedef int loff_t ;
struct TYPE_4__ {unsigned int (* mem_addr ) (int,int,int) ;unsigned int* page_buf; unsigned int* oob_buf; } ;


 unsigned int FUNC_0 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_1 (TYPE_1__*,unsigned int) ;







 int FUNC_2 (struct onenand_chip*) ;
 int VAR_0 ;
 int FUNC_3 (struct onenand_chip*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (int ,int ) ;
 unsigned int FUNC_7 (int,int,int) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_5, int VAR_6, loff_t VAR_7,
          size_t VAR_8)
{
 struct onenand_chip *VAR_9 = VAR_5->priv;
 unsigned int *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;
 unsigned int VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21;

 VAR_12 = (int) (VAR_7 >> VAR_9->erase_shift);
 VAR_13 = (int) (VAR_7 >> VAR_9->page_shift);
 VAR_13 &= VAR_9->page_mask;

 VAR_15 = VAR_4->mem_addr(VAR_12, VAR_13, VAR_14);
 VAR_16 = FUNC_0(VAR_4, VAR_15);
 VAR_17 = FUNC_1(VAR_4, VAR_15);

 switch (VAR_6) {
 case 130:
 case 129:
 case 134:
  FUNC_3(VAR_9);
 default:
  break;
 }

 VAR_21 = FUNC_2(VAR_9);




 VAR_10 = VAR_4->page_buf;
 VAR_11 = VAR_4->oob_buf;

 if (VAR_21) {
  VAR_10 += (VAR_9->writesize >> 2);
  VAR_11 += (VAR_5->oobsize >> 2);
 }

 VAR_19 = VAR_5->writesize >> 2;
 VAR_20 = VAR_5->oobsize >> 2;

 switch (VAR_6) {
 case 130:

  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
   *VAR_10++ = FUNC_4(VAR_16);
  return 0;

 case 129:
  FUNC_6(VAR_3, VAR_2);

  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
   *VAR_10++ = FUNC_4(VAR_16);


  for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
   *VAR_11++ = FUNC_4(VAR_16);

  FUNC_6(0, VAR_2);
  return 0;

 case 132:

  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
   FUNC_5(*VAR_10++, VAR_16);
  return 0;

 case 131:
  FUNC_6(VAR_3, VAR_2);


  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
   FUNC_5(0xffffffff, VAR_16);


  for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++)
   FUNC_5(*VAR_11++, VAR_16);

  FUNC_6(0, VAR_2);
  return 0;

 case 128:
  FUNC_5(VAR_1, VAR_17);
  return 0;

 case 133:
  FUNC_5(VAR_0, VAR_17);
  return 0;

 default:
  break;
 }

 return 0;
}
