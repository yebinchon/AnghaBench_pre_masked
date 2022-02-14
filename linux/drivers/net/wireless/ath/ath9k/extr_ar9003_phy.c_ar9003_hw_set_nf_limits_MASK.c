
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nominal; int min; int max; } ;
struct TYPE_3__ {int nominal; int min; int max; } ;
struct ath_hw {TYPE_2__ nf_5g; TYPE_1__ nf_2g; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_11)
{
 VAR_11->nf_2g.max = VAR_0;
 VAR_11->nf_2g.min = VAR_2;
 VAR_11->nf_2g.nominal = VAR_6;
 VAR_11->nf_5g.max = VAR_1;
 VAR_11->nf_5g.min = VAR_3;
 VAR_11->nf_5g.nominal = VAR_7;

 if (FUNC_0(VAR_11))
  VAR_11->nf_2g.nominal = VAR_8;

 if (FUNC_1(VAR_11) || FUNC_2(VAR_11)) {
  VAR_11->nf_2g.min = VAR_4;
  VAR_11->nf_2g.nominal = VAR_9;
  VAR_11->nf_5g.min = VAR_5;
  VAR_11->nf_5g.nominal = VAR_10;
 }
}
