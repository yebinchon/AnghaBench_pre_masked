
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int features; int chip; } ;
typedef TYPE_1__ pegasus_t ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline void FUNC_3(pegasus_t *VAR_5)
{
 __u8 VAR_6 = 0xa5;

 FUNC_2(VAR_5, VAR_1, 0);
 FUNC_2(VAR_5, VAR_2, 1);
 FUNC_1(100);
 if ((VAR_5->features & VAR_0) && VAR_4)
  FUNC_2(VAR_5, VAR_2, 0);
 else
  FUNC_2(VAR_5, VAR_2, 2);

 FUNC_2(VAR_5, 0x83, VAR_6);
 FUNC_0(VAR_5, 0x83, 1, &VAR_6);

 if (VAR_6 == 0xa5)
  VAR_5->chip = 0x8513;
 else
  VAR_5->chip = 0;

 FUNC_2(VAR_5, 0x80, 0xc0);
 FUNC_2(VAR_5, 0x83, 0xff);
 FUNC_2(VAR_5, 0x84, 0x01);

 if (VAR_5->features & VAR_0 && VAR_4)
  FUNC_2(VAR_5, VAR_3, 6);
 else
  FUNC_2(VAR_5, VAR_3, 2);
}
