
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct rio_mport*,int,scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(struct rio_mport *VAR_5, u16 VAR_6, u8 VAR_7,
         u16 VAR_8, u16 VAR_9, u8 *VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 if (VAR_9 > 0xFF)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7,
           VAR_4, &VAR_11);
 if (VAR_12)
  return VAR_12;






 if (VAR_8 == VAR_1)
  VAR_8 = FUNC_0(VAR_11);
 else if (VAR_8 >= FUNC_1(VAR_11))
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7,
   FUNC_2(VAR_8, 0, VAR_9),
   &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 == VAR_3)
  *VAR_10 = VAR_2;
 else
  *VAR_10 = (u8)VAR_11;

 return 0;
}
