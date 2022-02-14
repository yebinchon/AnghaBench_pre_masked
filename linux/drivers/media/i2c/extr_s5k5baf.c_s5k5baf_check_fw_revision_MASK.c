
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct s5k5baf {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct s5k5baf*) ;
 int FUNC_1 (struct s5k5baf*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct s5k5baf *VAR_5)
{
 u16 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 VAR_7 = FUNC_1(VAR_5, VAR_2) & 0xff;
 VAR_8 = FUNC_1(VAR_5, VAR_3);
 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(&VAR_5->sd, "FW API=%#x, revision=%#x sensor_id=%#x\n",
    VAR_6, VAR_7, VAR_8);

 if (VAR_6 != VAR_4) {
  FUNC_2(&VAR_5->sd, "FW API version not supported\n");
  return -VAR_0;
 }

 return 0;
}
