
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_device {scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct slic_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct slic_device *VAR_5)
{
 u32 VAR_6;

 VAR_6 = VAR_2 | VAR_3;

 if (VAR_5->duplex == VAR_0)
  VAR_6 |= VAR_1;

 FUNC_0(VAR_5, VAR_4, VAR_6);
}
