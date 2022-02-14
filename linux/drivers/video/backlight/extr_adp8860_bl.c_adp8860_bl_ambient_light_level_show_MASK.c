
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adp8860_bl {int lock; int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 struct adp8860_bl* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct adp8860_bl *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 uint8_t VAR_7;
 uint16_t VAR_8;

 FUNC_2(&VAR_5->lock);
 VAR_6 = FUNC_0(VAR_5->client, VAR_1, &VAR_7);
 if (!VAR_6) {
  VAR_8 = VAR_7;
  VAR_6 = FUNC_0(VAR_5->client, VAR_0, &VAR_7);
 }
 FUNC_3(&VAR_5->lock);

 if (VAR_6)
  return VAR_6;


 VAR_8 += (VAR_7 & 0x1F) << 8;

 return FUNC_4(VAR_4, "%u\n", VAR_8);
}
