
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {scalar_t__ erasing; int frame_blank; } ;


 int VAR_0 ;
 int FUNC_0 (struct solo_dev*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct solo_dev *VAR_1)
{
 if (!VAR_1->erasing)
  return 0;


 if (!VAR_1->frame_blank)
  FUNC_0(VAR_1, VAR_0, 0);

 if (VAR_1->frame_blank++ >= 8)
  VAR_1->erasing = 0;

 return 1;
}
