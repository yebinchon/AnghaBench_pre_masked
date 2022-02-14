
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape390_kekl {scalar_t__ type; scalar_t__ type_on_tape; int label; } ;
struct tape3592_kekl {int flags; struct tape3592_kekl* label; } ;


 int FUNC_0 (struct tape3592_kekl*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tape3592_kekl*,int ,int) ;
 int FUNC_2 (struct tape3592_kekl*,char,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tape390_kekl *VAR_1,
       struct tape3592_kekl *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 if (VAR_1->type == VAR_0)
  VAR_2->flags |= 0x40;
 if (VAR_1->type_on_tape == VAR_0)
  VAR_2->flags |= 0x80;
 VAR_3 = FUNC_3(sizeof(VAR_2->label), FUNC_4(VAR_1->label));
 FUNC_1(VAR_2->label, VAR_1->label, VAR_3);
 FUNC_2(VAR_2->label + VAR_3, ' ', sizeof(VAR_2->label) - VAR_3);
 FUNC_0(VAR_2->label, sizeof(VAR_2->label));
}
