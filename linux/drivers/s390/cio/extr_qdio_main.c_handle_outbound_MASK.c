
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pci_out_enabled; int timer; scalar_t__ use_cq; } ;
struct TYPE_5__ {TYPE_3__ out; } ;
struct qdio_q {TYPE_2__ u; TYPE_1__* irq_ptr; int nr_buf_used; } ;
struct TYPE_4__ {unsigned int scan_threshold; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct qdio_q*,int ,unsigned char*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct qdio_q*) ;
 scalar_t__ FUNC_6 (struct qdio_q*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (struct qdio_q*,unsigned long) ;
 int FUNC_10 (struct qdio_q*) ;
 int FUNC_11 (struct qdio_q*) ;
 int FUNC_12 (struct qdio_q*,int ) ;
 scalar_t__ FUNC_13 (struct qdio_q*) ;
 int FUNC_14 (struct qdio_q*,int,unsigned char,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct qdio_q *VAR_11, unsigned int VAR_12,
      int VAR_13, int VAR_14)
{
 const unsigned int VAR_15 = VAR_11->irq_ptr->scan_threshold;
 unsigned char VAR_16 = 0;
 int VAR_17, VAR_18 = 0;

 FUNC_12(VAR_11, VAR_8);

 VAR_14 = FUNC_14(VAR_11, VAR_13, VAR_5, VAR_14);
 VAR_17 = FUNC_1(VAR_14, &VAR_11->nr_buf_used);

 if (VAR_17 == VAR_4)
  FUNC_12(VAR_11, VAR_9);

 if (VAR_12 & VAR_1) {
  VAR_11->u.out.pci_out_enabled = 1;
  FUNC_12(VAR_11, VAR_10);
 } else
  VAR_11->u.out.pci_out_enabled = 0;

 if (FUNC_13(VAR_11) == VAR_2) {
  unsigned long VAR_19 = 0;


  FUNC_0(VAR_14 > 1 && !FUNC_5(VAR_11));

  if (VAR_11->u.out.use_cq)
   VAR_19 = FUNC_8(&VAR_11->u.out, VAR_13);

  VAR_18 = FUNC_9(VAR_11, VAR_19);
 } else if (FUNC_6(VAR_11)) {
  VAR_18 = FUNC_10(VAR_11);
 } else if (VAR_14 < VAR_4 &&
     FUNC_2(VAR_11, FUNC_7(VAR_13), &VAR_16, 0) > 0 &&
     VAR_16 == VAR_5) {

  FUNC_12(VAR_11, VAR_6);
 } else {
  VAR_18 = FUNC_9(VAR_11, 0);
 }


 if (!VAR_15)
  return VAR_18;


 if (VAR_17 >= VAR_15 || VAR_18)
  FUNC_11(VAR_11);
 else

  if (!FUNC_15(&VAR_11->u.out.timer) &&
      FUNC_3(VAR_11->irq_ptr->state == VAR_3))
   FUNC_4(&VAR_11->u.out.timer, VAR_7 + VAR_0);
 return VAR_18;
}
