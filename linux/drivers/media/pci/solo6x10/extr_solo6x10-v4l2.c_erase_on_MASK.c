
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int erasing; scalar_t__ frame_blank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct solo_dev*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct solo_dev *VAR_2)
{
 FUNC_0(VAR_2, VAR_0, VAR_1);
 VAR_2->erasing = 1;
 VAR_2->frame_blank = 0;
}
