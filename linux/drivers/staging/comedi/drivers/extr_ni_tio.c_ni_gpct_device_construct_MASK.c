
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_route_tables {int dummy; } ;
struct ni_gpct_device {void (* write ) (struct ni_gpct*,unsigned int,int) ;unsigned int (* read ) (struct ni_gpct*,int) ;int variant; unsigned int num_counters; unsigned int num_chips; unsigned int chip_index; unsigned int counter_index; int lock; struct ni_gpct_device* counter_dev; struct ni_gpct_device* counters; struct ni_gpct_device* regs; int regs_lock; struct ni_route_tables const* routing_tables; struct comedi_device* dev; } ;
struct ni_gpct {void (* write ) (struct ni_gpct*,unsigned int,int) ;unsigned int (* read ) (struct ni_gpct*,int) ;int variant; unsigned int num_counters; unsigned int num_chips; unsigned int chip_index; unsigned int counter_index; int lock; struct ni_gpct* counter_dev; struct ni_gpct* counters; struct ni_gpct* regs; int regs_lock; struct ni_route_tables const* routing_tables; struct comedi_device* dev; } ;
struct comedi_device {int dummy; } ;
typedef enum ni_gpct_variant { ____Placeholder_ni_gpct_variant } ni_gpct_variant ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 void* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct ni_gpct_device*) ;
 struct ni_gpct_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct ni_gpct_device *
FUNC_5(struct comedi_device *VAR_1,
    void (*VAR_2)(struct ni_gpct *VAR_3,
           unsigned int VAR_4,
           enum ni_gpct_register VAR_5),
    unsigned int (*VAR_6)(struct ni_gpct *VAR_7,
           enum ni_gpct_register VAR_8),
    enum ni_gpct_variant VAR_9,
    unsigned int VAR_10,
    unsigned int VAR_11,
    const struct ni_route_tables *VAR_12)
{
 struct ni_gpct_device *VAR_13;
 struct ni_gpct *VAR_14;
 unsigned int VAR_15;

 if (VAR_10 == 0 || VAR_11 == 0)
  return ((void*)0);

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_0);
 if (!VAR_13)
  return ((void*)0);

 VAR_13->dev = VAR_1;
 VAR_13->write = VAR_2;
 VAR_13->read = VAR_6;
 VAR_13->variant = VAR_9;
 VAR_13->routing_tables = VAR_12;

 FUNC_4(&VAR_13->regs_lock);

 VAR_13->num_counters = VAR_10;
 VAR_13->num_chips = FUNC_0(VAR_10, VAR_11);

 VAR_13->counters = FUNC_1(VAR_10, sizeof(*VAR_14),
     VAR_0);
 VAR_13->regs = FUNC_1(VAR_13->num_chips,
        sizeof(*VAR_13->regs), VAR_0);
 if (!VAR_13->regs || !VAR_13->counters) {
  FUNC_2(VAR_13->regs);
  FUNC_2(VAR_13->counters);
  FUNC_2(VAR_13);
  return ((void*)0);
 }

 for (VAR_15 = 0; VAR_15 < VAR_10; ++VAR_15) {
  VAR_14 = &VAR_13->counters[VAR_15];
  VAR_14->counter_dev = VAR_13;
  VAR_14->chip_index = VAR_15 / VAR_11;
  VAR_14->counter_index = VAR_15 % VAR_11;
  FUNC_4(&VAR_14->lock);
 }

 return VAR_13;
}
