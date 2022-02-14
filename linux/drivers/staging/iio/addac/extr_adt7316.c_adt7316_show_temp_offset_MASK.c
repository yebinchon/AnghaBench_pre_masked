
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* read ) (int ,int,int*) ;int client; } ;
struct adt7316_chip_info {TYPE_1__ bus; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct adt7316_chip_info *VAR_1,
     int VAR_2, char *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 int VAR_6;

 VAR_6 = VAR_1->bus.read(VAR_1->bus.client, VAR_2, &VAR_5);
 if (VAR_6)
  return -VAR_0;

 VAR_4 = (int)VAR_5;
 if (VAR_5 & 0x80)
  VAR_4 -= 256;

 return FUNC_0(VAR_3, "%d\n", VAR_4);
}
