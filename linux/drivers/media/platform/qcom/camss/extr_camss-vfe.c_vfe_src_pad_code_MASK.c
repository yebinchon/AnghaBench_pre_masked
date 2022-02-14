
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vfe_line {int dummy; } ;
struct vfe_device {TYPE_1__* camss; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;

 int const VAR_3 ;

 int const VAR_4 ;

 int const VAR_5 ;

 struct vfe_device* FUNC_1 (struct vfe_line*) ;
 int FUNC_2 (int*,int ,unsigned int,int) ;

__attribute__((used)) static u32 FUNC_3(struct vfe_line *VAR_6, u32 VAR_7,
       unsigned int VAR_8, u32 VAR_9)
{
 struct vfe_device *VAR_10 = FUNC_1(VAR_6);

 if (VAR_10->camss->version == VAR_0)
  switch (VAR_7) {
  case 129:
  {
   u32 VAR_11[] = {
    129,
    VAR_4,
   };

   return FUNC_2(VAR_11, FUNC_0(VAR_11),
          VAR_8, VAR_9);
  }
  case 128:
  {
   u32 VAR_12[] = {
    128,
    VAR_5,
   };

   return FUNC_2(VAR_12, FUNC_0(VAR_12),
          VAR_8, VAR_9);
  }
  case 131:
  {
   u32 VAR_13[] = {
    131,
    VAR_2,
   };

   return FUNC_2(VAR_13, FUNC_0(VAR_13),
          VAR_8, VAR_9);
  }
  case 130:
  {
   u32 VAR_14[] = {
    130,
    VAR_3,
   };

   return FUNC_2(VAR_14, FUNC_0(VAR_14),
          VAR_8, VAR_9);
  }
  default:
   if (VAR_8 > 0)
    return 0;

   return VAR_7;
  }
 else if (VAR_10->camss->version == VAR_1)
  switch (VAR_7) {
  case 129:
  {
   u32 VAR_15[] = {
    129,
    128,
    131,
    130,
    VAR_4,
   };

   return FUNC_2(VAR_15, FUNC_0(VAR_15),
          VAR_8, VAR_9);
  }
  case 128:
  {
   u32 VAR_16[] = {
    128,
    129,
    131,
    130,
    VAR_5,
   };

   return FUNC_2(VAR_16, FUNC_0(VAR_16),
          VAR_8, VAR_9);
  }
  case 131:
  {
   u32 VAR_17[] = {
    131,
    129,
    128,
    130,
    VAR_2,
   };

   return FUNC_2(VAR_17, FUNC_0(VAR_17),
          VAR_8, VAR_9);
  }
  case 130:
  {
   u32 VAR_18[] = {
    130,
    129,
    128,
    131,
    VAR_3,
   };

   return FUNC_2(VAR_18, FUNC_0(VAR_18),
          VAR_8, VAR_9);
  }
  default:
   if (VAR_8 > 0)
    return 0;

   return VAR_7;
  }
 else
  return 0;
}
