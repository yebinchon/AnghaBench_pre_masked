
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct onenand_chip {int erase_shift; int (* wait ) (struct mtd_info*,int ) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;
struct TYPE_3__ {int (* mem_addr ) (int,int ,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct mtd_info*,int ) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_7, loff_t VAR_8,
        size_t VAR_9, int VAR_10)
{
 struct onenand_chip *VAR_11 = VAR_7->priv;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_12 = VAR_8 >> VAR_11->erase_shift;
 VAR_14 = VAR_6->mem_addr(VAR_12, 0, 0);
 VAR_13 = VAR_12 + (VAR_9 >> VAR_11->erase_shift) - 1;
 VAR_15 = VAR_6->mem_addr(VAR_13, 0, 0);

 if (VAR_10 == VAR_1) {
  FUNC_1(VAR_3, FUNC_0(VAR_6,
            VAR_14));
  FUNC_1(VAR_2, FUNC_0(VAR_6,
          VAR_15));
 } else {
  FUNC_1(VAR_5, FUNC_0(VAR_6,
              VAR_14));
  FUNC_1(VAR_4, FUNC_0(VAR_6,
            VAR_15));
 }

 VAR_11->wait(VAR_7, VAR_0);
}
