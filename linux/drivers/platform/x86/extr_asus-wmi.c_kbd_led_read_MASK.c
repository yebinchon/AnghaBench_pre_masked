
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wmi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct asus_wmi*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct asus_wmi *VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4;







 VAR_4 = FUNC_0(VAR_1, VAR_0,
         0xFFFF);


 if (VAR_4 == 0x8000)
  VAR_4 = 0;

 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_2)
  *VAR_2 = VAR_4 & 0x7F;
 if (VAR_3)
  *VAR_3 = (VAR_4 >> 8) & 0x7F;
 return 0;
}
