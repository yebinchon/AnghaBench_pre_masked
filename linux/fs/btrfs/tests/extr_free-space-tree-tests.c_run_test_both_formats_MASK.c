
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int test_func_t ;


 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(test_func_t VAR_0, u32 VAR_1,
     u32 VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, 0, VAR_1, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_1(
 "%ps failed with extents, sectorsize=%u, nodesize=%u, alignment=%u",
    VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_4 = VAR_5;
 }

 VAR_5 = FUNC_0(VAR_0, 1, VAR_1, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_1(
 "%ps failed with bitmaps, sectorsize=%u, nodesize=%u, alignment=%u",
    VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_4 = VAR_5;
 }

 return VAR_4;
}
