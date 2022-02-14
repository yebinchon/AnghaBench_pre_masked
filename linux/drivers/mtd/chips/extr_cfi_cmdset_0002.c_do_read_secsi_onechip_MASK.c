
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct map_info {int dummy; } ;
struct flchip {scalar_t__ state; int mutex; int wq; scalar_t__ start; } ;
typedef int loff_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct map_info*,int *,int ,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct map_info*,struct flchip*,int ,size_t) ;
 int FUNC_6 (struct map_info*,struct flchip*,int ,size_t) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static inline int FUNC_11(struct map_info *VAR_4,
     struct flchip *VAR_5, loff_t VAR_6,
     size_t VAR_7, u_char *VAR_8,
     size_t VAR_9)
{
 FUNC_0(VAR_3, VAR_2);

 retry:
 FUNC_3(&VAR_5->mutex);

 if (VAR_5->state != VAR_0){
  FUNC_9(VAR_1);
  FUNC_1(&VAR_5->wq, &VAR_3);

  FUNC_4(&VAR_5->mutex);

  FUNC_8();
  FUNC_7(&VAR_5->wq, &VAR_3);

  goto retry;
 }

 VAR_6 += VAR_5->start;

 VAR_5->state = VAR_0;

 FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_4, VAR_8, VAR_6, VAR_7);
 FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_10(&VAR_5->wq);
 FUNC_4(&VAR_5->mutex);

 return 0;
}
