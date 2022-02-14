
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sd_info {int sd_lock_status; } ;
struct rtsx_chip {int * capacity; struct sd_info sd_card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,unsigned int) ;

__attribute__((used)) static inline u32 FUNC_1(struct rtsx_chip *VAR_2, unsigned int VAR_3)
{
 return VAR_2->capacity[VAR_3];

}
