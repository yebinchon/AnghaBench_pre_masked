
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {int crashed; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (struct iss_device*,int ,int ) ;
 int FUNC_3 (struct iss_device*,int ,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iss_device *VAR_4)
{
 unsigned int VAR_5;

 FUNC_3(VAR_4, VAR_3, VAR_1,
      VAR_2);

 VAR_5 = FUNC_1(
  !(FUNC_2(VAR_4, VAR_3, VAR_1) &
  VAR_2), 1000, 10, 100);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "ISS reset timeout\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_4->crashed);

 return 0;
}
