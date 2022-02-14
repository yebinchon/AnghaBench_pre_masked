
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct io_ring_ctx {int completion_lock; } ;


 int FUNC_0 (struct io_ring_ctx*) ;
 int FUNC_1 (struct io_ring_ctx*) ;
 int FUNC_2 (struct io_ring_ctx*,int ,long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct io_ring_ctx *VAR_0, u64 VAR_1,
    long VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_0->completion_lock, VAR_3);
 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_0);
 FUNC_4(&VAR_0->completion_lock, VAR_3);

 FUNC_1(VAR_0);
}
