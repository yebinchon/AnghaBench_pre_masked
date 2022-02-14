
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {unsigned long channel_user_ids; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct allegro_dev *VAR_1)
{
 if (VAR_1->channel_user_ids == ~0UL)
  return -VAR_0;

 return FUNC_0(VAR_1->channel_user_ids);
}
