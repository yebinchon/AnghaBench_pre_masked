
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* write ) (int ,int ,int) ;int client; } ;
struct adt7316_chip_info {int config1; TYPE_1__ bus; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct adt7316_chip_info *VAR_3,
          int VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 if (VAR_4)
  VAR_5 = VAR_3->config1 | VAR_1;
 else
  VAR_5 = VAR_3->config1 & ~VAR_1;

 VAR_6 = VAR_3->bus.write(VAR_3->bus.client, VAR_0, VAR_5);
 if (VAR_6)
  return -VAR_2;

 VAR_3->config1 = VAR_5;

 return VAR_6;
}
