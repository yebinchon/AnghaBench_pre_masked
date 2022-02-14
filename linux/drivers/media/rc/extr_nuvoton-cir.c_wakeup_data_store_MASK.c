
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct rc_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (int ,char const*,int*) ;
 size_t FUNC_3 (char*,int,unsigned int*) ;
 int FUNC_4 (struct rc_dev*,unsigned int*,int) ;
 struct rc_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
     struct device_attribute *VAR_7,
     const char *VAR_8, size_t VAR_9)
{
 struct rc_dev *VAR_10 = FUNC_5(VAR_6);
 u8 VAR_11[VAR_5];
 char **VAR_12;
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 ssize_t VAR_16;

 VAR_12 = FUNC_2(VAR_3, VAR_8, &VAR_14);
 if (!VAR_12)
  return -VAR_2;
 if (!VAR_14 || VAR_14 > VAR_5) {
  VAR_16 = -VAR_1;
  goto out;
 }

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_16 = FUNC_3(VAR_12[VAR_13], 10, &VAR_15);
  if (VAR_16)
   goto out;
  VAR_15 = FUNC_0(VAR_15, VAR_4);
  if (!VAR_15 || VAR_15 > 0x7f) {
   VAR_16 = -VAR_1;
   goto out;
  }
  VAR_11[VAR_13] = VAR_15;

  if (VAR_13 % 2 == 0)
   VAR_11[VAR_13] |= VAR_0;
 }

 FUNC_4(VAR_10, VAR_11, VAR_14);

 VAR_16 = VAR_9;
out:
 FUNC_1(VAR_12);
 return VAR_16;
}
