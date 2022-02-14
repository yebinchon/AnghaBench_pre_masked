
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_avail {scalar_t__ offset; scalar_t__ range; struct irq_avail* bitmap; } ;
struct device_node {int dummy; } ;
struct cxl {TYPE_1__* guest; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ irq_base_offset; int irq_nranges; struct irq_avail* irq_avail; int irq_alloc_lock; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int const) ;
 scalar_t__ VAR_3 ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct irq_avail*) ;
 int * FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct cxl *VAR_4, struct device_node *VAR_5)
{
 const __be32 *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct irq_avail *VAR_10;

 VAR_6 = FUNC_4(VAR_5, "interrupt-ranges", &VAR_7);
 if (VAR_6 == ((void*)0) || VAR_7 < (2 * sizeof(int)))
  return -VAR_0;





 VAR_8 = VAR_7 / (2 * sizeof(int));
 if (VAR_8 == 0 || (VAR_8 * 2 * sizeof(int)) != VAR_7)
  return -VAR_0;

 VAR_4->guest->irq_avail = FUNC_2(VAR_8, sizeof(struct irq_avail),
         VAR_2);
 if (VAR_4->guest->irq_avail == ((void*)0))
  return -VAR_1;

 VAR_4->guest->irq_base_offset = FUNC_1(VAR_6[0]);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_10 = &VAR_4->guest->irq_avail[VAR_9];
  VAR_10->offset = FUNC_1(VAR_6[VAR_9 * 2]);
  VAR_10->range = FUNC_1(VAR_6[VAR_9 * 2 + 1]);
  VAR_10->bitmap = FUNC_2(FUNC_0(VAR_10->range),
    sizeof(*VAR_10->bitmap), VAR_2);
  if (VAR_10->bitmap == ((void*)0))
   goto err;
  if (VAR_10->offset < VAR_4->guest->irq_base_offset)
   VAR_4->guest->irq_base_offset = VAR_10->offset;
  if (VAR_3)
   FUNC_5("available IRQ range: %#lx-%#lx (%lu)\n",
    VAR_10->offset, VAR_10->offset + VAR_10->range - 1,
    VAR_10->range);
 }
 VAR_4->guest->irq_nranges = VAR_8;
 FUNC_6(&VAR_4->guest->irq_alloc_lock);

 return 0;
err:
 for (VAR_9--; VAR_9 >= 0; VAR_9--) {
  VAR_10 = &VAR_4->guest->irq_avail[VAR_9];
  FUNC_3(VAR_10->bitmap);
 }
 FUNC_3(VAR_4->guest->irq_avail);
 VAR_4->guest->irq_avail = ((void*)0);
 return -VAR_1;
}
