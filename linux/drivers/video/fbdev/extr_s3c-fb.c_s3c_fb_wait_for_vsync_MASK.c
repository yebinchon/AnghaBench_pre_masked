
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {unsigned long count; int wait; } ;
struct s3c_fb {int dev; TYPE_1__ vsync_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct s3c_fb*) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct s3c_fb *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_4 != 0)
  return -VAR_0;

 FUNC_1(VAR_3->dev);

 VAR_5 = VAR_3->vsync_info.count;
 FUNC_3(VAR_3);
 VAR_6 = FUNC_4(VAR_3->vsync_info.wait,
           VAR_5 != VAR_3->vsync_info.count,
           FUNC_0(VAR_2));

 FUNC_2(VAR_3->dev);

 if (VAR_6 == 0)
  return -VAR_1;

 return 0;
}
