
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sgi_w1_device {int mcr; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static u8 FUNC_4(void *VAR_0, u8 VAR_1)
{
 struct sgi_w1_device *VAR_2 = VAR_0;
 u8 VAR_3;

 if (VAR_1)
  FUNC_3(FUNC_0(6, 13), VAR_2->mcr);
 else
  FUNC_3(FUNC_0(80, 30), VAR_2->mcr);

 VAR_3 = FUNC_1(VAR_2->mcr);
 if (VAR_1)
  FUNC_2(100);
 return VAR_3;
}
