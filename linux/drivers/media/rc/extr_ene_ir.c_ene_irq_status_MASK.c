
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ene_device {scalar_t__ hw_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ene_device*,int ,int) ;
 int FUNC_1 (struct ene_device*,int ) ;
 int FUNC_2 (struct ene_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ene_device *VAR_11)
{
 u8 VAR_12;
 u8 VAR_13, VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_1(VAR_11, VAR_4);

 if (VAR_11->hw_revision < VAR_6) {
  VAR_12 = FUNC_1(VAR_11, VAR_0);

  if (!(VAR_12 & VAR_1))
   return 0;

  FUNC_0(VAR_11, VAR_0, VAR_1);
  return VAR_8;
 }

 VAR_12 = FUNC_1(VAR_11, VAR_7);
 if (!(VAR_12 & VAR_9))
  return 0;


 FUNC_2(VAR_11, VAR_7, VAR_12 & ~VAR_9);
 FUNC_2(VAR_11, VAR_7, VAR_12 & ~VAR_9);


 if (VAR_14 & VAR_5) {
  VAR_15 |= VAR_8;
  FUNC_2(VAR_11, VAR_4, VAR_14 & ~VAR_5);
 }


 VAR_13 = FUNC_1(VAR_11, VAR_2);
 if (VAR_13 & VAR_3) {
  FUNC_2(VAR_11, VAR_2, VAR_13 & ~VAR_3);
  VAR_15 |= VAR_10;
 }

 return VAR_15;
}
