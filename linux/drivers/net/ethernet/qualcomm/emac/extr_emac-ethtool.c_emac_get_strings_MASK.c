
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;


 int * VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 unsigned int VAR_6;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_5, "single-pause-mode");
  break;

 case 128:
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   FUNC_1(VAR_5, VAR_2[VAR_6],
    VAR_1);
   VAR_5 += VAR_1;
  }
  break;
 }
}
