
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (struct rio_mport*,scalar_t__,int ,int ,int*) ;
 int FUNC_4 (struct rio_mport*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct rio_mport *VAR_4, u16 VAR_5, u8 VAR_6,
         u16 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (VAR_7 == VAR_1) {
  for (VAR_8 = 0; VAR_8 <= 0xff; VAR_8++) {
   VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6,
      FUNC_0(0, VAR_8),
      VAR_2);
   if (VAR_10)
    break;
  }

  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6,
           VAR_3, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_7 >= FUNC_1(VAR_9))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 <= 0xff; VAR_8++) {
  VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6,
     FUNC_2(VAR_7, 0, VAR_8),
     VAR_2);
  if (VAR_10)
   break;
 }

 return VAR_10;
}
