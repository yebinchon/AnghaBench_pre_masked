
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_0, u16 VAR_1,
        u8 VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_0 *= 4;
 VAR_4 = FUNC_0(VAR_0++, VAR_1 >> 8);
 if (VAR_4)
  goto out;
 VAR_4 = FUNC_0(VAR_0++, VAR_1 & 0xff);
 if (VAR_4)
  goto out;
 VAR_4 = FUNC_0(VAR_0++, VAR_2);
 if (VAR_4)
  goto out;
 VAR_4 = FUNC_0(VAR_0++, VAR_3);
out:
 return VAR_4;
}
