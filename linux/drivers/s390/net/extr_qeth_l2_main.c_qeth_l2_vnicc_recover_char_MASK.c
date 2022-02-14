
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int sup_chars; int set_char_sup; int wanted_chars; } ;
struct TYPE_4__ {TYPE_1__ vnicc; } ;
struct qeth_card {TYPE_2__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,int) ;

__attribute__((used)) static bool FUNC_1(struct qeth_card *VAR_3, u32 VAR_4,
           bool VAR_5)
{
 u32 VAR_6 = VAR_5 ? VAR_1 : VAR_0;

 if (VAR_3->options.vnicc.sup_chars & VAR_4 &&
     VAR_3->options.vnicc.set_char_sup & VAR_4 &&
     !FUNC_0(VAR_3, VAR_4, VAR_6))
  return 0;
 VAR_3->options.vnicc.wanted_chars &= ~VAR_4;
 VAR_3->options.vnicc.wanted_chars |= VAR_2 & VAR_4;
 return 1;
}
