
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slic_device {scalar_t__ is_fiber; TYPE_1__* pdev; } ;
struct TYPE_2__ {unsigned int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct slic_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct slic_device *VAR_21)
{
 unsigned int VAR_22 = VAR_21->pdev->subsystem_device;
 u32 VAR_23;

 if (VAR_21->is_fiber) {




  VAR_23 = VAR_14 << 16 | VAR_1 |
        VAR_2 | VAR_3;

  FUNC_0(VAR_21, VAR_20, VAR_23);

  VAR_23 = VAR_15 << 16 | VAR_13 | VAR_11 |
        VAR_12;
  FUNC_0(VAR_21, VAR_20, VAR_23);
 } else {




  VAR_23 = VAR_14 << 16 | VAR_4 |
        VAR_5 | VAR_6 | VAR_7;

  VAR_23 |= VAR_10 | VAR_9;

  VAR_23 |= VAR_8;
  FUNC_0(VAR_21, VAR_20, VAR_23);


  VAR_23 = VAR_16 << 16 | VAR_0;
  FUNC_0(VAR_21, VAR_20, VAR_23);

  if (VAR_22 != VAR_17) {

   VAR_23 = VAR_18 | VAR_19;
   FUNC_0(VAR_21, VAR_20, VAR_23);


   VAR_23 = VAR_15 << 16 | VAR_13 | VAR_11 |
         VAR_12;
   FUNC_0(VAR_21, VAR_20, VAR_23);
  } else {

   VAR_23 = VAR_15 << 16 | VAR_11 | VAR_12;
   FUNC_0(VAR_21, VAR_20, VAR_23);
  }
 }
}
