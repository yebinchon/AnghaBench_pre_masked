
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*,int ,int*) ;
 int FUNC_1 (struct net_device*,scalar_t__,int *) ;
 int FUNC_2 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4, u32 VAR_5, u32 VAR_6,
       u8 * VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;


 VAR_8 = VAR_5 & (~0x3);
 VAR_10 = VAR_5 - VAR_8;
 if (VAR_10) {

  FUNC_2(VAR_4, VAR_2,
          VAR_8);
  for (VAR_11 = VAR_10; VAR_11 < 4; VAR_11++, VAR_7++)
   FUNC_1(VAR_4,
        VAR_3 + VAR_11,
        VAR_7);

  VAR_6 -= VAR_10;
  VAR_8 += 4;
 }


 FUNC_2(VAR_4, VAR_0, VAR_8);
 VAR_9 = VAR_6 & (~0x3);
 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11 += 4, VAR_7 += 4, VAR_8 += 4)
  FUNC_0(VAR_4, VAR_1, (u32 *) VAR_7);


 VAR_10 = VAR_6 - VAR_9;
 FUNC_2(VAR_4, VAR_2, VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_7++)
  FUNC_1(VAR_4, VAR_3 + VAR_11, VAR_7);
}
