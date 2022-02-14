
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct fm10k_intfc {int* reta; } ;


 int VAR_0 ;
 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, u32 *VAR_2)
{
 struct fm10k_intfc *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (!VAR_2)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_2 += 4) {
  u32 VAR_5 = VAR_3->reta[VAR_4];

  VAR_2[0] = (VAR_5 << 24) >> 24;
  VAR_2[1] = (VAR_5 << 16) >> 24;
  VAR_2[2] = (VAR_5 << 8) >> 24;
  VAR_2[3] = (VAR_5) >> 24;
 }

 return 0;
}
