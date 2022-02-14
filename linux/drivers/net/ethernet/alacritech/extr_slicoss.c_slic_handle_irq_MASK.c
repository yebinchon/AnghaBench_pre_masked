
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct slic_device*,int) ;
 int FUNC_1 (struct slic_device*) ;
 int FUNC_2 (struct slic_device*,unsigned int,unsigned int*) ;
 int FUNC_3 (struct slic_device*,int) ;
 int FUNC_4 (struct slic_device*) ;

__attribute__((used)) static void FUNC_5(struct slic_device *VAR_5, u32 VAR_6,
       unsigned int VAR_7, unsigned int *VAR_8)
{
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5, VAR_6);

 if (VAR_6 & VAR_2)
  FUNC_1(VAR_5);

 if (VAR_6 & VAR_4)
  FUNC_3(VAR_5, VAR_6);

 if (VAR_6 & VAR_3)
  FUNC_2(VAR_5, VAR_7, VAR_8);

 if (VAR_6 & VAR_0)
  FUNC_4(VAR_5);
}
