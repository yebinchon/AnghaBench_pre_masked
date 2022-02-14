
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {scalar_t__ type; int* jpeg_qp; int jpeg_qp_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct solo_dev*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct solo_dev *VAR_9)
{
 if (VAR_9->type == VAR_0) {
  FUNC_2(VAR_9, VAR_8,
          (2 << 24) | (2 << 16) | (2 << 8) | 2);
 } else {
  FUNC_2(VAR_9, VAR_8,
          (4 << 24) | (3 << 16) | (2 << 8) | 1);
 }

 FUNC_3(&VAR_9->jpeg_qp_lock);


 VAR_9->jpeg_qp[0] = VAR_9->jpeg_qp[1] = VAR_2;
 FUNC_2(VAR_9, VAR_7, VAR_2);
 FUNC_2(VAR_9, VAR_6, VAR_2);

 FUNC_2(VAR_9, VAR_3,
  (FUNC_1(VAR_9) & 0xffff0000) |
  ((FUNC_0(VAR_9) >> 16) & 0x0000ffff));
 FUNC_2(VAR_9, VAR_5, 0xffffffff);
 if (VAR_9->type == VAR_1) {
  FUNC_2(VAR_9, VAR_4,
          (0 << 16) | (30 << 8) | 60);
 }
}
