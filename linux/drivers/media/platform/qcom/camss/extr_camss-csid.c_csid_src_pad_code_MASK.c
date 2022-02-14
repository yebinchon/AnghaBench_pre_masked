
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csid_device {TYPE_1__* camss; } ;
struct TYPE_2__ {scalar_t__ version; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int const VAR_2 ;

 int const VAR_3 ;
 int FUNC_1 (int*,int ,unsigned int,int) ;

__attribute__((used)) static u32 FUNC_2(struct csid_device *VAR_4, u32 VAR_5,
        unsigned int VAR_6, u32 VAR_7)
{
 if (VAR_4->camss->version == VAR_0) {
  if (VAR_6 > 0)
   return 0;

  return VAR_5;
 } else if (VAR_4->camss->version == VAR_1) {
  switch (VAR_5) {
  case 129:
  {
   u32 VAR_8[] = {
    129,
    VAR_2,
   };

   return FUNC_1(VAR_8, FUNC_0(VAR_8),
           VAR_6, VAR_7);
  }
  case 128:
  {
   u32 VAR_9[] = {
    128,
    VAR_3,
   };

   return FUNC_1(VAR_9, FUNC_0(VAR_9),
           VAR_6, VAR_7);
  }
  default:
   if (VAR_6 > 0)
    return 0;

   return VAR_5;
  }
 } else {
  return 0;
 }
}
