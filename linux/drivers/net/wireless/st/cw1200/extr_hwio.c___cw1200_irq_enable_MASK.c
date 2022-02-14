
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cw1200_common {scalar_t__ hw_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cw1200_common*,int ,int *) ;
 int FUNC_1 (struct cw1200_common*,int ,int *) ;
 int FUNC_2 (struct cw1200_common*,int ,int ) ;
 int FUNC_3 (struct cw1200_common*,int ,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct cw1200_common *VAR_4, int VAR_5)
{
 u32 VAR_6;
 u16 VAR_7;
 int VAR_8;

 if (VAR_0 == VAR_4->hw_type) {
  VAR_8 = FUNC_1(VAR_4, VAR_1, &VAR_6);
  if (VAR_8 < 0) {
   FUNC_4("Can't read config register.\n");
   return VAR_8;
  }

  if (VAR_5)
   VAR_6 |= VAR_2;
  else
   VAR_6 &= ~VAR_2;

  VAR_8 = FUNC_3(VAR_4, VAR_1, VAR_6);
  if (VAR_8 < 0) {
   FUNC_4("Can't write config register.\n");
   return VAR_8;
  }
 } else {
  VAR_8 = FUNC_0(VAR_4, VAR_1, &VAR_7);
  if (VAR_8 < 0) {
   FUNC_4("Can't read control register.\n");
   return VAR_8;
  }

  if (VAR_5)
   VAR_7 |= VAR_3;
  else
   VAR_7 &= ~VAR_3;

  VAR_8 = FUNC_2(VAR_4, VAR_1, VAR_7);
  if (VAR_8 < 0) {
   FUNC_4("Can't write control register.\n");
   return VAR_8;
  }
 }
 return 0;
}
