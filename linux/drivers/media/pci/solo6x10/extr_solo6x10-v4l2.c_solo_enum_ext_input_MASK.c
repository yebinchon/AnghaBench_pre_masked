
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; int name; } ;
struct solo_dev {int nr_chans; int nr_ext; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct solo_dev *VAR_1,
          struct v4l2_input *VAR_2)
{
 int VAR_3 = VAR_2->index - VAR_1->nr_chans;
 unsigned int VAR_4, VAR_5;

 if (VAR_3 >= VAR_1->nr_ext)
  return -VAR_0;

 VAR_4 = (VAR_3 == 4) ? 16 : 4;
 VAR_5 = (VAR_3 & 3) << 2;
 FUNC_0(VAR_2->name, sizeof(VAR_2->name),
   "Multi %d-up (cameras %d-%d)",
   VAR_4, VAR_5 + 1, VAR_5 + VAR_4);







 return 0;
}
