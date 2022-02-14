
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {scalar_t__ irq; int (* read_word ) (scalar_t__) ;void* wait; scalar_t__ base; int (* write_word ) (int,scalar_t__) ;int complete; } ;
struct mtd_info {struct onenand_chip* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,char*,struct onenand_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_6)
{
 struct onenand_chip *VAR_7 = VAR_6->priv;
 int VAR_8;

 FUNC_0(&VAR_7->complete);

 if (VAR_7->irq <= 0) {
  VAR_7->wait = VAR_5;
  return;
 }

 if (FUNC_1(VAR_7->irq, &VAR_3,
    VAR_0, "onenand", VAR_7)) {

  VAR_7->wait = VAR_5;
  return;
 }


 VAR_8 = VAR_7->read_word(VAR_7->base + VAR_1);
 VAR_8 |= VAR_2;
 VAR_7->write_word(VAR_8, VAR_7->base + VAR_1);

 VAR_7->wait = VAR_4;
}
