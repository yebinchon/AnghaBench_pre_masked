
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {scalar_t__ state; int mutex; scalar_t__ start; } ;
struct cfi_private {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct map_info*,struct flchip*,unsigned long,scalar_t__) ;
 int FUNC_2 (struct map_info*) ;
 int FUNC_3 (struct map_info*,int *,int,size_t) ;
 int FUNC_4 (struct map_info*,int ,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct map_info*,struct flchip*,unsigned long) ;

__attribute__((used)) static inline int FUNC_8(struct map_info *VAR_2, struct flchip *VAR_3, loff_t VAR_4, size_t VAR_5, u_char *VAR_6)
{
 unsigned long VAR_7;
 struct cfi_private *VAR_8 = VAR_2->fldrv_priv;
 int VAR_9;

 VAR_4 += VAR_3->start;


 VAR_7 = VAR_4 & ~(FUNC_2(VAR_2)-1);

 FUNC_5(&VAR_3->mutex);
 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_7, VAR_1);
 if (VAR_9) {
  FUNC_6(&VAR_3->mutex);
  return VAR_9;
 }

 if (VAR_3->state != VAR_0 && VAR_3->state != VAR_1) {
  FUNC_4(VAR_2, FUNC_0(0xff), VAR_7);

  VAR_3->state = VAR_1;
 }

 FUNC_3(VAR_2, VAR_6, VAR_4, VAR_5);

 FUNC_7(VAR_2, VAR_3, VAR_7);

 FUNC_6(&VAR_3->mutex);
 return 0;
}
