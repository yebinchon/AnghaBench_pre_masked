
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sgi_w1_device {int mcr; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static u8 FUNC_4(void *VAR_0)
{
 struct sgi_w1_device *VAR_1 = VAR_0;
 u8 VAR_2;

 FUNC_3(FUNC_0(520, 65), VAR_1->mcr);
 VAR_2 = FUNC_1(VAR_1->mcr);
 FUNC_2(500);
 return VAR_2;
}
