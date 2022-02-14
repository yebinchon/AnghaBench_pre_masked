
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encx24j600_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct encx24j600_context*,unsigned int,unsigned int) ;
 int FUNC_1 (struct encx24j600_context*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4)
{
 struct encx24j600_context *VAR_5 = VAR_1;

 int VAR_6 = 0;
 unsigned int VAR_7 = VAR_3 & VAR_4;
 unsigned int VAR_8 = VAR_3 & ~VAR_4;

 if ((VAR_2 >= 0x40 && VAR_2 < 0x6c) || VAR_2 >= 0x80)
  return -VAR_0;

 if (VAR_7 & 0xff)
  VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_7);

 VAR_7 = (VAR_7 & 0xff00) >> 8;

 if ((VAR_7 & 0xff) && (VAR_6 == 0))
  VAR_6 = FUNC_1(VAR_5, VAR_2 + 1, VAR_7);

 if ((VAR_8 & 0xff) && (VAR_6 == 0))
  VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_8);

 VAR_8 = (VAR_8 & 0xff00) >> 8;

 if ((VAR_8 & 0xff) && (VAR_6 == 0))
  VAR_6 = FUNC_0(VAR_5, VAR_2 + 1, VAR_8);

 return VAR_6;
}
