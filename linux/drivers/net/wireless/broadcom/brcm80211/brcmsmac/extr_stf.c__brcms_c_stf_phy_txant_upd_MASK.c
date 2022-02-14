
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct brcms_c_info {TYPE_1__* stf; int hw; TYPE_2__* band; } ;
typedef scalar_t__ s8 ;
struct TYPE_7__ {int phyrev; } ;
struct TYPE_6__ {int phytxant; int txchain; scalar_t__ txant; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct brcms_c_info *VAR_10)
{
 s8 VAR_11;

 VAR_11 = (s8) VAR_10->stf->txant;
 if (FUNC_3(VAR_10->band)) {
  if (VAR_11 == VAR_0) {
   VAR_10->stf->phytxant = VAR_2;
  } else if (VAR_11 == VAR_1) {
   VAR_10->stf->phytxant = VAR_3;

   if (FUNC_1(VAR_10->band) &&
       FUNC_4(VAR_10->band->phyrev, 3)
       && FUNC_5(VAR_10->band->phyrev, 7))
    VAR_10->stf->phytxant = VAR_4;
  } else {
   if (FUNC_0(VAR_10->band) ||
       FUNC_2(VAR_10->band))
    VAR_10->stf->phytxant = VAR_6;
   else {

    FUNC_6(VAR_10->stf->txchain <= 0);
    VAR_10->stf->phytxant =
        VAR_10->stf->txchain << VAR_5;
   }
  }
 } else {
  if (VAR_11 == VAR_0)
   VAR_10->stf->phytxant = VAR_7;
  else if (VAR_11 == VAR_1)
   VAR_10->stf->phytxant = VAR_8;
  else
   VAR_10->stf->phytxant = VAR_9;
 }

 FUNC_7(VAR_10->hw, VAR_10->stf->phytxant);
}
