
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,scalar_t__,int ,int*) ;
 int FUNC_1 (struct rio_mport*,scalar_t__,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct rio_mport *VAR_5, u16 VAR_6, u8 VAR_7,
         u16 VAR_8, u16 VAR_9, u8 VAR_10)
{
 u32 VAR_11;

 if (VAR_10 == VAR_2)
  VAR_10 = VAR_0;

 if (VAR_8 == VAR_1) {
  FUNC_1(VAR_5, VAR_6, VAR_7,
    VAR_3, VAR_9);

  FUNC_0(VAR_5, VAR_6, VAR_7,
    VAR_4, &VAR_11);

  VAR_11 = (0xffffff00 & VAR_11) | (u32)VAR_10;
  FUNC_1(VAR_5, VAR_6, VAR_7,
    VAR_4, VAR_11);
 }

 return 0;
}
