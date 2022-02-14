
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rio_mport*,scalar_t__,int,int ,int*) ;
 int FUNC_3 (struct rio_mport*,scalar_t__,int,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct rio_mport *VAR_3, u16 VAR_4, u8 VAR_5,
         u16 VAR_6, u16 VAR_7, u8 *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10;

 if (VAR_6 == VAR_0) {
  FUNC_3(VAR_3, VAR_4, VAR_5,
     VAR_1, VAR_7);
  FUNC_2(VAR_3, VAR_4, VAR_5,
     VAR_2, &VAR_10);
 } else {
  FUNC_3(VAR_3, VAR_4, VAR_5,
     FUNC_0(VAR_6),
     VAR_7);
  FUNC_2(VAR_3, VAR_4, VAR_5,
     FUNC_1(VAR_6), &VAR_10);
 }

 *VAR_8 = VAR_10;
 if (*VAR_8 > 15)
  VAR_9 = -1;

 return VAR_9;
}
