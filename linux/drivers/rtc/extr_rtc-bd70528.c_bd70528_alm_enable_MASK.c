
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct bd70528_rtc {TYPE_1__* mfd; } ;
struct TYPE_4__ {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct device*,char*) ;
 struct bd70528_rtc* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5 = VAR_0;
 struct bd70528_rtc *VAR_6 = FUNC_4(VAR_2);

 if (VAR_3)
  VAR_5 = 0;

 FUNC_1(VAR_6->mfd);
 VAR_4 = FUNC_0(VAR_6->mfd, VAR_3, ((void*)0));
 if (VAR_4) {
  FUNC_3(VAR_2, "Failed to change wake state\n");
  goto out_unlock;
 }
 VAR_4 = FUNC_5(VAR_6->mfd->regmap, VAR_1,
     VAR_0, VAR_5);
 if (VAR_4)
  FUNC_3(VAR_2, "Failed to change alarm state\n");

out_unlock:
 FUNC_2(VAR_6->mfd);
 return VAR_4;
}
