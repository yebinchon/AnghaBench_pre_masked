
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rio_mport*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct rio_mport *VAR_3, u16 VAR_4, u8 VAR_5,
         u16 VAR_6, u16 VAR_7, u8 VAR_8)
{
 if (VAR_6 == VAR_0) {
  FUNC_2(VAR_3, VAR_4, VAR_5,
     VAR_1, VAR_7);
  FUNC_2(VAR_3, VAR_4, VAR_5,
     VAR_2, VAR_8);
 } else {
  FUNC_2(VAR_3, VAR_4, VAR_5,
     FUNC_0(VAR_6),
     VAR_7);
  FUNC_2(VAR_3, VAR_4, VAR_5,
     FUNC_1(VAR_6), VAR_8);
 }

 FUNC_3(10);

 return 0;
}
