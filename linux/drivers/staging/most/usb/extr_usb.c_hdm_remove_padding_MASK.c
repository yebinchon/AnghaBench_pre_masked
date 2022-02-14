
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_dev {struct most_channel_config* conf; } ;
struct most_channel_config {int dummy; } ;
struct mbo {unsigned int processed_length; scalar_t__ virt_address; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct most_channel_config* const) ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct most_dev *VAR_2, int VAR_3,
         struct mbo *VAR_4)
{
 struct most_channel_config *const VAR_5 = &VAR_2->conf[VAR_3];
 unsigned int VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7, VAR_8;

 if (!VAR_6)
  return -VAR_0;
 VAR_8 = VAR_4->processed_length / VAR_1;

 for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
  FUNC_1(VAR_4->virt_address + VAR_6 * VAR_7,
   VAR_4->virt_address + VAR_1 * VAR_7,
   VAR_6);

 VAR_4->processed_length = VAR_6 * VAR_8;
 return 0;
}
