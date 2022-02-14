
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ar9170 {TYPE_1__* hw; } ;
typedef int buf ;
typedef int __le32 ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*,int ,int,int *,int ,int *) ;
 int const FUNC_1 (int const) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,int const,int const,int) ;

int FUNC_4(struct ar9170 *VAR_1, const u32 VAR_2, const u32 VAR_3)
{
 const __le32 VAR_4[2] = {
  FUNC_1(VAR_2),
  FUNC_1(VAR_3),
 };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0, sizeof(VAR_4),
    (u8 *) VAR_4, 0, ((void*)0));
 if (VAR_5) {
  if (FUNC_2()) {
   FUNC_3(VAR_1->hw->wiphy, "writing reg %#x "
    "(val %#x) failed (%d)\n", VAR_2, VAR_3, VAR_5);
  }
 }
 return VAR_5;
}
