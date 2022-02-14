
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef scalar_t__ u8 ;
struct brcms_c_rateset {size_t count; size_t* rates; int * mcs; int htphy_membership; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcms_c_rateset*) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int *,int *,int ) ;

void
FUNC_4(struct brcms_c_rateset *VAR_5, struct brcms_c_rateset *VAR_6,
         bool VAR_7, u8 VAR_8, uint VAR_9, bool VAR_10)
{
 uint VAR_11;
 uint VAR_12;
 uint VAR_13;

 VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5->count; VAR_11++) {
  VAR_12 = VAR_5->rates[VAR_11];
  if (VAR_7 && !(VAR_12 & VAR_2))
   continue;
  if (VAR_8 == VAR_0 &&
      FUNC_2((VAR_12 & VAR_3)))
   continue;
  if (VAR_8 == VAR_1 &&
      FUNC_1((VAR_12 & VAR_3)))
   continue;
  VAR_6->rates[VAR_13++] = VAR_12 & VAR_9;
 }
 VAR_6->count = VAR_13;
 VAR_6->htphy_membership = VAR_5->htphy_membership;

 if (VAR_10 && VAR_8 != VAR_0)
  FUNC_3(&VAR_6->mcs[0], &VAR_5->mcs[0], VAR_4);
 else
  FUNC_0(VAR_6);
}
