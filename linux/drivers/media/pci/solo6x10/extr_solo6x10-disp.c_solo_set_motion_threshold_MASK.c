
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct solo_dev {int nr_chans; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct solo_dev*,scalar_t__,int ,int) ;

int FUNC_1(struct solo_dev *VAR_3, u8 VAR_4, u16 VAR_5)
{
 if (VAR_4 > VAR_3->nr_chans)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_1 +
       (VAR_4 * VAR_2 * 2),
       VAR_5, VAR_2);
}
