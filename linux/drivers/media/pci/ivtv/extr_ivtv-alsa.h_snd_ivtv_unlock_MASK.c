
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ivtv_card {int v4l2_dev; } ;
struct ivtv {int serialize_lock; } ;


 int FUNC_0 (int *) ;
 struct ivtv* FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct snd_ivtv_card *VAR_0)
{
 struct ivtv *VAR_1 = FUNC_1(VAR_0->v4l2_dev);
 FUNC_0(&VAR_1->serialize_lock);
}
