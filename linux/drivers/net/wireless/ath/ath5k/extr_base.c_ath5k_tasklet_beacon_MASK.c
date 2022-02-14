
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ath5k_hw {scalar_t__ opmode; int block; int nexttbtt; scalar_t__ bintval; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,int ,int ,unsigned long long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath5k_hw*) ;
 scalar_t__ FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct ath5k_hw *VAR_3 = (struct ath5k_hw *) VAR_2;
 if (VAR_3->opmode == VAR_1) {

  u64 VAR_4 = FUNC_3(VAR_3);
  VAR_3->nexttbtt += VAR_3->bintval;
  FUNC_0(VAR_3, VAR_0,
    "SWBA nexttbtt: %x hw_tu: %x "
    "TSF: %llx\n",
    VAR_3->nexttbtt,
    FUNC_1(VAR_4),
    (unsigned long long) VAR_4);
 } else {
  FUNC_4(&VAR_3->block);
  FUNC_2(VAR_3);
  FUNC_5(&VAR_3->block);
 }
}
