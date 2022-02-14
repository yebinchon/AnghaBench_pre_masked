
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; int pfn; } ;
struct csio_eq_params {int eqid; scalar_t__ vfn; int pfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,struct csio_mb*,void*,int ,struct csio_eq_params*,void (*) (struct csio_hw*,struct csio_mb*)) ;
 int FUNC_1 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_2 (struct csio_hw*,int) ;
 int FUNC_3 (struct csio_hw*,struct csio_mb*,int) ;
 struct csio_mb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct csio_mb*,int ) ;
 int FUNC_6 (struct csio_eq_params*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct csio_hw *VAR_3, void *VAR_4, int VAR_5,
     void (*VAR_6) (struct csio_hw *, struct csio_mb *))
{
 int VAR_7 = 0;
 struct csio_mb *VAR_8;
 struct csio_eq_params VAR_9;

 FUNC_6(&VAR_9, 0, sizeof(struct csio_eq_params));

 VAR_8 = FUNC_4(VAR_3->mb_mempool, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9.pfn = VAR_3->pfn;
 VAR_9.vfn = 0;
 VAR_9.eqid = FUNC_2(VAR_3, VAR_5);

 FUNC_0(VAR_3, VAR_8, VAR_4, VAR_0, &VAR_9, VAR_6);

 VAR_7 = FUNC_1(VAR_3, VAR_8);
 if (VAR_7 != 0) {
  FUNC_5(VAR_8, VAR_3->mb_mempool);
  return VAR_7;
 }

 if (VAR_6 != ((void*)0))
  return 0;

 return FUNC_3(VAR_3, VAR_8, VAR_5);
}
