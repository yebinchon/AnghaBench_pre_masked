
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint8_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adp8870_bl {int lock; int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,unsigned long*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,unsigned long) ;
 struct adp8870_bl* FUNC_4 (struct device*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 struct adp8870_bl *VAR_9 = FUNC_4(VAR_5);
 unsigned long VAR_10;
 uint8_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_7, 10, &VAR_10);
 if (VAR_12)
  return VAR_12;

 if (VAR_10 == 0) {

  FUNC_2(VAR_9->client, VAR_1, VAR_4);
 } else if ((VAR_10 > 0) && (VAR_10 < 6)) {

  FUNC_0(VAR_9->client, VAR_1, VAR_4);


  FUNC_6(&VAR_9->lock);
  VAR_12 = FUNC_1(VAR_9->client, VAR_0, &VAR_11);
  if (!VAR_12) {
   VAR_11 &= ~(VAR_2 << VAR_3);
   VAR_11 |= (VAR_10 - 1) << VAR_3;
   FUNC_3(VAR_9->client, VAR_0, VAR_11);
  }
  FUNC_7(&VAR_9->lock);
 }

 return VAR_8;
}
