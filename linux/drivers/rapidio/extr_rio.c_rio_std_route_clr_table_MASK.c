
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {scalar_t__ sys_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,int ,int ,int*) ;
 int FUNC_1 (struct rio_mport*,scalar_t__,int ,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct rio_mport *VAR_8, u16 VAR_9, u8 VAR_10,
   u16 VAR_11)
{
 u32 VAR_12 = 0xff;
 u32 VAR_13, VAR_14, VAR_15 = 1, VAR_16 = 0;
 u32 VAR_17 = VAR_1;

 if (VAR_11 == VAR_0) {
  FUNC_0(VAR_8, VAR_9, VAR_10,
      VAR_2, &VAR_14);

  if (VAR_8->sys_size) {
   FUNC_0(VAR_8, VAR_9, VAR_10,
       VAR_7,
       &VAR_12);
   VAR_12 &= VAR_4;
  }

  if (VAR_14 & VAR_3) {
   VAR_16 = 0x80000000;
   VAR_15 = 4;
   VAR_17 = (VAR_1 << 24) |
       (VAR_1 << 16) |
       (VAR_1 << 8) |
       VAR_1;
  }

  for (VAR_13 = 0; VAR_13 <= VAR_12;) {
   FUNC_1(VAR_8, VAR_9, VAR_10,
     VAR_5,
     VAR_16 | VAR_13);
   FUNC_1(VAR_8, VAR_9, VAR_10,
     VAR_6,
     VAR_17);
   VAR_13 += VAR_15;
  }
 }

 FUNC_2(10);
 return 0;
}
