
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct solo_dev {scalar_t__ nr_chans; scalar_t__ nr_ext; scalar_t__ cur_disp_ch; } ;


 int VAR_0 ;
 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct solo_dev *VAR_1, u8 VAR_2)
{
 if (VAR_2 >= VAR_1->nr_chans + VAR_1->nr_ext)
  return -VAR_0;

 FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_1->cur_disp_ch, 0);
 FUNC_1(VAR_1, VAR_2, 1);

 VAR_1->cur_disp_ch = VAR_2;

 return 0;
}
