
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int addr; int back; } ;
union cvmx_buf_ptr {TYPE_2__ s; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_10__ {int bufs; } ;
struct TYPE_9__ {TYPE_4__ s; } ;
struct TYPE_11__ {TYPE_1__ word1; union cvmx_buf_ptr packet_ptr; TYPE_3__ word2; } ;
typedef TYPE_5__ cvmx_wqe_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(cvmx_wqe_t *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3 = VAR_1->word2.s.bufs;
 union cvmx_buf_ptr VAR_4 = VAR_1->packet_ptr;
 int VAR_5 = VAR_1->word1.len;
 int VAR_6;

 while (VAR_3--) {
  union cvmx_buf_ptr VAR_7;

  VAR_7 = *(union cvmx_buf_ptr *)
   FUNC_0(VAR_4.s.addr - 8);
  VAR_6 =
   VAR_0 -
   (VAR_4.s.addr -
    (((VAR_4.s.addr >> 7) -
      VAR_4.s.back) << 7));


  if (VAR_6 > VAR_5)
   VAR_6 = VAR_5;


  FUNC_1(VAR_2, FUNC_0(VAR_4.s.addr),
        VAR_6);
  VAR_5 -= VAR_6;
  VAR_4 = VAR_7;
 }
}
