
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mb {int dummy; } ;
struct csio_iq_params {int fl0id; int fl1id; int type; int iqid; scalar_t__ vfn; int pfn; } ;
struct csio_hw {int mb_mempool; int pfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csio_hw*,struct csio_mb*,void*,int ,struct csio_iq_params*,void (*) (struct csio_hw*,struct csio_mb*)) ;
 int FUNC_1 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_2 (struct csio_hw*,int) ;
 int FUNC_3 (struct csio_hw*,int) ;
 int FUNC_4 (struct csio_hw*,int) ;
 int FUNC_5 (struct csio_hw*,struct csio_mb*,int) ;
 struct csio_mb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct csio_mb*,int ) ;
 int FUNC_8 (struct csio_iq_params*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct csio_hw *VAR_4, void *VAR_5, int VAR_6,
     void (*VAR_7)(struct csio_hw *, struct csio_mb *))
{
 int VAR_8 = 0;
 struct csio_mb *VAR_9;
 struct csio_iq_params VAR_10;
 int VAR_11;

 FUNC_8(&VAR_10, 0, sizeof(struct csio_iq_params));

 VAR_9 = FUNC_6(VAR_4->mb_mempool, VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_10.pfn = VAR_4->pfn;
 VAR_10.vfn = 0;
 VAR_10.iqid = FUNC_4(VAR_4, VAR_6);
 VAR_10.type = VAR_2;

 VAR_11 = FUNC_3(VAR_4, VAR_6);
 if (VAR_11 != -1)
  VAR_10.fl0id = FUNC_2(VAR_4, VAR_11);
 else
  VAR_10.fl0id = 0xFFFF;

 VAR_10.fl1id = 0xFFFF;

 FUNC_0(VAR_4, VAR_9, VAR_5, VAR_0, &VAR_10, VAR_7);

 VAR_8 = FUNC_1(VAR_4, VAR_9);
 if (VAR_8 != 0) {
  FUNC_7(VAR_9, VAR_4->mb_mempool);
  return VAR_8;
 }

 if (VAR_7 != ((void*)0))
  return 0;

 return FUNC_5(VAR_4, VAR_9, VAR_6);
}
