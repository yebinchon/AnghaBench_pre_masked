
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pool; int i; scalar_t__ addr; } ;
union cvmx_buf_ptr {TYPE_3__ s; } ;
struct TYPE_7__ {int bufs; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_10__ {union cvmx_buf_ptr packet_ptr; TYPE_2__ word2; } ;
typedef TYPE_4__ cvmx_wqe_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (union cvmx_buf_ptr) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(void *VAR_2)
{
 cvmx_wqe_t *VAR_3 = VAR_2;

 int VAR_4 = VAR_3->word2.s.bufs;
 union cvmx_buf_ptr VAR_5 = VAR_3->packet_ptr;

 while (VAR_4--) {
  union cvmx_buf_ptr VAR_6 = *(union cvmx_buf_ptr *)
   FUNC_2(VAR_5.s.addr - 8);
  if (FUNC_3(!VAR_5.s.i))
   FUNC_1(FUNC_0(VAR_5),
          VAR_5.s.pool,
          VAR_0 / 128);
  VAR_5 = VAR_6;
 }
 FUNC_1(VAR_3, VAR_1, 1);

 return 0;
}
