
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int z; int y; int x; } ;
struct lis3lv02d {scalar_t__ whoami; int (* read_data ) (struct lis3lv02d*,int ) ;int scale; TYPE_1__ ac; int (* blkread ) (struct lis3lv02d*,int ,int,scalar_t__*) ;} ;
typedef int s8 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (struct lis3lv02d*,int ,int,scalar_t__*) ;
 int FUNC_3 (struct lis3lv02d*,int ,int,scalar_t__*) ;
 int FUNC_4 (struct lis3lv02d*,int ) ;
 int FUNC_5 (struct lis3lv02d*,int ) ;
 int FUNC_6 (struct lis3lv02d*,int ) ;

__attribute__((used)) static void FUNC_7(struct lis3lv02d *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
 int VAR_10[3];
 int VAR_11;

 if (VAR_6->blkread) {
  if (VAR_6->whoami == VAR_5) {
   u16 VAR_12[3];
   VAR_6->blkread(VAR_6, VAR_2, 6, (u8 *)VAR_12);
   for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    VAR_10[VAR_11] = (s16)FUNC_0(VAR_12[VAR_11]);
  } else {
   u8 VAR_13[5];

   VAR_6->blkread(VAR_6, VAR_1, 5, VAR_13);
   for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
    VAR_10[VAR_11] = (s8)VAR_13[VAR_11 * 2];
  }
 } else {
  VAR_10[0] = VAR_6->read_data(VAR_6, VAR_1);
  VAR_10[1] = VAR_6->read_data(VAR_6, VAR_3);
  VAR_10[2] = VAR_6->read_data(VAR_6, VAR_4);
 }

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
  VAR_10[VAR_11] = (VAR_10[VAR_11] * VAR_6->scale) / VAR_0;

 *VAR_7 = FUNC_1(VAR_6->ac.x, VAR_10);
 *VAR_8 = FUNC_1(VAR_6->ac.y, VAR_10);
 *VAR_9 = FUNC_1(VAR_6->ac.z, VAR_10);
}
