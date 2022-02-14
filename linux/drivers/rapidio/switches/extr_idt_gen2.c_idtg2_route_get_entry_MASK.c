
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
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (struct rio_mport*,scalar_t__,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct rio_mport *VAR_7, u16 VAR_8, u8 VAR_9,
         u16 VAR_10, u16 VAR_11, u8 *VAR_12)
{
 u32 VAR_13;




 if (VAR_10 == VAR_3)
  VAR_10 = 0;
 else
  VAR_10++;

 FUNC_1(VAR_7, VAR_8, VAR_9,
      VAR_2, VAR_10);

 FUNC_1(VAR_7, VAR_8, VAR_9,
      VAR_5,
      VAR_11);

 FUNC_0(VAR_7, VAR_8, VAR_9,
     VAR_6, &VAR_13);

 if (VAR_0 == (u8)VAR_13 || VAR_1 == (u8)VAR_13)
  *VAR_12 = VAR_4;
 else
  *VAR_12 = (u8)VAR_13;

 return 0;
}
