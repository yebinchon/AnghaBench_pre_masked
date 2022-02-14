
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int BoardType; int CutVersion; int SupportPlatform; int PackageType; int SupportInterface; int TypeGLNA; int TypeGPA; int TypeALNA; int TypeAPA; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;

__attribute__((used)) static bool FUNC_1(
 PDM_ODM_T VAR_9, const u32 VAR_10, const u32 VAR_11
)
{
 u8 VAR_12 =
   ((VAR_9->BoardType & VAR_4) >> 4) << 0 |
   ((VAR_9->BoardType & VAR_3) >> 3) << 1 |
   ((VAR_9->BoardType & VAR_6) >> 7) << 2 |
   ((VAR_9->BoardType & VAR_5) >> 6) << 3 |
   ((VAR_9->BoardType & VAR_2) >> 2) << 4;

 u32 VAR_13 = VAR_10, VAR_14 = VAR_11;
 u32 VAR_15 =
  VAR_9->CutVersion << 24 |
  VAR_9->SupportPlatform << 16 |
  VAR_9->PackageType << 12 |
  VAR_9->SupportInterface << 8 |
  VAR_12;

 u32 VAR_16 =
  VAR_9->TypeGLNA << 0 |
  VAR_9->TypeGPA << 8 |
  VAR_9->TypeALNA << 16 |
  VAR_9->TypeAPA << 24;

 FUNC_0(
  VAR_9,
  VAR_7,
  VAR_8,
  (
   "===> [8812A] CheckPositive (cond1, cond2) = (0x%X 0x%X)\n",
   VAR_13,
   VAR_14
  )
 );
 FUNC_0(
  VAR_9,
  VAR_7,
  VAR_8,
  (
   "===> [8812A] CheckPositive (driver1, driver2) = (0x%X 0x%X)\n",
   VAR_15,
   VAR_16
  )
 );

 FUNC_0(
  VAR_9,
  VAR_7,
  VAR_8,
  (
   "	(Platform, Interface) = (0x%X, 0x%X)\n",
   VAR_9->SupportPlatform,
   VAR_9->SupportInterface
  )
 );
 FUNC_0(
  VAR_9,
  VAR_7,
  VAR_8,
  (
   "	(Board, Package) = (0x%X, 0x%X)\n",
   VAR_9->BoardType,
   VAR_9->PackageType
  )
 );




 if (
  ((VAR_13 & 0x0000F000) != 0) &&
  ((VAR_13 & 0x0000F000) != (VAR_15 & 0x0000F000))
 )
  return 0;

 if (
  ((VAR_13 & 0x0F000000) != 0) &&
  ((VAR_13 & 0x0F000000) != (VAR_15 & 0x0F000000))
 )
  return 0;



 VAR_13 &= 0x000F0FFF;
 VAR_15 &= 0x000F0FFF;

 if ((VAR_13 & VAR_15) == VAR_13) {
  u32 VAR_17 = 0;

  if ((VAR_13 & 0x0F) == 0)
   return 1;

  if ((VAR_13 & VAR_0) != 0)
   VAR_17 |= 0x000000FF;
  if ((VAR_13 & VAR_1) != 0)
   VAR_17 |= 0x0000FF00;
  if ((VAR_13 & VAR_2) != 0)
   VAR_17 |= 0x00FF0000;
  if ((VAR_13 & VAR_3) != 0)
   VAR_17 |= 0xFF000000;


  if ((VAR_14 & VAR_17) == (VAR_16 & VAR_17))
   return 1;

  return 0;
 }

 return 0;
}
