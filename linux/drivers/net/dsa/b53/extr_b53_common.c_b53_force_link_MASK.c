
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int cpu_port; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct b53_device*,int ,int ,int *) ;
 int FUNC_2 (struct b53_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct b53_device *VAR_5, int VAR_6, int VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10;


 if (VAR_6 == VAR_5->cpu_port) {
  VAR_10 = VAR_1;
  VAR_9 = VAR_3;
 } else {
  VAR_10 = FUNC_0(VAR_6);
  VAR_9 = VAR_2;
 }

 FUNC_1(VAR_5, VAR_0, VAR_10, &VAR_8);
 VAR_8 |= VAR_9;
 if (VAR_7)
  VAR_8 |= VAR_4;
 else
  VAR_8 &= ~VAR_4;
 FUNC_2(VAR_5, VAR_0, VAR_10, VAR_8);
}
