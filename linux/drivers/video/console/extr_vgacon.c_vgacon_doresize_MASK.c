
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int height; } ;
struct vc_data {TYPE_1__ vc_font; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;

__attribute__((used)) static int FUNC_4(struct vc_data *VAR_15,
  unsigned int VAR_16, unsigned int VAR_17)
{
 unsigned long VAR_18;
 unsigned int VAR_19 = VAR_17 * VAR_15->vc_font.height;
 u8 VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23, VAR_24;

 FUNC_2(&VAR_9, VAR_18);

 VAR_13 = VAR_16 * VAR_7;
 VAR_14 = VAR_17 * VAR_15->vc_font.height;
 if (VAR_12 >= VAR_8) {
  FUNC_1(VAR_1, VAR_10);
  VAR_24 = FUNC_0(VAR_11);

  if (VAR_24 & 0x80)
   VAR_19 <<= 1;

  FUNC_1(VAR_2, VAR_10);
  VAR_23 = FUNC_0(VAR_11);

  if (VAR_23 & 0x04)
   VAR_19 >>= 1;

  VAR_19 -= 1;
  VAR_20 = VAR_19 & 0xff;

  FUNC_1(VAR_4, VAR_10);
  VAR_21 = FUNC_0(VAR_11) & ~0x42;

  if (VAR_19 & 0x100)
   VAR_21 |= 0x02;
  if (VAR_19 & 0x200)
   VAR_21 |= 0x40;


  FUNC_1(VAR_6, VAR_10);
  VAR_22 = FUNC_0(VAR_11);
  FUNC_1(VAR_6, VAR_10);
  FUNC_1(VAR_22 & ~0x80, VAR_11);
 }

 FUNC_1(VAR_0, VAR_10);
 FUNC_1(VAR_16 - 1, VAR_11);
 FUNC_1(VAR_3, VAR_10);
 FUNC_1(VAR_16 >> 1, VAR_11);

 if (VAR_12 >= VAR_8) {
  FUNC_1(VAR_5, VAR_10);
  FUNC_1(VAR_20, VAR_11);
  FUNC_1(VAR_4, VAR_10);
  FUNC_1(VAR_21,VAR_11);


  FUNC_1(VAR_6, VAR_10);
  FUNC_1(VAR_22, VAR_11);
 }

 FUNC_3(&VAR_9, VAR_18);
 return 0;
}
