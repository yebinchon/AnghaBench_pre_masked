
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct coda_ctx {scalar_t__ tiled_map_type; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct coda_ctx *VAR_9, u32 VAR_10)
{
 u32 VAR_11, VAR_12;

 if (VAR_9->tiled_map_type == VAR_6) {

  VAR_11 = 0x20262024;
  VAR_12 = 2 << VAR_3;
 } else {

  VAR_11 = 0x02440243;
  VAR_12 = 1 << VAR_3;
 }
 FUNC_0(VAR_9->dev, VAR_11, VAR_5);
 if (VAR_10 == VAR_7 || VAR_10 == VAR_8) {
  VAR_12 |= 32 << VAR_2 |
    16 << VAR_1 |
    0 << VAR_0;
 } else {
  VAR_12 |= 32 << VAR_2 |
    8 << VAR_1 |
    8 << VAR_0;
 }
 FUNC_0(VAR_9->dev, VAR_12, VAR_4);
}
