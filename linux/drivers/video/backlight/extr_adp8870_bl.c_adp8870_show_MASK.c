
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device {int dummy; } ;
struct adp8870_bl {int lock; int client; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int,int*) ;
 struct adp8870_bl* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, char *VAR_1, int VAR_2)
{
 struct adp8870_bl *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;
 uint8_t VAR_5;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3->client, VAR_2, &VAR_5);
 FUNC_3(&VAR_3->lock);

 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_4(VAR_1, "%u\n", VAR_5);
}
