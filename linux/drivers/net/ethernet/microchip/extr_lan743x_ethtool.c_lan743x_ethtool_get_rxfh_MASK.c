
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lan743x_adapter*,int ) ;
 struct lan743x_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
        u32 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct lan743x_adapter *VAR_5 = FUNC_3(VAR_1);

 if (VAR_2) {
  int VAR_6;
  int VAR_7 = 0;

  for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
   u32 VAR_8 =
    FUNC_2(VAR_5, FUNC_1(VAR_6));

   VAR_7 = VAR_6 << 2;
   VAR_2[VAR_7 + 0] =
    ((VAR_8 >> 0) & 0x000000FF);
   VAR_2[VAR_7 + 1] =
    ((VAR_8 >> 8) & 0x000000FF);
   VAR_2[VAR_7 + 2] =
    ((VAR_8 >> 16) & 0x000000FF);
   VAR_2[VAR_7 + 3] =
    ((VAR_8 >> 24) & 0x000000FF);
  }
 }
 if (VAR_3) {
  int VAR_9;
  int VAR_10 = 0;

  for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
   u32 VAR_11 =
    FUNC_2(VAR_5,
       FUNC_0(VAR_9));

   VAR_10 = VAR_9 << 2;
   VAR_3[VAR_10 + 0] =
    ((VAR_11 >> 0) & 0x000000FF);
   VAR_3[VAR_10 + 1] =
    ((VAR_11 >> 8) & 0x000000FF);
   VAR_3[VAR_10 + 2] =
    ((VAR_11 >> 16) & 0x000000FF);
   VAR_3[VAR_10 + 3] =
    ((VAR_11 >> 24) & 0x000000FF);
  }
 }
 if (VAR_4)
  (*VAR_4) = VAR_0;
 return 0;
}
