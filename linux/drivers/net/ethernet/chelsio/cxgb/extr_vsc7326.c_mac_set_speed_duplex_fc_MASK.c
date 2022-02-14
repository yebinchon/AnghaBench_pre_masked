
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmac {int adapter; TYPE_1__* instance; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct cmac *VAR_7, int VAR_8, int VAR_9,
       int VAR_10)
{
 u32 VAR_11;
 int VAR_12, VAR_13 = VAR_7->instance->index;

 if (VAR_8 >= 0 && VAR_8 != VAR_4 && VAR_8 != VAR_5 &&
     VAR_8 != VAR_6)
  return -1;
 if (VAR_9 > 0 && VAR_9 != VAR_0)
  return -1;

 if (VAR_8 >= 0) {
  FUNC_5(VAR_7->adapter, FUNC_2(VAR_13), &VAR_11);
  VAR_12 = VAR_11 & 3;
  VAR_11 &= ~0xf;
  VAR_11 |= 4;
  if (VAR_8 == VAR_6)
   VAR_11 |= 8;
  VAR_12 |= VAR_11;
  FUNC_6(VAR_7->adapter, FUNC_2(VAR_13), VAR_11);

  if (VAR_8 == VAR_6)
   VAR_11 = 0x82;
  else if (VAR_8 == VAR_5)
   VAR_11 = 0x84;
  else
   VAR_11 = 0x86;
  FUNC_6(VAR_7->adapter, FUNC_1(VAR_13), VAR_11 | 1);
  FUNC_6(VAR_7->adapter, FUNC_1(VAR_13), VAR_11);
  FUNC_5(VAR_7->adapter, FUNC_0(VAR_13), &VAR_11);
  VAR_11 &= ~0xff00;
  if (VAR_8 == VAR_6)
   VAR_11 |= 0x400;
  else if (VAR_8 == VAR_5)
   VAR_11 |= 0x2000;
  else
   VAR_11 |= 0xff00;
  FUNC_6(VAR_7->adapter, FUNC_0(VAR_13), VAR_11);

  FUNC_6(VAR_7->adapter, FUNC_4(VAR_13),
     VAR_8 == VAR_6 ? 5 : 0x11);
  if (VAR_9 == VAR_1)
   VAR_12 = 0x0;
  else if (VAR_8 == VAR_6)
   VAR_12 = 0xc;
  else
   VAR_12 = 0x4;
  VAR_12 |= 0x9 << 10;
  VAR_12 |= 0x6 << 6;
  VAR_12 |= 0x1 << 4;
  VAR_12 |= 0x3;
  FUNC_6(VAR_7->adapter, FUNC_2(VAR_13), VAR_12);

 }

 FUNC_5(VAR_7->adapter, FUNC_3(VAR_13), &VAR_11);
 VAR_11 &= 0xfff0ffff;
 VAR_11 |= 0x20000;
 if (VAR_10 & VAR_2)
  VAR_11 |= 0x40000;
 if (VAR_10 & VAR_3)
  VAR_11 |= 0x80000;
 if (VAR_10 == (VAR_2 | VAR_3))
  VAR_11 |= 0x10000;
 FUNC_6(VAR_7->adapter, FUNC_3(VAR_13), VAR_11);
 return 0;
}
