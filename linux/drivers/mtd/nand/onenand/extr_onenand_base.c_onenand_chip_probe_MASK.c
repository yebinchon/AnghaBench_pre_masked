
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int (* read_word ) (scalar_t__) ;scalar_t__ base; int (* write_word ) (int,scalar_t__) ;int (* wait ) (struct mtd_info*,int ) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (struct mtd_info*,int ) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct mtd_info *VAR_10)
{
 struct onenand_chip *VAR_11 = VAR_10->priv;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;


 VAR_16 = VAR_11->read_word(VAR_11->base + VAR_7);

 VAR_11->write_word((VAR_16 & ~VAR_8 & ~VAR_9), VAR_11->base + VAR_7);


 VAR_11->write_word(VAR_3, VAR_11->base + VAR_2);


 VAR_12 = VAR_11->read_word(VAR_11->base + VAR_2 + 0x0);
 VAR_13 = VAR_11->read_word(VAR_11->base + VAR_2 + 0x2);


 VAR_11->write_word(VAR_4, VAR_11->base + VAR_2);

 VAR_11->wait(VAR_10, VAR_1);


 VAR_11->write_word(VAR_16, VAR_11->base + VAR_7);


 if (FUNC_0(VAR_12))
  return -VAR_0;


 VAR_14 = VAR_11->read_word(VAR_11->base + VAR_6);
 VAR_15 = VAR_11->read_word(VAR_11->base + VAR_5);


 if (VAR_14 != VAR_12 || VAR_15 != VAR_13)
  return -VAR_0;

 return 0;
}
