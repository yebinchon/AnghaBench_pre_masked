
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (struct rio_mport*,scalar_t__,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct rio_mport *VAR_6, u16 VAR_7, u8 VAR_8,
         u16 VAR_9, u16 VAR_10, u8 *VAR_11)
{
 u32 VAR_12;

 if (VAR_9 == VAR_2) {
  FUNC_1(VAR_6, VAR_7, VAR_8,
    VAR_4, VAR_10);

  FUNC_0(VAR_6, VAR_7, VAR_8,
    VAR_5, &VAR_12);

  if (VAR_0 == (u8)VAR_12 ||
      VAR_1 == (u8)VAR_12)
   *VAR_11 = VAR_3;
  else
   *VAR_11 = (u8)VAR_12;
 }

 return 0;
}
