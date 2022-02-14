
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct s5c73m3 {int sensor_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct s5c73m3*,int ,unsigned int*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int *,char*,int ) ;
 int FUNC_6 (int *,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct s5c73m3 *VAR_6, unsigned int VAR_7)
{
 unsigned long VAR_8 = VAR_4;
 unsigned long VAR_9 = VAR_8 + FUNC_1(2000);
 int VAR_10;
 u16 VAR_11;
 int VAR_12 = 0;

 do {
  VAR_10 = FUNC_2(VAR_6, VAR_3, &VAR_11);
  if (VAR_10 < 0 || VAR_11 == VAR_7)
   break;
  FUNC_4(500, 1000);
  ++VAR_12;
 } while (FUNC_3(VAR_9));

 if (VAR_12 > 0)
  FUNC_5(1, VAR_5, &VAR_6->sensor_sd,
    "status check took %dms\n",
    FUNC_0(VAR_4 - VAR_8));

 if (VAR_10 == 0 && VAR_11 != VAR_7) {
  u16 VAR_13 = 0;
  u16 VAR_14 = 0;

  FUNC_2(VAR_6, VAR_2, &VAR_13);
  FUNC_2(VAR_6, VAR_1, &VAR_14);

  FUNC_6(&VAR_6->sensor_sd,
    "wrong status %#x, expected: %#x, i2c_status: %#x/%#x\n",
    VAR_11, VAR_7, VAR_13, VAR_14);

  return -VAR_0;
 }

 return VAR_10;
}
