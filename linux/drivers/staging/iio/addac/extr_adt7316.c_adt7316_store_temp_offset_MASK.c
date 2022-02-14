
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int (* write ) (int ,int,scalar_t__) ;int client; } ;
struct adt7316_chip_info {TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (int ,int,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(struct adt7316_chip_info *VAR_2,
      int VAR_3,
      const char *VAR_4,
      size_t VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, 10, &VAR_6);
 if (VAR_8 || VAR_6 > 127 || VAR_6 < -128)
  return -VAR_0;

 if (VAR_6 < 0)
  VAR_6 += 256;

 VAR_7 = (u8)VAR_6;

 VAR_8 = VAR_2->bus.write(VAR_2->bus.client, VAR_3, VAR_7);
 if (VAR_8)
  return -VAR_1;

 return VAR_5;
}
