
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adp8860_bl {int lock; int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 struct adp8860_bl* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4, char *VAR_5)
{
 struct adp8860_bl *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;
 uint8_t VAR_8;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6->client, VAR_0, &VAR_8);
 FUNC_3(&VAR_6->lock);

 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_4(VAR_5, "%u\n",
  ((VAR_8 >> VAR_2) & VAR_1) + 1);
}
