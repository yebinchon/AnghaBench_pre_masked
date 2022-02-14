
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct block_device {scalar_t__ bd_claiming; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct block_device*,struct block_device*,void*) ;
 int VAR_2 ;
 int * FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_4,
          struct block_device *VAR_5, void *VAR_6)
{
retry:

 if (!FUNC_1(VAR_4, VAR_5, VAR_6))
  return -VAR_0;


 if (VAR_5->bd_claiming) {
  wait_queue_head_t *VAR_7 = FUNC_2(&VAR_5->bd_claiming, 0);
  FUNC_0(VAR_3);

  FUNC_4(VAR_7, &VAR_3, VAR_1);
  FUNC_7(&VAR_2);
  FUNC_5();
  FUNC_3(VAR_7, &VAR_3);
  FUNC_6(&VAR_2);
  goto retry;
 }


 return 0;
}
